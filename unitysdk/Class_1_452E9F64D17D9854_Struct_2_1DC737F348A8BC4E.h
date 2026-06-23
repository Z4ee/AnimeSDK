#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_452E9F64D17D9854;
namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_452E9F64D17D9854_STRUCT_2_1DC737F348A8BC4E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B4DF0)
#define CLASS_1_452E9F64D17D9854_STRUCT_2_1DC737F348A8BC4E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_452E9F64D17D9854_Struct_2_1DC737F348A8BC4E_TypeDefinitionIndex = 61005;

struct alignas(8) Class_1_452E9F64D17D9854_Struct_2_1DC737F348A8BC4E
{
	::Class_1_452E9F64D17D9854* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::PipelineCamera::ScopedDelegateHandle Field_2_5; // 0x28
	::MoleMole::Cameras::TopViewCameraConfig* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Boolean Field_2_4; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_STRUCT_2_1DC737F348A8BC4E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854_STRUCT_2_1DC737F348A8BC4E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
