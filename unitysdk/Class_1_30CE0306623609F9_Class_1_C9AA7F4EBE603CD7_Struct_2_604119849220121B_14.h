#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_STRUCT_2_604119849220121B_14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7017A0)
#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_STRUCT_2_604119849220121B_14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7_Struct_2_604119849220121B_14_TypeDefinitionIndex = 77855;

struct alignas(8) Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7_Struct_2_604119849220121B_14
{
	::Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_STRUCT_2_604119849220121B_14_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_STRUCT_2_604119849220121B_14_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
