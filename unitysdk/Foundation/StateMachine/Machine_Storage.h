#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/Condition.h"
#include "unitysdk/Foundation/StateMachine/LayerMetadata.h"
#include "unitysdk/Foundation/StateMachine/ParameterType.h"
#include "unitysdk/Foundation/StateMachine/StateMetadata.h"
#include "unitysdk/Foundation/StateMachine/Transition.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define FOUNDATION_STATEMACHINE_MACHINE_STORAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99FF90)
#define FOUNDATION_STATEMACHINE_MACHINE_STORAGE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x99FF60)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Machine_Storage_TypeDefinitionIndex = 8929;

	struct alignas(8) Machine_Storage
	{
		::Unity::Collections::NativeArray_1<::Foundation::StateMachine::StateMetadata> States; // 0x10
		::Unity::Collections::NativeArray_1<::Foundation::StateMachine::Transition> Transitions; // 0x20
		::Unity::Collections::NativeArray_1<::Foundation::StateMachine::Condition> Conditions; // 0x30
		::Unity::Collections::NativeArray_1<::Foundation::StateMachine::ParameterType> Parameters; // 0x40
		::Unity::Collections::NativeArray_1<::Foundation::StateMachine::LayerMetadata> Layers; // 0x50

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_STORAGE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_STORAGE_DISPOSE_OFFSET))(this);
		}
	};
}
