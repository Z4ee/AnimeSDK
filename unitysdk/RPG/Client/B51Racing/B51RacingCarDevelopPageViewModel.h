#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarDevelopPartTabViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85BC50)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopPageViewModel_TypeDefinitionIndex = 80686;

	class B51RacingCarDevelopPageViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarDevelopPartTabViewModel*>* PartTabs; // 0x10
		::RPG::Client::TextID TitleText; // 0x18
		::System::Int32 CurrentTabIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
