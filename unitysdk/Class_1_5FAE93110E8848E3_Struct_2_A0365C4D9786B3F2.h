#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5FAE93110E8848E3;
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_5FAE93110E8848E3_STRUCT_2_A0365C4D9786B3F2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5947B0)
#define CLASS_1_5FAE93110E8848E3_STRUCT_2_A0365C4D9786B3F2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_5FAE93110E8848E3_Struct_2_A0365C4D9786B3F2_TypeDefinitionIndex = 40559;

struct alignas(8) Class_1_5FAE93110E8848E3_Struct_2_A0365C4D9786B3F2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::MoleMole::Cameras::FixedCameraConfig* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::Class_1_5FAE93110E8848E3* Field_2_2; // 0x30
	::PipelineCamera::ScopedDelegateHandle Field_2_5; // 0x38
	::System::Boolean Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_STRUCT_2_A0365C4D9786B3F2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_STRUCT_2_A0365C4D9786B3F2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
