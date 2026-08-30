#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84DE90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillUpgradePageViewModel_TypeDefinitionIndex = 80657;

	class B51RacingCarActiveSkillUpgradePageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* CurrentSkill; // 0x10
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* BeforeSkill; // 0x18
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* AfterSkill; // 0x20
		::System::Action* OnClose; // 0x28
		::RPG::Client::TextID Title; // 0x30
		::System::Single ExpTo; // 0x40
		::System::Boolean IsLevelUp; // 0x44
		::System::Single ExpFrom; // 0x48
		::System::UInt32 DayIndex; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
