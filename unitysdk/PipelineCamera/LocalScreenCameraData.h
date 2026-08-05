#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKALL_OFFSET UNITYSDK_OFFSET(0x9D3070)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9D2F50)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9D2FE0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9D2DA0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x9D2C80)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x9D2D10)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKRADIUS_OFFSET UNITYSDK_OFFSET(0x9D2E30)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9D2EC0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DCD8CA0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9D2C50)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x96A480)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9D1CE0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x9D1DF0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x5ED1B0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9D1D00)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9D2AF0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9D25E0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9D2C70)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9D2740)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x9D1E00)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x9D29B0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x9D2380)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x9D24B0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETRADIUS_OFFSET UNITYSDK_OFFSET(0x9D2870)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0x9D20F0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9D29C0)

namespace PipelineCamera
{
	inline static constexpr unsigned int LocalScreenCameraData_TypeDefinitionIndex = 38260;

	struct alignas(4) LocalScreenCameraData
	{
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::UnityEngine::Quaternion _pivotRotation; // 0x1C
		::UnityEngine::Quaternion _localRotation; // 0x2C
		::System::Single _radius; // 0x3C
		::UnityEngine::Vector2 _screenOffset; // 0x40
		::System::Single _aspectRatio; // 0x48
		::System::Single _fieldOfView; // 0x4C

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_RADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_OFFSET_OFFSET))(this);
		}

		::System::Boolean SetLocation(::UnityEngine::Vector3& location)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCATION_OFFSET))(this, location);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETROTATION_OFFSET))(this, rotation);
		}

		::System::Void SetPivotLocation(::UnityEngine::Vector3& pivotLocation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET))(this, pivotLocation);
		}

		::System::Void SetPivotRotation(::UnityEngine::Quaternion& pivotRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTROTATION_OFFSET))(this, pivotRotation);
		}

		::System::Void SetFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion& localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALROTATION_OFFSET))(this, localRotation);
		}

		::System::Void SetRadius(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETRADIUS_OFFSET))(this, radius);
		}

		::System::Boolean SetOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETOFFSET_OFFSET))(this, value);
		}

		::System::Void SetScreenOffset(::UnityEngine::Vector2& screenOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETSCREENOFFSET_OFFSET))(this, screenOffset);
		}

		::System::Void SetAspectRatio(::System::Single aspectRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETASPECTRATIO_OFFSET))(this, aspectRatio);
		}

		::UnityEngine::Vector3 GetLocalCameraToPivotInternal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this);
		}

		::System::Boolean SetLocalCameraToPivotInternal(::UnityEngine::Vector3& localCameraToPivot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this, localCameraToPivot);
		}

		::System::Void CheckPivotLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET))(this);
		}

		::System::Void CheckPivotRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTROTATION_OFFSET))(this);
		}

		::System::Void CheckLocalRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKLOCALROTATION_OFFSET))(this);
		}

		::System::Void CheckRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKRADIUS_OFFSET))(this);
		}

		::System::Void CheckScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKALL_OFFSET))(this);
		}

		static ::PipelineCamera::LocalScreenCameraData Create(::UnityEngine::Vector3& pivotLocation, ::UnityEngine::Quaternion& pivotRotation, ::UnityEngine::Quaternion& localRotation, ::System::Single radius, ::UnityEngine::Vector2& screenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::PipelineCamera::LocalScreenCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CREATE_OFFSET))(pivotLocation, pivotRotation, localRotation, radius, screenOffset, fieldOfView, aspectRatio);
		}
	};
}
