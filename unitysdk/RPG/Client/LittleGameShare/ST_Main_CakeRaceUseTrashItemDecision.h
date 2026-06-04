#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION_METHOD_5_32D3EA889B40311B_OFFSET UNITYSDK_OFFSET(0x193BA400)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION_METHOD_5_D60B8E37BE104290_OFFSET UNITYSDK_OFFSET(0x193BA320)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x193BA3B0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseTrashItemDecision_TypeDefinitionIndex = 9977;

	class ST_Main_CakeRaceUseTrashItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::Client::LittleGameShare::ST_TargetCatType TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C
		::System::UInt32 SimulateStep; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D60B8E37BE104290(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION_METHOD_5_D60B8E37BE104290_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_32D3EA889B40311B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSETRASHITEMDECISION_METHOD_5_32D3EA889B40311B_OFFSET))(a1, a2);
		}
	};
}
