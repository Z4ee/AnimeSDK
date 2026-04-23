#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x181820A0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x18181FE0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18182020)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18181FC0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18182000)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18182040)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x181818F0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18182080)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_WORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x18181D50)
#define RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET UNITYSDK_OFFSET(0x181821B0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x181821A0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x18182230)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0x18181FF0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18182030)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18181FD0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18182010)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18182060)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18182090)
#define RPG_CUSTOMRP_VIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18182240)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET UNITYSDK_OFFSET(0x18181B50)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x18181C60)
#define RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x18181EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCamera_TypeDefinitionIndex = 35299;

	class VirtualCamera : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 _View; // 0x10
		::System::Boolean _ProjectionDirty; // 0x50
		::System::Boolean _ViewDirty; // 0x51
		::System::Boolean _Orthographic; // 0x52
		::System::Single _OrthographicSize; // 0x54
		::System::Single _Aspect; // 0x58
		::UnityEngine::Quaternion _Rotation; // 0x5C
		::System::Single _FarClip; // 0x6C
		::UnityEngine::Vector3 _Translate; // 0x70
		::UnityEngine::Matrix4x4 _Projection; // 0x7C
		::System::Single _NearClip; // 0xBC
		::System::Single _FOV; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_projectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_PROJECTIONMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToCameraMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_WORLDTOCAMERAMATRIX_OFFSET))(this);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_fieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET))(this, value);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Void CopyFrom(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET))(this, camera);
		}

		::System::Void ResetProjectionMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET))(this);
		}

		::System::Void LookAt(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET))(this, worldPosition);
		}

		::System::Void SetOrthographic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 _SetPerspective(::System::Single fovy, ::System::Single aspect, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET))(this, fovy, aspect, zNear, zFar);
		}

		::UnityEngine::Matrix4x4 _SetOrtho(::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET))(this, left, right, bottom, top, zNear, zFar);
		}

		::UnityEngine::Matrix4x4 _WorldToLocal(::UnityEngine::Vector3 T, ::UnityEngine::Quaternion R, ::UnityEngine::Vector3 S)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET))(this, T, R, S);
		}
	};
}
