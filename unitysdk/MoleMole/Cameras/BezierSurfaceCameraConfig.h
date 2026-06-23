#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Geometry { class SmoothBezierSurface3D; }
namespace Foundation::Geometry { class SmoothBezierSurfaceDirection3D; }

#define MOLEMOLE_CAMERAS_BEZIERSURFACECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53A50)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int BezierSurfaceCameraConfig_TypeDefinitionIndex = 49730;

	class BezierSurfaceCameraConfig : public ::System::Object
	{
	public:
		::Foundation::Geometry::SmoothBezierSurface3D* cameraPosition; // 0x10
		::Foundation::Geometry::SmoothBezierSurfaceDirection3D* cameraDirection; // 0x18
		::UnityEngine::Vector3 basePosition; // 0x20
		::UnityEngine::Quaternion baseRotation; // 0x2C
		::System::Single minFieldOfView; // 0x3C
		::System::Single maxFieldOfView; // 0x40
		::System::Single defaultFieldOfView; // 0x44
		::System::Single defaultParamRow; // 0x48
		::System::Single defaultParamColumn; // 0x4C
		::System::Single defaultRadialOffset; // 0x50
		::System::Single minRadialOffset; // 0x54
		::System::Single maxRadialOffset; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_BEZIERSURFACECAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
