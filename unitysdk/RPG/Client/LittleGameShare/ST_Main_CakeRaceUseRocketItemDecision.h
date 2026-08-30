#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_METHOD_5_09012FD920A76EE8_OFFSET UNITYSDK_OFFSET(0x1D30D8F0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_METHOD_5_D8AE7D85C02F08BC_OFFSET UNITYSDK_OFFSET(0x1D311E80)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30D8E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseRocketItemDecision_TypeDefinitionIndex = 10330;

	class ST_Main_CakeRaceUseRocketItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::Client::LittleGameShare::ST_TargetCatType TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D8AE7D85C02F08BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_METHOD_5_D8AE7D85C02F08BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_09012FD920A76EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_METHOD_5_09012FD920A76EE8_OFFSET))(a1, a2);
		}
	};
}
