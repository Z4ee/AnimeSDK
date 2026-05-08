#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x122DDB60)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__DISPLAYCLASS4_0__GENERATEBLENDERBUILDER_B__0_OFFSET UNITYSDK_OFFSET(0x122DDB70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending___c__DisplayClass4_0_TypeDefinitionIndex = 60045;

	class CameraTrackBlending___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* debugName; // 0x10
		::MoleMole::Cameras::CameraTrackBlending* __4__this; // 0x18
		::PipelineCamera::WorldBasicCameraDataDeltaFlag flag; // 0x20
		::System::Nullable_1<::System::Single> overriddenDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* _GenerateBlenderBuilder_b__0(::PipelineCamera::ICameraDataBlender* _)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING___C__DISPLAYCLASS4_0__GENERATEBLENDERBUILDER_B__0_OFFSET))(this, _);
		}
	};
}
