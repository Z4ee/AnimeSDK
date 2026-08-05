#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_PLANECAMERACONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12A2D400)
#define MOLEMOLE_CAMERAS_PLANECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D470)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int PlaneCameraConfig_TypeDefinitionIndex = 80294;

	class PlaneCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 defaultLocation; // 0x10
		::UnityEngine::Quaternion defaultRotation; // 0x1C
		::System::Single defaultFieldOfView; // 0x2C
		::System::Single maxOffsetLeft; // 0x30
		::System::Single maxOffsetRight; // 0x34
		::System::Single maxOffsetUp; // 0x38
		::System::Single maxOffsetDown; // 0x3C
		::System::Single minFieldOfView; // 0x40
		::System::Single maxFieldOfView; // 0x44
		::System::Single defaultRadius; // 0x48
		::System::Single minRadius; // 0x4C
		::System::Single maxRadius; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PLANECAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PLANECAMERACONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
