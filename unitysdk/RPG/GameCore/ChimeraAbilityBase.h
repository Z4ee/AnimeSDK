#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleConditionEvaluator; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }

#define RPG_GAMECORE_CHIMERAABILITYBASE_METHOD_2_98471EAB1E5A1381_OFFSET UNITYSDK_OFFSET(0x187F0200)
#define RPG_GAMECORE_CHIMERAABILITYBASE_METHOD_2_9A233AB41528AB57_OFFSET UNITYSDK_OFFSET(0x187F03B0)
#define RPG_GAMECORE_CHIMERAABILITYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x187F01F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityBase_TypeDefinitionIndex = 15003;

	class ChimeraAbilityBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraBattleConditionEvaluator* TriggerCondition; // 0x10
		::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* ExtraCondition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98471EAB1E5A1381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE_METHOD_2_98471EAB1E5A1381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9A233AB41528AB57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE_METHOD_2_9A233AB41528AB57_OFFSET))(a1, a2);
		}
	};
}
