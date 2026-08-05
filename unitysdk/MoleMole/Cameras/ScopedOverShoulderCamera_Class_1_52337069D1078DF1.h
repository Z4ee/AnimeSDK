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

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_299695EE5A8735D5_OFFSET UNITYSDK_OFFSET(0x134E4B00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_7716FCCC9D56717E_OFFSET UNITYSDK_OFFSET(0x134E50A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_A847BE0CBB220A4E_OFFSET UNITYSDK_OFFSET(0x134E5040)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_C36CFFA231F852E8_OFFSET UNITYSDK_OFFSET(0x134E4820)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x134E5080)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1__CTOR_OFFSET UNITYSDK_OFFSET(0x134E4810)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_52337069D1078DF1_TypeDefinitionIndex = 77556;

	class ScopedOverShoulderCamera_Class_1_52337069D1078DF1 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* Field_1_6; // 0x10
		::System::Func_1<::System::Boolean>* Field_1_11; // 0x18
		::MoleMole::Cameras::CameraTrackBlending* Field_1_4; // 0x20
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* Field_1_7; // 0x28
		::Foundation::Variable_1<::UnityEngine::Vector3> Field_1_5; // 0x30
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_1; // 0x50
		::MoleMole::Cameras::OverShoulderCameraConfig* Field_1_0; // 0x58
		::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* Field_1_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* Method_1_C36CFFA231F852E8(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_C36CFFA231F852E8_OFFSET))(this, a1);
		}

		::PipelineCamera::ICameraDataBlender* Method_1_299695EE5A8735D5(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_299695EE5A8735D5_OFFSET))(this, a1);
		}

		::System::Void Method_1_A847BE0CBB220A4E(::System::Single a1, ::PipelineCamera::WorldBasicCameraData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_A847BE0CBB220A4E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_1_7716FCCC9D56717E(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_52337069D1078DF1_METHOD_1_7716FCCC9D56717E_OFFSET))(this, a1);
		}
	};
}
