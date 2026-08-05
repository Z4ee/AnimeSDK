#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }

#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1C1153C0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0x1C1154B0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1153B0)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowTarget___c__DisplayClass7_0_TypeDefinitionIndex = 38676;

	class DefaultFollowTarget___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::CameraFollowTargetParam>* subModules; // 0x10
		::Foundation::Unreal::FName moduleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildCameraCommandHandler_b__0(::PipelineCamera::CameraCommandSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET))(this, command);
		}

		::System::Void _BuildCameraCommandHandler_b__1(::PipelineCamera::CameraCommandUnSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandUnSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWTARGET___C__DISPLAYCLASS7_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET))(this, command);
		}
	};
}
