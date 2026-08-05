#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_STRUCT_2_E6DF75B34DC8E026_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x802320)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_STRUCT_2_E6DF75B34DC8E026_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Struct_2_E6DF75B34DC8E026_TypeDefinitionIndex = 81963;

	struct alignas(8) ScopedOverlookCameraMode_Struct_2_E6DF75B34DC8E026
	{
		::MoleMole::Cameras::OverlookCameraConfig* Field_2_7; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
		::MoleMole::Cameras::ScopedOverlookCameraMode* Field_2_0; // 0x20
		::PipelineCamera::ScopedDelegateHandle Field_2_6; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
		::System::Int32 Field_2_2; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_STRUCT_2_E6DF75B34DC8E026_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_STRUCT_2_E6DF75B34DC8E026_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
