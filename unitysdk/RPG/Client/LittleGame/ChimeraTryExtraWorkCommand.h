#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19BA1890)
#define RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA1CC0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND__SHOULDFORCESETTLEGAME_OFFSET UNITYSDK_OFFSET(0x19BA1AB0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTryExtraWorkCommand_TypeDefinitionIndex = 72734;

	class ChimeraTryExtraWorkCommand : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldForceSettleGame(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATRYEXTRAWORKCOMMAND__SHOULDFORCESETTLEGAME_OFFSET))(this, a1);
		}
	};
}
