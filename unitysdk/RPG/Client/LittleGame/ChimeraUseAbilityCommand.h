#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_683531EF1026FCA6;
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE37C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE3790)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraUseAbilityCommand_TypeDefinitionIndex = 71200;

	class ChimeraUseAbilityCommand : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::UInt32 TriggerID; // 0x18
		::System::UInt32 FromID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::Class_1_683531EF1026FCA6* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_683531EF1026FCA6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
