#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE4350)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE48A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__TRIGGERSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBDE44F0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkTransitionCommand_TypeDefinitionIndex = 71212;

	class ChimeraWorkTransitionCommand : public ::System::Object
	{
	public:
		::System::Int32 ToIndex; // 0x10
		::System::Int32 FromIndex; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerStartPerformance(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND__TRIGGERSTARTPERFORMANCE_OFFSET))(this, a1, a2);
		}
	};
}
