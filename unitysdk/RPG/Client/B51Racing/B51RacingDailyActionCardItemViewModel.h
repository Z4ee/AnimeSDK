#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC8736A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDailyActionCardItemViewModel_TypeDefinitionIndex = 80695;

	class B51RacingDailyActionCardItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* ValueIconList; // 0x10
		::System::UInt32 ActionID; // 0x18
		::System::Boolean IsSelected; // 0x1C
		::System::Boolean IsRecommended; // 0x1D
		::RPG::Client::TextID ActionName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
