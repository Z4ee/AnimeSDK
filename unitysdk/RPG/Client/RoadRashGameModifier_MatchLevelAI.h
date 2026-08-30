#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIConfig; }
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIGlobalParams; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_METHOD_4_ADB5C8A8674D2CA6_OFFSET UNITYSDK_OFFSET(0x1D319E50)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_METHOD_4_B74668B16FD197A7_OFFSET UNITYSDK_OFFSET(0x1D319E10)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D319E40)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_MatchLevelAI_TypeDefinitionIndex = 10304;

	class RoadRashGameModifier_MatchLevelAI : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxSpeedModifierPriority; // 0x18
		::Il2CppArray<::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig*>* AIConfigs; // 0x20
		::RPG::Client::RoadRashGameModifier_MatchLevelAIGlobalParams* GlobalParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B74668B16FD197A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_METHOD_4_B74668B16FD197A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ADB5C8A8674D2CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAI_METHOD_4_ADB5C8A8674D2CA6_OFFSET))(a1, a2);
		}
	};
}
