#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_METHOD_2_2587181FBF08A98F_OFFSET UNITYSDK_OFFSET(0x1CD5EA40)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5EBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe_TypeDefinitionIndex = 10301;

	class RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint PlayerProgress; // 0x10
		::RPG::GameCore::FixPoint TargetDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2587181FBF08A98F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_METHOD_2_2587181FBF08A98F_OFFSET))(a1, a2);
		}
	};
}
