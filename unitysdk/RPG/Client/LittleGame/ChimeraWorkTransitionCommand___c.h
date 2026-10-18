#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD41CFA0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD41CFE0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C___TRIGGERSTARTPERFORMANCE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD41CFF0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkTransitionCommand___c_TypeDefinitionIndex = 76639;

	class ChimeraWorkTransitionCommand___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkTransitionCommand___c_TypeDefinitionIndex)->GetStaticField(0x23F60);
		}
		static ::RPG::Client::LittleGame::ChimeraWorkTransitionCommand___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChimeraWorkTransitionCommand___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkTransitionCommand___c_TypeDefinitionIndex)->GetStaticField(0x23F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__CTOR_OFFSET))(this);
		}

		::System::Void __TriggerStartPerformance_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C___TRIGGERSTARTPERFORMANCE_B__1_0_OFFSET))(this);
		}
	};
}
