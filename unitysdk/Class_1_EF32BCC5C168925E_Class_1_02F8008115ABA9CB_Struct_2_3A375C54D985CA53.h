#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB_STRUCT_2_3A375C54D985CA53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7205B0)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB_STRUCT_2_3A375C54D985CA53_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB_Struct_2_3A375C54D985CA53_TypeDefinitionIndex = 57205;

struct alignas(8) Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB_Struct_2_3A375C54D985CA53
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x18
	::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB* Field_2_2; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB_STRUCT_2_3A375C54D985CA53_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB_STRUCT_2_3A375C54D985CA53_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
