#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_STRUCT_2_A2D92FDACAFA70D5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x725B60)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_STRUCT_2_A2D92FDACAFA70D5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_A2D92FDACAFA70D5_TypeDefinitionIndex = 40184;

struct alignas(8) Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_A2D92FDACAFA70D5
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A* Field_2_2; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_STRUCT_2_A2D92FDACAFA70D5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_STRUCT_2_A2D92FDACAFA70D5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
