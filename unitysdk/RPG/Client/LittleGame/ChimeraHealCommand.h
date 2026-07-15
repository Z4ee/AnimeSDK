#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19BA03D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA0430)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraHealCommand_TypeDefinitionIndex = 72717;

	class ChimeraHealCommand : public ::System::Object
	{
	public:
		::System::UInt32 HealedChimeraID; // 0x10
		::System::Single ChangeVal; // 0x14
		::System::Single CurVal; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAHEALCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
