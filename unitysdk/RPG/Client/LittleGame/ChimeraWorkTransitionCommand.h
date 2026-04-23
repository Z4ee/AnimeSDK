#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA693910)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA693E30)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__TRIGGERSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA693AA0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkTransitionCommand_TypeDefinitionIndex = 70396;

	class ChimeraWorkTransitionCommand : public ::System::Object
	{
	public:
		::System::Int32 ToIndex; // 0x10
		::System::Int32 FromIndex; // 0x14

		::System::Void _ctor(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__CTOR_OFFSET))(this, from, to);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}

		::System::Void _TriggerStartPerformance(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__TRIGGERSTARTPERFORMANCE_OFFSET))(this, puzzle, index);
		}
	};
}
