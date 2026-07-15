#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161385E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__0_OFFSET UNITYSDK_OFFSET(0x1613F0D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__DISPLAYCLASS51_0___STARTPUZZLE_B__1_OFFSET UNITYSDK_OFFSET(0x1613FC60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard___c__DisplayClass51_0_TypeDefinitionIndex = 74971;

	class WormCompassPuzzleBoard___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::Prop::WormCompassPuzzleBoard* __4__this; // 0x18
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
