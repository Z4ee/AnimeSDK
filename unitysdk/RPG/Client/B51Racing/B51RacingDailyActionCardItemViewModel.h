#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC78BD40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDailyActionCardItemViewModel_TypeDefinitionIndex = 82022;

	class B51RacingDailyActionCardItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* ValueIconList; // 0x10
		::RPG::Client::TextID ActionName; // 0x18
		::System::UInt32 ActionID; // 0x28
		::System::Boolean IsRecommended; // 0x2C
		::System::Boolean IsSelected; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
