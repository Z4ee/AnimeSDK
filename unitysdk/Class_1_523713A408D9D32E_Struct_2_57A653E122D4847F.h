#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_523713A408D9D32E;
class Class_1_76DB84416A8BD8BA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_523713A408D9D32E_STRUCT_2_57A653E122D4847F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FD600)
#define CLASS_1_523713A408D9D32E_STRUCT_2_57A653E122D4847F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_1_523713A408D9D32E_Struct_2_57A653E122D4847F_TypeDefinitionIndex = 63498;

struct alignas(8) Class_1_523713A408D9D32E_Struct_2_57A653E122D4847F
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_4; // 0x30
	::Class_1_76DB84416A8BD8BA* Field_2_3; // 0x40
	::Class_1_523713A408D9D32E* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_57A653E122D4847F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_57A653E122D4847F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
