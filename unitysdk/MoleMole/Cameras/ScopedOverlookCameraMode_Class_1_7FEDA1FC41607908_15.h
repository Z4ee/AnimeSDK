#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_15_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x12B0CE70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_15__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0CE60)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Class_1_7FEDA1FC41607908_15_TypeDefinitionIndex = 78861;

	class ScopedOverlookCameraMode_Class_1_7FEDA1FC41607908_15 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
		::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_15__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E69F3DFB7CDFE412()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_15_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
		}
	};
}
