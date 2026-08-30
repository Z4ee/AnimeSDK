#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDriverTabViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85D870)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDriverSelectPageViewModel_TypeDefinitionIndex = 80703;

	class B51RacingCarDriverSelectPageViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* BaseStatItems; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingDriverTabViewModel*>* DriverTabs; // 0x18
		::System::Int32 CurrentTabIndex; // 0x20
		::System::Int32 DefaultTabIndex; // 0x24
		::System::UInt32 SelectedDriverID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
