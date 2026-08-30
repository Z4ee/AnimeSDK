#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECATAICONFIG_METHOD_2_5A3152F0034737CB_OFFSET UNITYSDK_OFFSET(0x1D0FE650)
#define RPG_GAMECORE_CAKERACECATAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FEA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatAIConfig_TypeDefinitionIndex = 18210;

	class CakeRaceCatAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 HeightMm; // 0x10
		::System::UInt32 RadiusMm; // 0x14
		::System::UInt32 JumpHeightMm; // 0x18
		::System::Int32 HazardPerception; // 0x1C
		::System::Int32 GoalWeight; // 0x20
		::System::Int32 RepeatCostWeight; // 0x24
		::System::Int32 StepCostWeight; // 0x28
		::System::Boolean IsBroadenX; // 0x2C
		::System::Boolean IsOnlySpecialBet; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A3152F0034737CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATAICONFIG_METHOD_2_5A3152F0034737CB_OFFSET))(a1, a2);
		}
	};
}
