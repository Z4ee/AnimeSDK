#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKALL_OFFSET UNITYSDK_OFFSET(0xA95200)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA95180)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA951C0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0xA95080)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKRADIUS_OFFSET UNITYSDK_OFFSET(0xA95100)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKROTATION_OFFSET UNITYSDK_OFFSET(0xA950C0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0xA95140)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1F1B7530)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GETCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA95700)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x5ED1B0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA95240)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xA952A0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x4963E0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA95650)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA95720)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA953F0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xA952B0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0xA955C0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0xA954A0)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETRADIUS_OFFSET UNITYSDK_OFFSET(0xA95530)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0xA95330)
#define PIPELINECAMERA_WORLDSCREENCAMERADATA_SETSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0xA955D0)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldScreenCameraData_TypeDefinitionIndex = 38271;

	struct alignas(4) WorldScreenCameraData
	{
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::UnityEngine::Quaternion _rotation; // 0x1C
		::System::Single _radius; // 0x2C
		::UnityEngine::Vector2 _screenOffset; // 0x30
		::System::Single _aspectRatio; // 0x38
		::System::Single _fieldOfView; // 0x3C

		::System::Void CheckPivotLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET))(this);
		}

		::System::Void CheckRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKROTATION_OFFSET))(this);
		}

		::System::Void CheckRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKRADIUS_OFFSET))(this);
		}

		::System::Void CheckScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CHECKALL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_RADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_OFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GET_SCREENOFFSET_OFFSET))(this);
		}

		::System::Boolean SetLocation(::UnityEngine::Vector3& location)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETLOCATION_OFFSET))(this, location);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETROTATION_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Void SetPivotLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET))(this, value);
		}

		::System::Void SetRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETRADIUS_OFFSET))(this, value);
		}

		::System::Boolean SetOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETOFFSET_OFFSET))(this, value);
		}

		::System::Void SetScreenOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETSCREENOFFSET_OFFSET))(this, value);
		}

		::System::Void SetAspectRatio(::System::Single aspectRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETASPECTRATIO_OFFSET))(this, aspectRatio);
		}

		static ::PipelineCamera::WorldScreenCameraData Create(::UnityEngine::Vector3& pivotLocation, ::UnityEngine::Quaternion& rotation, ::System::Single radius, ::UnityEngine::Vector2& screenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::PipelineCamera::WorldScreenCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_CREATE_OFFSET))(pivotLocation, rotation, radius, screenOffset, fieldOfView, aspectRatio);
		}

		::UnityEngine::Vector3 GetCameraToPivotInternal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_GETCAMERATOPIVOTINTERNAL_OFFSET))(this);
		}

		::System::Boolean SetCameraToPivotInternal(::UnityEngine::Vector3& cameraToPivot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDSCREENCAMERADATA_SETCAMERATOPIVOTINTERNAL_OFFSET))(this, cameraToPivot);
		}
	};
}
