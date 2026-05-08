#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraCommand; }
namespace System { template <typename T> class Action_1; }

#define PIPELINECAMERA_CAMERACOMMANDHANDLERCOLLECTION_SENDCAMERACOMMAND_OFFSET UNITYSDK_OFFSET(0x99B760)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandHandlerCollection_TypeDefinitionIndex = 35868;

	struct alignas(8) CameraCommandHandlerCollection
	{
		::System::Action_1<::PipelineCamera::CameraCommandSpawnSubModules*>* _spawnSubModules; // 0x10
		::System::Action_1<::PipelineCamera::CameraCommandUnSpawnSubModules*>* _unSpawnSubModules; // 0x18

		::System::Void SendCameraCommand(::PipelineCamera::ICameraCommand* command)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommand*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDHANDLERCOLLECTION_SENDCAMERACOMMAND_OFFSET))(this, command);
		}
	};
}
