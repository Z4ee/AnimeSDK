#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAATKRAISECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9999350)
#define RPG_CLIENT_LITTLEGAME_CHIMERAATKRAISECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99993B0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraAtkRaiseCommand_TypeDefinitionIndex = 62390;

	class ChimeraAtkRaiseCommand : public ::System::Object
	{
	public:
		::System::Single CurVal; // 0x10
		::System::UInt32 ChimeraID; // 0x14
		::System::Single ChangeVal; // 0x18

		::System::Void _ctor(::System::UInt32 id, ::System::Single changeVal, ::System::Single curVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAATKRAISECOMMAND__CTOR_OFFSET))(this, id, changeVal, curVal);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAATKRAISECOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
