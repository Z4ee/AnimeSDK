#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D668B684F0C08C69;
namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D668B684F0C08C69_STRUCT_2_1DC737F348A8BC4E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BE460)
#define CLASS_1_D668B684F0C08C69_STRUCT_2_1DC737F348A8BC4E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_D668B684F0C08C69_Struct_2_1DC737F348A8BC4E_TypeDefinitionIndex = 63127;

struct alignas(8) Class_1_D668B684F0C08C69_Struct_2_1DC737F348A8BC4E
{
	::PipelineCamera::ScopedDelegateHandle Field_2_11; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x28
	::Class_1_D668B684F0C08C69* Field_2_6; // 0x30
	::MoleMole::Cameras::TopViewCameraConfig* Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Boolean Field_2_4; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_STRUCT_2_1DC737F348A8BC4E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D668B684F0C08C69_STRUCT_2_1DC737F348A8BC4E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
