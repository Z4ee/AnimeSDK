#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC31D60)
#define RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC31DB0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTurnBasedStageChangeCommand_TypeDefinitionIndex = 76159;

	class ChimeraTurnBasedStageChangeCommand : public ::System::Object
	{
	public:
		::System::UInt32 _TurnIndex; // 0x10
		::RPG::GameCore::ChimeraTurnBasedStage NewStage; // 0x14

		::System::Void _ctor(::RPG::GameCore::ChimeraTurnBasedStage a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTurnBasedStage, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNBASEDSTAGECHANGECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
