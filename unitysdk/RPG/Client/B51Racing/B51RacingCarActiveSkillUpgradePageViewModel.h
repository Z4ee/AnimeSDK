#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC71BE70)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillUpgradePageViewModel_TypeDefinitionIndex = 81985;

	class B51RacingCarActiveSkillUpgradePageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* BeforeSkill; // 0x10
		::System::Action* OnClose; // 0x18
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* CurrentSkill; // 0x20
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* AfterSkill; // 0x28
		::System::Boolean IsLevelUp; // 0x30
		::System::UInt32 DayIndex; // 0x34
		::RPG::Client::TextID Title; // 0x38
		::System::Single ExpFrom; // 0x48
		::System::Single ExpTo; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
