#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F9061A6F120FD081;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_F9061A6F120FD081_STRUCT_2_E94CE1AF6AD57F9B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7505C0)
#define CLASS_2_F9061A6F120FD081_STRUCT_2_E94CE1AF6AD57F9B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Struct_2_E94CE1AF6AD57F9B_TypeDefinitionIndex = 79987;

struct alignas(8) Class_2_F9061A6F120FD081_Struct_2_E94CE1AF6AD57F9B
{
	::System::String* Field_2_4; // 0x10
	::Class_2_F9061A6F120FD081* Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::String*> Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x38
	::System::Threading::CancellationToken Field_2_2; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_STRUCT_2_E94CE1AF6AD57F9B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_STRUCT_2_E94CE1AF6AD57F9B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
