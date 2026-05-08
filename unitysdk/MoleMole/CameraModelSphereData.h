#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/MoleMole/DefaultCameraElevationTrack.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }

#define MOLEMOLE_CAMERAMODELSPHEREDATA_GETOVERRIDETRACK_OFFSET UNITYSDK_OFFSET(0x141D76C0)
#define MOLEMOLE_CAMERAMODELSPHEREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x141D7860)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModelSphereData_TypeDefinitionIndex = 77828;

	class CameraModelSphereData : public ::System::Object
	{
	public:
		::System::Single CAMERA_FOV; // 0x10
		::System::Single CAMERA_LOCATE_RADIUSRATIO; // 0x14
		::UnityEngine::Vector3 DEFAULT_FOLLOWOFFSET; // 0x18
		::UnityEngine::Vector3 DEFAULT_LOOKATOFFSET; // 0x24
		::System::Boolean OverrideElevationTrack; // 0x30
		::Il2CppArray<::MoleMole::CameraOrbit>* Orbits; // 0x38
		::MoleMole::CameraOrbit TopOrbit; // 0x40
		::System::Single TopCurvature; // 0x48
		::MoleMole::DefaultCameraElevationTrack ScreenYTrack; // 0x4C
		::MoleMole::Cameras::CameraTrackSetting* _cameraTrack; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODELSPHEREDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackSetting* GetOverrideTrack()
		{
			return ((::MoleMole::Cameras::CameraTrackSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODELSPHEREDATA_GETOVERRIDETRACK_OFFSET))(this);
		}
	};
}
