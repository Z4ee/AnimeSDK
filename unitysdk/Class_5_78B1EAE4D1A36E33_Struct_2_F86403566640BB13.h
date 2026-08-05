#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_78B1EAE4D1A36E33_STRUCT_2_F86403566640BB13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8886B0)
#define CLASS_5_78B1EAE4D1A36E33_STRUCT_2_F86403566640BB13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Struct_2_F86403566640BB13_TypeDefinitionIndex = 58083;

struct alignas(8) Class_5_78B1EAE4D1A36E33_Struct_2_F86403566640BB13
{
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_1; // 0x10
	::System::Action* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x30
	::System::Int32 Field_2_3; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_STRUCT_2_F86403566640BB13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_STRUCT_2_F86403566640BB13_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
