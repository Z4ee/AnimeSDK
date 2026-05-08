#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_79CF9C940523FEDD_OFFSET UNITYSDK_OFFSET(0x124013B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_9C149172113ECE07_OFFSET UNITYSDK_OFFSET(0x12400FA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_A847BE0CBB220A4E_OFFSET UNITYSDK_OFFSET(0x12400F60)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_ECB3E307F744BB30_OFFSET UNITYSDK_OFFSET(0x12400A00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12400F40)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1__CTOR_OFFSET UNITYSDK_OFFSET(0x124009F0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_52337069D1078DF1_TypeDefinitionIndex = 58296;

	class ScopedOverShoulderCamera_Class_1_52337069D1078DF1 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* Field_1_5; // 0x10
		::MoleMole::Cameras::OverShoulderCameraConfig* Field_1_1; // 0x18
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_0; // 0x20
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* Field_1_2; // 0x28
		::System::Func_1<::System::Boolean>* Field_1_6; // 0x30
		::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x38
		::Foundation::Variable_1<::UnityEngine::Vector3> Field_1_4; // 0x40
		::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* Field_1_7; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* Method_1_ECB3E307F744BB30(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_ECB3E307F744BB30_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_1_A847BE0CBB220A4E(::System::Single a1, ::PipelineCamera::WorldBasicCameraData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_A847BE0CBB220A4E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9C149172113ECE07(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_9C149172113ECE07_OFFSET))(this, a1);
		}

		::PipelineCamera::ICameraDataBlender* Method_1_79CF9C940523FEDD(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_79CF9C940523FEDD_OFFSET))(this, a1);
		}
	};
}
