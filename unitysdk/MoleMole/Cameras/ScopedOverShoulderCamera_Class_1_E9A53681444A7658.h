#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_E9A53681444A7658_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x11080DD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_E9A53681444A7658__CTOR_OFFSET UNITYSDK_OFFSET(0x11080DC0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_E9A53681444A7658_TypeDefinitionIndex = 81857;

	class ScopedOverShoulderCamera_Class_1_E9A53681444A7658 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
		::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18
		::MoleMole::Cameras::OverShoulderCameraConfig* Field_1_3; // 0x20
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_2; // 0x28
		::System::Boolean Field_1_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_E9A53681444A7658__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9B2E710EB9D49BA6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_E9A53681444A7658_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
		}
	};
}
