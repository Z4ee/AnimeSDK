#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHESSTRIGGERABILITY_METHOD_3_1DBB544B84ADEB1F_OFFSET UNITYSDK_OFFSET(0x1708E9C0)
#define RPG_GAMECORE_CHESSTRIGGERABILITY_METHOD_3_A70CE794BF5596C0_OFFSET UNITYSDK_OFFSET(0x1708EA40)
#define RPG_GAMECORE_CHESSTRIGGERABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1708EA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessTriggerAbility_TypeDefinitionIndex = 21994;

	class ChessTriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x20
		::RPG::GameCore::PredicateConfig* AbilityInherentTargetPredicate; // 0x28
		::System::String* AbilityName; // 0x30
		::System::Boolean SyncTimeScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1DBB544B84ADEB1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessTriggerAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessTriggerAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERABILITY_METHOD_3_1DBB544B84ADEB1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A70CE794BF5596C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessTriggerAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessTriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERABILITY_METHOD_3_A70CE794BF5596C0_OFFSET))(a1, a2);
		}
	};
}
