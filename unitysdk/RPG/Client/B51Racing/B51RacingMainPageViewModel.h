#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingMainPageEntranceViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7AF540)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMainPageViewModel_TypeDefinitionIndex = 82035;

	class B51RacingMainPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel* PreviousCycleEntrance; // 0x10
		::RPG::Client::TextID EntranceHintText; // 0x18
		::RPG::Client::TextID CycleNameText; // 0x28
		::System::Boolean IsLightConeRewardReceived; // 0x38
		::System::Boolean IsInTimeLimitSchedule; // 0x39
		::System::Boolean IsInCycle; // 0x3A
		::System::UInt32 CurrentDay; // 0x3C
		::RPG::Client::DateTimePro TimeLimitScheduleEndTime; // 0x40
		::System::UInt32 CycleID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGMAINPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
