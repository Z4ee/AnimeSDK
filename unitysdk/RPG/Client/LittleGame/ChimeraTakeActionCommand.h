#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE2020)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2320)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTakeActionCommand_TypeDefinitionIndex = 71207;

	class ChimeraTakeActionCommand : public ::System::Object
	{
	public:
		::System::UInt32 WorkID; // 0x10
		::System::UInt32 ChimeraID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
