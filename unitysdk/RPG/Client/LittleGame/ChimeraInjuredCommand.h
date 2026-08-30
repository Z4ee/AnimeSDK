#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC304B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC30510)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraInjuredCommand_TypeDefinitionIndex = 76152;

	class ChimeraInjuredCommand : public ::System::Object
	{
	public:
		::System::Boolean IsByWork; // 0x10
		::System::Single ChangeVal; // 0x14
		::System::Single CurVal; // 0x18
		::System::UInt32 InjuredChimeraID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
