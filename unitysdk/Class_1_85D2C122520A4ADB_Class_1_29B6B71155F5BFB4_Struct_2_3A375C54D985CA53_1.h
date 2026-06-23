#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_STRUCT_2_3A375C54D985CA53_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B3510)
#define CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_STRUCT_2_3A375C54D985CA53_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4_Struct_2_3A375C54D985CA53_1_TypeDefinitionIndex = 71749;

struct alignas(8) Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4_Struct_2_3A375C54D985CA53_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_STRUCT_2_3A375C54D985CA53_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_STRUCT_2_3A375C54D985CA53_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
