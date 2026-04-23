#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA691420)
#define RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA691480)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraHealCommand_TypeDefinitionIndex = 70388;

	class ChimeraHealCommand : public ::System::Object
	{
	public:
		::System::Single ChangeVal; // 0x10
		::System::UInt32 HealedChimeraID; // 0x14
		::System::Single CurVal; // 0x18

		::System::Void _ctor(::System::UInt32 id, ::System::Single changeVal, ::System::Single curVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND__CTOR_OFFSET))(this, id, changeVal, curVal);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
