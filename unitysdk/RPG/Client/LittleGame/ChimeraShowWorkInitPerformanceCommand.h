#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE1E30)
#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE1DF0)
#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__EXECUTE_B__3_0_OFFSET UNITYSDK_OFFSET(0xBDE1F70)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraShowWorkInitPerformanceCommand_TypeDefinitionIndex = 71220;

	class ChimeraShowWorkInitPerformanceCommand : public ::System::Object
	{
	public:
		::System::Action* _FinishCallback; // 0x10
		::RPG::GameCore::ChimeraAbilityProgressBase* _Config; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _Execute_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__EXECUTE_B__3_0_OFFSET))(this);
		}
	};
}
