#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BFB918E88E1F3E0A;
class Class_2_F68C1397F46993E4;
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_F68C1397F46993E4_STRUCT_2_27D9BA7798B62E03_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86B740)
#define CLASS_2_F68C1397F46993E4_STRUCT_2_27D9BA7798B62E03_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_F68C1397F46993E4_Struct_2_27D9BA7798B62E03_TypeDefinitionIndex = 51518;

struct alignas(8) Class_2_F68C1397F46993E4_Struct_2_27D9BA7798B62E03
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_BFB918E88E1F3E0A* Field_2_4; // 0x18
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::Class_2_F68C1397F46993E4* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F68C1397F46993E4_STRUCT_2_27D9BA7798B62E03_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_F68C1397F46993E4_STRUCT_2_27D9BA7798B62E03_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
