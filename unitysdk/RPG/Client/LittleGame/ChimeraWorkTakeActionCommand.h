#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTAKEACTIONCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA6938B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTAKEACTIONCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA693900)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkTakeActionCommand_TypeDefinitionIndex = 70393;

	class ChimeraWorkTakeActionCommand : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTAKEACTIONCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTAKEACTIONCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
