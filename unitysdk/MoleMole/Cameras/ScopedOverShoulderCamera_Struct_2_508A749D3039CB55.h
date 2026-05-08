#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_STRUCT_2_508A749D3039CB55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x737BA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_STRUCT_2_508A749D3039CB55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Struct_2_508A749D3039CB55_TypeDefinitionIndex = 58295;

	struct alignas(8) ScopedOverShoulderCamera_Struct_2_508A749D3039CB55
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_2_2; // 0x20
		::Struct_2_52A902145F5BE513_1 Field_2_4; // 0x28
		::MoleMole::Cameras::OverShoulderCameraConfig* Field_2_3; // 0x100
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* Field_2_5; // 0x108
		::PipelineCamera::ScopedDelegateHandle Field_2_6; // 0x110
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x118
		::System::Int32 Field_2_0; // 0x120

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_STRUCT_2_508A749D3039CB55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_STRUCT_2_508A749D3039CB55_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
