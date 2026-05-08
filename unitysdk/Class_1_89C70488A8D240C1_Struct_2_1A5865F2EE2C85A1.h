#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

class Class_1_89C70488A8D240C1;
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_89C70488A8D240C1_STRUCT_2_1A5865F2EE2C85A1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x571C60)
#define CLASS_1_89C70488A8D240C1_STRUCT_2_1A5865F2EE2C85A1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_89C70488A8D240C1_Struct_2_1A5865F2EE2C85A1_TypeDefinitionIndex = 80518;

struct alignas(8) Class_1_89C70488A8D240C1_Struct_2_1A5865F2EE2C85A1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::Class_1_89C70488A8D240C1* Field_2_2; // 0x20
	::PipelineCamera::ScopedDelegateHandle Field_2_6; // 0x28
	::MoleMole::Cameras::PhotoCameraConfig* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x38
	::PipelineCamera::WorldBasicCameraData Field_2_5; // 0x40
	::System::UInt32 Field_2_4; // 0x6C
	::System::Int32 Field_2_0; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_STRUCT_2_1A5865F2EE2C85A1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_STRUCT_2_1A5865F2EE2C85A1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
