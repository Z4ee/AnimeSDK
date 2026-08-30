#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0AB00)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_1___DELAYEDPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0x16A0AB10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass85_1_TypeDefinitionIndex = 67820;

	class RogueTournUtils___c__DisplayClass85_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_1__CTOR_OFFSET))(this);
		}

		::System::Void __DelayedPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_1___DELAYEDPROMISE_B__1_OFFSET))(this);
		}
	};
}
