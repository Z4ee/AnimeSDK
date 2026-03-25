#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraGameInstance; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93C1110)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS44_0__TRYSWITCHAREA_B__0_OFFSET UNITYSDK_OFFSET(0x93C1D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance___c__DisplayClass44_0_TypeDefinitionIndex = 48953;

	class ChimeraGameInstance___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::ChimeraGameInstance* __4__this; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* view; // 0x20
		::System::Int32 newWorkIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySwitchArea_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS44_0__TRYSWITCHAREA_B__0_OFFSET))(this);
		}
	};
}
