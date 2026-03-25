#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A07A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A0860)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraGameSettleCommand_TypeDefinitionIndex = 62407;

	class ChimeraGameSettleCommand : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
