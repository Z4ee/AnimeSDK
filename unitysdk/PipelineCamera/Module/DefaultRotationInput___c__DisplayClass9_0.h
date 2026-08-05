#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/Module/DefaultRotationInputParam.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }

#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1EED37E0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0x1EED38D0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED37D0)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultRotationInput___c__DisplayClass9_0_TypeDefinitionIndex = 38661;

	class DefaultRotationInput___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::Module::DefaultRotationInputParam>* subModules; // 0x10
		::Foundation::Unreal::FName moduleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildCameraCommandHandler_b__0(::PipelineCamera::CameraCommandSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET))(this, command);
		}

		::System::Void _BuildCameraCommandHandler_b__1(::PipelineCamera::CameraCommandUnSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandUnSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT___C__DISPLAYCLASS9_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET))(this, command);
		}
	};
}
