#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F2DAD7F45F518868;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_DE52701BA7A79ED9_STRUCT_2_97FE7577C6532ABE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F62A0)
#define CLASS_1_DE52701BA7A79ED9_STRUCT_2_97FE7577C6532ABE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_DE52701BA7A79ED9_Struct_2_97FE7577C6532ABE_TypeDefinitionIndex = 64330;

struct alignas(8) Class_1_DE52701BA7A79ED9_Struct_2_97FE7577C6532ABE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_3_F2DAD7F45F518868* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::System::Single Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52701BA7A79ED9_STRUCT_2_97FE7577C6532ABE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_DE52701BA7A79ED9_STRUCT_2_97FE7577C6532ABE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
