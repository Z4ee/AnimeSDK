#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_325A0B89549C2BC4_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_325A0B89549C2BC4_1_STRUCT_2_834687EAB5315D08_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D220)
#define CLASS_2_325A0B89549C2BC4_1_STRUCT_2_834687EAB5315D08_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_325A0B89549C2BC4_1_Struct_2_834687EAB5315D08_1_TypeDefinitionIndex = 70994;

struct alignas(8) Class_2_325A0B89549C2BC4_1_Struct_2_834687EAB5315D08_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Class_2_325A0B89549C2BC4_1* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_STRUCT_2_834687EAB5315D08_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_STRUCT_2_834687EAB5315D08_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
