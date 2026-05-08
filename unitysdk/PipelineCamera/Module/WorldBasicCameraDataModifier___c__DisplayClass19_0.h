#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }

#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1B6C7AC0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0x1B6C7BB0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C7AB0)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int WorldBasicCameraDataModifier___c__DisplayClass19_0_TypeDefinitionIndex = 36400;

	class WorldBasicCameraDataModifier___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::WorldBasicCameraData>* subModules; // 0x10
		::Foundation::Unreal::FName moduleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildCameraCommandHandler_b__0(::PipelineCamera::CameraCommandSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__BUILDCAMERACOMMANDHANDLER_B__0_OFFSET))(this, command);
		}

		::System::Void _BuildCameraCommandHandler_b__1(::PipelineCamera::CameraCommandUnSpawnSubModules* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandUnSpawnSubModules*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER___C__DISPLAYCLASS19_0__BUILDCAMERACOMMANDHANDLER_B__1_OFFSET))(this, command);
		}
	};
}
