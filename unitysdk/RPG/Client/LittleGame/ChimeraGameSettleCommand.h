#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD4CB800)
#define RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xD4CB8C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraGameSettleCommand_TypeDefinitionIndex = 76172;

	class ChimeraGameSettleCommand : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAGAMESETTLECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
