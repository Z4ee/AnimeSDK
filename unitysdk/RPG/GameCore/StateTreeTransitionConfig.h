#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ST_AIEventType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoolVariableConfig; }
namespace RPG::GameCore { class FloatVariableConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STATETREETRANSITIONCONFIG_METHOD_2_081783F79FE20B8C_OFFSET UNITYSDK_OFFSET(0x1B0C0630)
#define RPG_GAMECORE_STATETREETRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C0960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeTransitionConfig_TypeDefinitionIndex = 14885;

	class StateTreeTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StateTreeTransitionTriggerType Trigger; // 0x10
		::System::String* UserDefineEvent; // 0x18
		::RPG::GameCore::ST_AIEventType SystemEvent; // 0x20
		::RPG::GameCore::StateTreeTransitionToType TransitionToType; // 0x24
		::System::String* TransitionToState; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30
		::System::Single ConditionMinDuration; // 0x38
		::Il2CppArray<::RPG::GameCore::BoolVariableConfig*>* BoolVariableList; // 0x40
		::Il2CppArray<::RPG::GameCore::FloatVariableConfig*>* FloatVariableList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREETRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_081783F79FE20B8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREETRANSITIONCONFIG_METHOD_2_081783F79FE20B8C_OFFSET))(a1, a2);
		}
	};
}
