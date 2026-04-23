#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA691AE0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA6923A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xA692280)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTeamMemberDeathCommand_TypeDefinitionIndex = 70399;

	class ChimeraTeamMemberDeathCommand : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::System::UInt32 ChimeraID; // 0x14

		::System::Void _ctor(::System::UInt32 chimeraID, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__CTOR_OFFSET))(this, chimeraID, index);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}

		::System::Void _StartTransition(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__STARTTRANSITION_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
