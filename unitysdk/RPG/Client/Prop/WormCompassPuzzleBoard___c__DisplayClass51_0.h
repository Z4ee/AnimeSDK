#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD5DEC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__0_OFFSET UNITYSDK_OFFSET(0xDD64A20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__1_OFFSET UNITYSDK_OFFSET(0xDD655E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard___c__DisplayClass51_0_TypeDefinitionIndex = 78457;

	class WormCompassPuzzleBoard___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::WormCompassPuzzleBoard* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Boolean delayRefreshHighlight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void __StartPuzzle_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __StartPuzzle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__1_OFFSET))(this);
		}
	};
}
