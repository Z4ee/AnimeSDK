#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A09BD0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0___DELAYEDPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x16A0A9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass85_0_TypeDefinitionIndex = 67819;

	class RogueTournUtils___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Single delayedTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __DelayedPromise_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0___DELAYEDPROMISE_B__0_OFFSET))(this);
		}
	};
}
