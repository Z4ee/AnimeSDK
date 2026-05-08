#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATEBLENDERBUILDER_OFFSET UNITYSDK_OFFSET(0x11006FE0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATEBLENDER_OFFSET UNITYSDK_OFFSET(0x11006EC0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATECUTBUILDER_OFFSET UNITYSDK_OFFSET(0x11006CD0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x11007190)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending_TypeDefinitionIndex = 60044;

	class CameraTrackBlending : public ::System::Object
	{
	public:
		::System::Single duration; // 0x10
		::System::String* curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING__CTOR_OFFSET))(this);
		}

		static ::PipelineCamera::ICameraDataBlenderBuilder* GenerateCutBuilder(::System::Int32 priority)
		{
			return ((::PipelineCamera::ICameraDataBlenderBuilder*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATECUTBUILDER_OFFSET))(priority);
		}

		::PipelineCamera::Blender::DefaultBlender* GenerateBlender(::System::Nullable_1<::System::Single> overriddenDuration, ::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::Blender::DefaultBlender*(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATEBLENDER_OFFSET))(this, overriddenDuration, debugName, flag);
		}

		::PipelineCamera::ICameraDataBlenderBuilder* GenerateBlenderBuilder(::System::Int32 priority, ::System::Nullable_1<::System::Single> overriddenDuration, ::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::ICameraDataBlenderBuilder*(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Single>, ::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_GENERATEBLENDERBUILDER_OFFSET))(this, priority, overriddenDuration, debugName, flag);
		}
	};
}
