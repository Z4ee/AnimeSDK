#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A0940)
#define RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A09A0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraInjuredCommand_TypeDefinitionIndex = 62388;

	class ChimeraInjuredCommand : public ::System::Object
	{
	public:
		::System::Single ChangeVal; // 0x10
		::System::Boolean IsByWork; // 0x14
		::System::UInt32 InjuredChimeraID; // 0x18
		::System::Single CurVal; // 0x1C

		::System::Void _ctor(::System::UInt32 id, ::System::Single changeVal, ::System::Single curVal, ::System::Boolean isByWork)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND__CTOR_OFFSET))(this, id, changeVal, curVal, isByWork);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAINJUREDCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
