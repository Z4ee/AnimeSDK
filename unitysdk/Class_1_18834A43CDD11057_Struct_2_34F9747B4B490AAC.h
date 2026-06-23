#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_1_18834A43CDD11057;

inline static constexpr unsigned int Class_1_18834A43CDD11057_Struct_2_34F9747B4B490AAC_TypeDefinitionIndex = 77523;

template <typename TCustomAction>
struct Class_1_18834A43CDD11057_Struct_2_34F9747B4B490AAC
{
	::System::Int32 Field_2_0; // 0x0
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x0
	::System::Threading::CancellationToken Field_2_2; // 0x0
	::Class_1_18834A43CDD11057<TCustomAction>* Field_2_3; // 0x0
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x0
};
