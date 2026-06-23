#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraAxis.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }

#define MOLEMOLE_CAMERASCREENDRAGCONFIG_GETTRACK_OFFSET UNITYSDK_OFFSET(0x10CD1F40)
#define MOLEMOLE_CAMERASCREENDRAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD2460)

namespace MoleMole
{
	inline static constexpr unsigned int CameraScreenDragConfig_TypeDefinitionIndex = 44346;

	class CameraScreenDragConfig : public ::System::Object
	{
	public:
		::MoleMole::CameraAxis Drag_XAxis; // 0x10
		::MoleMole::CameraAxis Drag_YAxis; // 0x20
		::System::Single DRAG_TO_EXIT_DURATION; // 0x30
		::System::Single NapCamOrbitLerpTime; // 0x34
		::System::Single NapCamOrbitSplineCurvature; // 0x38
		::Il2CppArray<::MoleMole::CameraOrbit>* NapCameraOrbits; // 0x40
		::MoleMole::CameraOrbit NapTopCameraOrbit; // 0x48
		::System::Single NapCamTopOrbitSplineCurvature; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASCREENDRAGCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackSetting* GetTrack()
		{
			return ((::MoleMole::Cameras::CameraTrackSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASCREENDRAGCONFIG_GETTRACK_OFFSET))(this);
		}
	};
}
