#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_DC6D9270345EAB42_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xF1283E0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_DC6D9270345EAB42__CTOR_OFFSET UNITYSDK_OFFSET(0xF1283D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_DC6D9270345EAB42_TypeDefinitionIndex = 77554;

	class ScopedOverShoulderCamera_Class_1_DC6D9270345EAB42 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_7; // 0x10
		::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_6; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_DC6D9270345EAB42__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_DC6D9270345EAB42_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
		}
	};
}
