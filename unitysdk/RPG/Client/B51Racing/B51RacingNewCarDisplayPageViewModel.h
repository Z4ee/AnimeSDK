#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDISPLAYPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC78D1E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewCarDisplayPageViewModel_TypeDefinitionIndex = 82006;

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
