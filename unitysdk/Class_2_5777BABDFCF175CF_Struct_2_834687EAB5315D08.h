#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5777BABDFCF175CF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_5777BABDFCF175CF_STRUCT_2_834687EAB5315D08_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85B390)
#define CLASS_2_5777BABDFCF175CF_STRUCT_2_834687EAB5315D08_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_5777BABDFCF175CF_Struct_2_834687EAB5315D08_TypeDefinitionIndex = 40609;

struct alignas(8) Class_2_5777BABDFCF175CF_Struct_2_834687EAB5315D08
{
	::Class_2_5777BABDFCF175CF* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5777BABDFCF175CF_STRUCT_2_834687EAB5315D08_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_5777BABDFCF175CF_STRUCT_2_834687EAB5315D08_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
