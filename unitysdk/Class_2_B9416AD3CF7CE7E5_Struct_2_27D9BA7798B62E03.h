#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A94C0ABCC2628773;
class Class_2_B9416AD3CF7CE7E5;
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B9416AD3CF7CE7E5_STRUCT_2_27D9BA7798B62E03_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87A5D0)
#define CLASS_2_B9416AD3CF7CE7E5_STRUCT_2_27D9BA7798B62E03_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B9416AD3CF7CE7E5_Struct_2_27D9BA7798B62E03_TypeDefinitionIndex = 40525;

struct alignas(8) Class_2_B9416AD3CF7CE7E5_Struct_2_27D9BA7798B62E03
{
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x18
	::Class_2_B9416AD3CF7CE7E5* Field_2_6; // 0x28
	::Class_1_A94C0ABCC2628773* Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9416AD3CF7CE7E5_STRUCT_2_27D9BA7798B62E03_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B9416AD3CF7CE7E5_STRUCT_2_27D9BA7798B62E03_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
