#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDISPLAYPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C6AC0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewCarDisplayPageViewModel_TypeDefinitionIndex = 80677;

	class B51RacingNewCarDisplayPageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDISPLAYPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
