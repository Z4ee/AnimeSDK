#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x18F28000)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x18F27F40)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18F27F80)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18F27F20)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18F27F60)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18F27FA0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x18F276B0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18F27FE0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_WORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x18F27CB0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18F28110)
#define RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x18F28100)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x18F28190)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0x18F27F50)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18F27F90)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18F27F30)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18F27F70)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18F27FC0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18F27FF0)
#define RPG_CUSTOMRP_VIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F281A0)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET UNITYSDK_OFFSET(0x18F279F0)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x18F27B90)
#define RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x18F27E10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCamera_TypeDefinitionIndex = 35599;

	class VirtualCamera : public ::System::Object
	{
	public:
		::System::Single _NearClip; // 0x10
		::System::Single _FOV; // 0x14
		::UnityEngine::Vector3 _Translate; // 0x18
		::System::Boolean _ViewDirty; // 0x24
		::System::Boolean _Orthographic; // 0x25
		::System::Boolean _ProjectionDirty; // 0x26
		::UnityEngine::Quaternion _Rotation; // 0x28
		::System::Single _FarClip; // 0x38
		::System::Single _OrthographicSize; // 0x3C
		::System::Single _Aspect; // 0x40
		::UnityEngine::Matrix4x4 _View; // 0x44
		::UnityEngine::Matrix4x4 _Projection; // 0x84

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

		::System::Void set_fieldOfView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET))(this, a1);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET))(this, a1);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void ResetProjectionMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET))(this);
		}

		::System::Void LookAt(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetOrthographic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 _SetPerspective(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Matrix4x4 _SetOrtho(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Matrix4x4 _WorldToLocal(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET))(this, a1, a2, a3);
		}
	};
}
