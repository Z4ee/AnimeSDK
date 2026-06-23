#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_325A0B89549C2BC4;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_325A0B89549C2BC4_STRUCT_2_834687EAB5315D08_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7456C0)
#define CLASS_2_325A0B89549C2BC4_STRUCT_2_834687EAB5315D08_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_325A0B89549C2BC4_Struct_2_834687EAB5315D08_TypeDefinitionIndex = 49339;

struct alignas(8) Class_2_325A0B89549C2BC4_Struct_2_834687EAB5315D08
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_2_325A0B89549C2BC4* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_STRUCT_2_834687EAB5315D08_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_STRUCT_2_834687EAB5315D08_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
