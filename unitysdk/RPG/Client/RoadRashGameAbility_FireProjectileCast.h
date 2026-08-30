#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_METHOD_4_2A733A8E5A7D6A1E_OFFSET UNITYSDK_OFFSET(0x1D315850)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_METHOD_4_84261CD49F75E1DC_OFFSET UNITYSDK_OFFSET(0x1D315890)
#define RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D315880)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_FireProjectileCast_TypeDefinitionIndex = 10276;

	class RoadRashGameAbility_FireProjectileCast : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireCastTime; // 0x18
		::RPG::GameCore::FixPoint Lv2RequireCastTime; // 0x20
		::System::String* LV2ToggleName; // 0x28
		::RPG::GameCore::FixPoint Lv2MaxTargetCount; // 0x30
		::System::String* CurrentLevelAttributeName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2A733A8E5A7D6A1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_METHOD_4_2A733A8E5A7D6A1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84261CD49F75E1DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_FIREPROJECTILECAST_METHOD_4_84261CD49F75E1DC_OFFSET))(a1, a2);
		}
	};
}
