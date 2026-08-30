#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTDISPLAYPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C8EE0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewPartDisplayPageViewModel_TypeDefinitionIndex = 80678;

	class B51RacingNewPartDisplayPageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTDISPLAYPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
