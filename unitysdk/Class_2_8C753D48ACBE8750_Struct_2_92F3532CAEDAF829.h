#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_8C753D48ACBE8750;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_8C753D48ACBE8750_STRUCT_2_92F3532CAEDAF829_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6324C0)
#define CLASS_2_8C753D48ACBE8750_STRUCT_2_92F3532CAEDAF829_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Struct_2_92F3532CAEDAF829_TypeDefinitionIndex = 53599;

struct alignas(8) Class_2_8C753D48ACBE8750_Struct_2_92F3532CAEDAF829
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Class_2_8C753D48ACBE8750* Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_5; // 0x30
	::System::Int32 Field_2_1; // 0x40
	::System::Int32 Field_2_6; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_STRUCT_2_92F3532CAEDAF829_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_STRUCT_2_92F3532CAEDAF829_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
