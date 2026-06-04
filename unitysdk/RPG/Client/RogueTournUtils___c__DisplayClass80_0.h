#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8733F0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS80_0___DELAYEDPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xC873AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass80_0_TypeDefinitionIndex = 63445;

	class RogueTournUtils___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Single delayedTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __DelayedPromise_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS80_0___DELAYEDPROMISE_B__0_OFFSET))(this);
		}
	};
}
