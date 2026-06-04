#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE2410)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2D10)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0xBDE2BE0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTeamMemberDeathCommand_TypeDefinitionIndex = 71215;

	class ChimeraTeamMemberDeathCommand : public ::System::Object
	{
	public:
		::System::UInt32 ChimeraID; // 0x10
		::System::Int32 Index; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _StartTransition(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND__STARTTRANSITION_OFFSET))(this, a1, a2);
		}
	};
}
