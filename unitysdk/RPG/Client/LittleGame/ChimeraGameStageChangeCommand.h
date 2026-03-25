#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A0870)
#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A08C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraGameStageChangeCommand_TypeDefinitionIndex = 62396;

	class ChimeraGameStageChangeCommand : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraGameStage _NewStage; // 0x10

		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraGameStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraGameStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND__CTOR_OFFSET))(this, stage);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESTAGECHANGECOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
