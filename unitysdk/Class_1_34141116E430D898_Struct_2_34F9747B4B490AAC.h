#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_1_34141116E430D898;

inline static constexpr unsigned int Class_1_34141116E430D898_Struct_2_34F9747B4B490AAC_TypeDefinitionIndex = 42890;

template <typename TCustomAction>
struct Class_1_34141116E430D898_Struct_2_34F9747B4B490AAC
{
	::System::Int32 Field_2_2; // 0x0
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x0
	::System::Threading::CancellationToken Field_2_0; // 0x0
	::Class_1_34141116E430D898<TCustomAction>* Field_2_7; // 0x0
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x0
};
