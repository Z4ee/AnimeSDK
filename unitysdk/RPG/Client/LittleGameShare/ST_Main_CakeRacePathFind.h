#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_METHOD_5_A8407068FDC9323C_OFFSET UNITYSDK_OFFSET(0x16E87E60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_METHOD_5_BDF196C5E4646231_OFFSET UNITYSDK_OFFSET(0x16E89E80)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND__CTOR_OFFSET UNITYSDK_OFFSET(0x16E87E10)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePathFind_TypeDefinitionIndex = 9985;

	class ST_Main_CakeRacePathFind : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 MinDuration; // 0x18
		::System::UInt32 MaxDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BDF196C5E4646231(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_METHOD_5_BDF196C5E4646231_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A8407068FDC9323C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_METHOD_5_A8407068FDC9323C_OFFSET))(a1, a2);
		}
	};
}
