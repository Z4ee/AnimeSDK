#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_39070A33D94340C6_13_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x1B5367A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_39070A33D94340C6_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1B536790)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Class_1_39070A33D94340C6_13_TypeDefinitionIndex = 81959;

	class ScopedOverlookCameraMode_Class_1_39070A33D94340C6_13 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10
		::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_7; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_39070A33D94340C6_13__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_54757B8B62FBF467()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_39070A33D94340C6_13_METHOD_1_54757B8B62FBF467_OFFSET))(this);
		}
	};
}
