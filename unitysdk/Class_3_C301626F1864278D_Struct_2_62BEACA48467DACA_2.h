#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C301626F1864278D;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C301626F1864278D_STRUCT_2_62BEACA48467DACA_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70C160)
#define CLASS_3_C301626F1864278D_STRUCT_2_62BEACA48467DACA_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_C301626F1864278D_Struct_2_62BEACA48467DACA_2_TypeDefinitionIndex = 69962;

struct alignas(8) Class_3_C301626F1864278D_Struct_2_62BEACA48467DACA_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_0; // 0x18
	::Class_3_C301626F1864278D* Field_2_1; // 0x28
	::System::Int32 Field_2_3; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C301626F1864278D_STRUCT_2_62BEACA48467DACA_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C301626F1864278D_STRUCT_2_62BEACA48467DACA_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
