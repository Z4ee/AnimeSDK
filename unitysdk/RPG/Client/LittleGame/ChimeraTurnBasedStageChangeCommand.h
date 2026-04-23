#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA692B70)
#define RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA692BC0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTurnBasedStageChangeCommand_TypeDefinitionIndex = 70394;

	class ChimeraTurnBasedStageChangeCommand : public ::System::Object
	{
	public:
		::System::UInt32 _TurnIndex; // 0x10
		::RPG::GameCore::ChimeraTurnBasedStage NewStage; // 0x14

		::System::Void _ctor(::RPG::GameCore::ChimeraTurnBasedStage stage, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTurnBasedStage, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND__CTOR_OFFSET))(this, stage, index);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
