#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A28F0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A2BF0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkFinishCommand_TypeDefinitionIndex = 62403;

	class ChimeraWorkFinishCommand : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
