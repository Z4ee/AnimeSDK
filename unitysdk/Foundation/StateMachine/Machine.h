#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/Condition.h"
#include "unitysdk/Foundation/StateMachine/LayerMetadata.h"
#include "unitysdk/Foundation/StateMachine/Machine_Storage.h"
#include "unitysdk/Foundation/StateMachine/ParameterType.h"
#include "unitysdk/Foundation/StateMachine/StateMetadata.h"
#include "unitysdk/Foundation/StateMachine/Transition.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace Foundation::StateMachine { class MachineCache; }

#define FOUNDATION_STATEMACHINE_MACHINE_DFS_OFFSET UNITYSDK_OFFSET(0x9C51E0)
#define FOUNDATION_STATEMACHINE_MACHINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99FF90)
#define FOUNDATION_STATEMACHINE_MACHINE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C5070)
#define FOUNDATION_STATEMACHINE_MACHINE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9C5040)
#define FOUNDATION_STATEMACHINE_MACHINE_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9C4EB0)
#define FOUNDATION_STATEMACHINE_MACHINE_GET_PARAMCOUNT_OFFSET UNITYSDK_OFFSET(0x9C4E90)
#define FOUNDATION_STATEMACHINE_MACHINE_GET_STATECOUNT_OFFSET UNITYSDK_OFFSET(0x9C4EA0)
#define FOUNDATION_STATEMACHINE_MACHINE_PROCESS_OFFSET UNITYSDK_OFFSET(0x9C50B0)
#define FOUNDATION_STATEMACHINE_MACHINE_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x9C4ED0)
#define FOUNDATION_STATEMACHINE_MACHINE_STEPNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x9C50F0)
#define FOUNDATION_STATEMACHINE_MACHINE_UPDATECONDITIONS_OFFSET UNITYSDK_OFFSET(0x9C5130)
#define FOUNDATION_STATEMACHINE_MACHINE_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x9C5180)
#define FOUNDATION_STATEMACHINE_MACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4EC0)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Machine_TypeDefinitionIndex = 8927;

	struct alignas(8) Machine
	{
		::Foundation::StateMachine::Machine_Storage _storage; // 0x10
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::ParameterType> _params; // 0x60
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Condition> _conditions; // 0x70
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::StateMetadata> _machines; // 0x80
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::StateMetadata> _states; // 0x90
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Transition> _transitions; // 0xA0
		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::LayerMetadata> _layers; // 0xB0
		::System::Byte _anyTransitionCount; // 0xC0

		::System::Void _ctor(::Foundation::StateMachine::MachineCache* cache, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::StateMachine::MachineCache*, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE__CTOR_OFFSET))(this, cache, allocator);
		}

		::System::Byte get_ParamCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_GET_PARAMCOUNT_OFFSET))(this);
		}

		::System::Byte get_StateCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_GET_STATECOUNT_OFFSET))(this);
		}

		::System::Byte get_LayerCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_GET_LAYERCOUNT_OFFSET))(this);
		}

		/*
		::System::Void ResetTrigger(::System::Span_1<::Foundation::StateMachine::Parameter> params)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_RESETTRIGGER_OFFSET))(this, params);
		}
		*/

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::StateMachine::Machine other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::Machine))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_EQUALS_OFFSET))(this, other);
		}

		/*
		::Foundation::BitSet256 Process(::System::Span_1<::Foundation::StateMachine::Parameter> parameters)
		{
			return ((::Foundation::BitSet256(*)(::PVOID, ::System::Span_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_PROCESS_OFFSET))(this, parameters);
		}
		*/

		/*
		::System::Boolean StepNextState(::Foundation::StateMachine::StateId& stateId, ::Foundation::BitSet256 conditions, ::System::UInt16 anyTransitionIndex, ::System::Byte anyTransitionCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::StateId&, ::Foundation::BitSet256, ::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_STEPNEXTSTATE_OFFSET))(this, stateId, conditions, anyTransitionIndex, anyTransitionCount);
		}
		*/

		/*
		::Foundation::BitSet256 UpdateConditions(::System::Span_1<::Foundation::StateMachine::Parameter> parameters)
		{
			return ((::Foundation::BitSet256(*)(::PVOID, ::System::Span_1<::Foundation::StateMachine::Parameter>))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_UPDATECONDITIONS_OFFSET))(this, parameters);
		}
		*/

		/*
		::System::Boolean UpdateLayer(::Foundation::BitSet256& conditions, ::Foundation::StateMachine::StateId& state, ::System::Int32 layerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BitSet256&, ::Foundation::StateMachine::StateId&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_UPDATELAYER_OFFSET))(this, conditions, state, layerIndex);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_DISPOSE_OFFSET))(this);
		}

		/*
		::System::Boolean Dfs(::Foundation::StateMachine::Machine_Frame frame, ::Foundation::BitSet256& visited, ::Foundation::StateMachine::StateId& state, ::Foundation::BitSet256 conditions)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::Machine_Frame, ::Foundation::BitSet256&, ::Foundation::StateMachine::StateId&, ::Foundation::BitSet256))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_DFS_OFFSET))(this, frame, visited, state, conditions);
		}
		*/
	};
}
