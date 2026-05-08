#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_ACE9F07052632BA1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_ACE9F07052632BA1_STRUCT_2_92F3532CAEDAF829_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x705F50)
#define CLASS_2_ACE9F07052632BA1_STRUCT_2_92F3532CAEDAF829_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Struct_2_92F3532CAEDAF829_TypeDefinitionIndex = 53291;

struct alignas(8) Class_2_ACE9F07052632BA1_Struct_2_92F3532CAEDAF829
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x10
	::Class_2_ACE9F07052632BA1* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::System::Int32 Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_STRUCT_2_92F3532CAEDAF829_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_STRUCT_2_92F3532CAEDAF829_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
