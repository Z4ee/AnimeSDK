#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2_METHOD_4_24C4802A722D00E0_OFFSET UNITYSDK_OFFSET(0x1CD5B350)
#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2_METHOD_4_DF932E7866BCB2AB_OFFSET UNITYSDK_OFFSET(0x1CD5B310)
#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5B340)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_UltimateV2_TypeDefinitionIndex = 10284;

	class RoadRashGameAbility_UltimateV2 : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MinCastEnergyPercent; // 0x18
		::RPG::GameCore::FixPoint BaseSpeedMultiple; // 0x20
		::RPG::GameCore::FixPoint EnergyDecreaseSpeed; // 0x28
		::System::String* EnergySpeedDeltaAttributeName; // 0x30
		::RPG::GameCore::FixPoint QTEWindowStartOffsetPercent; // 0x38
		::RPG::GameCore::FixPoint QTEWindowLengthPercent; // 0x40
		::RPG::GameCore::FixPoint QTESpeedMultipleIncrease; // 0x48
		::RPG::GameCore::FixPoint FOV; // 0x50
		::RPG::GameCore::FixPoint FOVDuration; // 0x58
		::System::String* FOVBlendInCurveName; // 0x60
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x68
		::System::String* FOVBlendOutCurveName; // 0x70
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x78
		::RPG::GameCore::FixPoint BlurRadius; // 0x80
		::RPG::GameCore::FixPoint BlurStart; // 0x88
		::RPG::GameCore::FixPoint BlurFeather; // 0x90
		::RPG::GameCore::FixPoint QTEFOV; // 0x98
		::RPG::GameCore::FixPoint QTEFOVDuration; // 0xA0
		::System::String* QTEFOVBlendInCurveName; // 0xA8
		::RPG::GameCore::FixPoint QTEFOVBlendInTime; // 0xB0
		::System::String* QTEFOVBlendOutCurveName; // 0xB8
		::RPG::GameCore::FixPoint QTEFOVBlendOutTime; // 0xC0
		::RPG::GameCore::FixPoint QTEBlurRadius; // 0xC8
		::RPG::GameCore::FixPoint QTEBlurStart; // 0xD0
		::RPG::GameCore::FixPoint QTEBlurFeather; // 0xD8
		::RPG::GameCore::FixPoint QTEBlurDuration; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF932E7866BCB2AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_UltimateV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_UltimateV2*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2_METHOD_4_DF932E7866BCB2AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_24C4802A722D00E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_UltimateV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_UltimateV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATEV2_METHOD_4_24C4802A722D00E0_OFFSET))(a1, a2);
		}
	};
}
