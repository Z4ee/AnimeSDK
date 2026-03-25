#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A2CE0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A2D40)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkInjuredCommand_TypeDefinitionIndex = 62391;

	class ChimeraWorkInjuredCommand : public ::System::Object
	{
	public:
		::System::UInt32 WorkID; // 0x10
		::System::Single CurVal; // 0x14
		::System::Single ChangeVal; // 0x18

		::System::Void _ctor(::System::Single changeVal, ::System::Single curVal, ::System::UInt32 workID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND__CTOR_OFFSET))(this, changeVal, curVal, workID);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
