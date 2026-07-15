#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_METHOD_3_7238F419516D778E_OFFSET UNITYSDK_OFFSET(0x1AE493C0)
#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_METHOD_3_7FC0AD4D338BE97B_OFFSET UNITYSDK_OFFSET(0x1AE49400)
#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE493F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerAIPlaySmartObject_TypeDefinitionIndex = 21393;

	class AdvTriggerAIPlaySmartObject : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::RPG::GameCore::DynamicFloat* SmartObjectID; // 0x28
		::RPG::GameCore::DynamicFloat* SlotIndex; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7238F419516D778E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_METHOD_3_7238F419516D778E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FC0AD4D338BE97B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_METHOD_3_7FC0AD4D338BE97B_OFFSET))(a1, a2);
		}
	};
}
