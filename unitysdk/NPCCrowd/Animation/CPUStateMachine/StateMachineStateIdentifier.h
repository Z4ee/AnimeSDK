#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x826600)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET UNITYSDK_OFFSET(0x8264D0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x826470)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x826530)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x157B69E0)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int StateMachineStateIdentifier_TypeDefinitionIndex = 59331;

	struct alignas(4) StateMachineStateIdentifier
	{
		static ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier* StaticGet_Multiple()
		{
			return (::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(StateMachineStateIdentifier_TypeDefinitionIndex)->GetStaticField(0x109A0);
		}
		static ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(StateMachineStateIdentifier_TypeDefinitionIndex)->GetStaticField(0x109A4);
		}
		::System::Int32 stateIndex; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsMultiple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_EQUALS_OFFSET))(this, other);
		}
	};
}
