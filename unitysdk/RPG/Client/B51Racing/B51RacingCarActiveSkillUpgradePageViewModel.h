#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED66D0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillUpgradePageViewModel_TypeDefinitionIndex = 80656;

	class B51RacingCarActiveSkillUpgradePageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* CurrentSkill; // 0x18
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* BeforeSkill; // 0x20
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* AfterSkill; // 0x28
		::System::Single ExpTo; // 0x30
		::System::Single ExpFrom; // 0x34
		::System::UInt32 DayIndex; // 0x38
		::System::Boolean IsLevelUp; // 0x3C
		::RPG::Client::TextID Title; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
