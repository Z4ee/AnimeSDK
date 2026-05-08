#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectArrayPool_1_ObjectHandler_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_09887D9189AB5BE2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_09887D9189AB5BE2_STRUCT_2_6F09312CD810B020_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7579E0)
#define CLASS_3_09887D9189AB5BE2_STRUCT_2_6F09312CD810B020_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_09887D9189AB5BE2_Struct_2_6F09312CD810B020_TypeDefinitionIndex = 78683;

struct alignas(8) Class_3_09887D9189AB5BE2_Struct_2_6F09312CD810B020
{
	::Class_3_09887D9189AB5BE2* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Foundation::ObjectArrayPool_1_ObjectHandler_1<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> Field_2_4; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09887D9189AB5BE2_STRUCT_2_6F09312CD810B020_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_09887D9189AB5BE2_STRUCT_2_6F09312CD810B020_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
