#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_METHOD_4_440CDEAC963BC899_OFFSET UNITYSDK_OFFSET(0x1CD60290)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_METHOD_4_AAF02014690142EC_OFFSET UNITYSDK_OFFSET(0x1CD602D0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD602C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_TutorialLevelAI_TypeDefinitionIndex = 10300;

	class RoadRashGameModifier_TutorialLevelAI : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MaxSpeedModifierPriority; // 0x18
		::RPG::GameCore::FixPoint FollowingDistance; // 0x20
		::RPG::GameCore::FixPoint LeadingDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_440CDEAC963BC899(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_METHOD_4_440CDEAC963BC899_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AAF02014690142EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_TutorialLevelAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TUTORIALLEVELAI_METHOD_4_AAF02014690142EC_OFFSET))(a1, a2);
		}
	};
}
