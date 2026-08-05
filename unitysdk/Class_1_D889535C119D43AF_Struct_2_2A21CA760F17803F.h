#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_392;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D889535C119D43AF_STRUCT_2_2A21CA760F17803F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ADE80)
#define CLASS_1_D889535C119D43AF_STRUCT_2_2A21CA760F17803F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_D889535C119D43AF_Struct_2_2A21CA760F17803F_TypeDefinitionIndex = 47453;

struct alignas(8) Class_1_D889535C119D43AF_Struct_2_2A21CA760F17803F
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x10
	::System::WeakReference_1<::Class_0_16E4307DCC419505_392*>* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_STRUCT_2_2A21CA760F17803F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_STRUCT_2_2A21CA760F17803F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
