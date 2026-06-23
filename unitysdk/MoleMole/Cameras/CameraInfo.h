#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B0B23E68EE6D4D0B.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_CORRECTEDORIENTATION_OFFSET UNITYSDK_OFFSET(0x707720)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_CORRECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x68FB60)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_FINALORIENTATION_OFFSET UNITYSDK_OFFSET(0x707720)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x68FB60)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x45A490)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x3E5840)
#define MOLEMOLE_CAMERAS_CAMERAINFO_GET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x7076F0)
#define MOLEMOLE_CAMERAS_CAMERAINFO_METHOD_2_DB077F204DC28C2A_OFFSET UNITYSDK_OFFSET(0x707810)
#define MOLEMOLE_CAMERAS_CAMERAINFO_SET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x707710)
#define MOLEMOLE_CAMERAS_CAMERAINFO_SET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x68FA00)
#define MOLEMOLE_CAMERAS_CAMERAINFO_SET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x707700)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraInfo_TypeDefinitionIndex = 85928;

	struct alignas(4) CameraInfo
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 _PositionCorrection_k__BackingField; // 0x1C
		::UnityEngine::Vector3 Forward; // 0x28
		::UnityEngine::Vector3 Up; // 0x34
		::System::Single CameraFov; // 0x40
		::UnityEngine::Vector3 RotationCorrection; // 0x44
		::UnityEngine::Quaternion _RawOrientation_k__BackingField; // 0x50
		::UnityEngine::Quaternion _OrientationCorrection_k__BackingField; // 0x60
		::UnityEngine::Vector3 LookAtPosition; // 0x70
		::UnityEngine::Vector3 FollowPosition; // 0x7C
		::Enum_3_B0B23E68EE6D4D0B State; // 0x88
		::System::Boolean CameraToTargetObscured; // 0x8C

		::UnityEngine::Vector3 get_PositionCorrection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_POSITIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_PositionCorrection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_SET_POSITIONCORRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_FinalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_FINALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CorrectedPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_CORRECTEDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_RawOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_RAWORIENTATION_OFFSET))(this);
		}

		::System::Void set_RawOrientation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_SET_RAWORIENTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_OrientationCorrection()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_ORIENTATIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_OrientationCorrection(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_SET_ORIENTATIONCORRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_CorrectedOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_CORRECTEDORIENTATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_FinalOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_GET_FINALORIENTATION_OFFSET))(this);
		}

		::System::Void Method_2_DB077F204DC28C2A(::MoleMole::Cameras::CameraInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAINFO_METHOD_2_DB077F204DC28C2A_OFFSET))(this, a1);
		}
	};
}
