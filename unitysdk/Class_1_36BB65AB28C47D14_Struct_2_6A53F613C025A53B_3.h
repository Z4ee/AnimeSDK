#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/System/ValueType.h"

class Class_1_36BB65AB28C47D14;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_36BB65AB28C47D14_STRUCT_2_6A53F613C025A53B_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x815FF0)
#define CLASS_1_36BB65AB28C47D14_STRUCT_2_6A53F613C025A53B_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Struct_2_6A53F613C025A53B_3_TypeDefinitionIndex = 64529;

struct alignas(8) Class_1_36BB65AB28C47D14_Struct_2_6A53F613C025A53B_3
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_5; // 0x20
	::Struct_2_2CEE35A1FF4AE199 Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x48
	::Class_1_36BB65AB28C47D14* Field_2_7; // 0x50
	::System::Int32 Field_2_1; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_STRUCT_2_6A53F613C025A53B_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_STRUCT_2_6A53F613C025A53B_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
