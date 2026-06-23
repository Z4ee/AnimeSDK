#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKALL_OFFSET UNITYSDK_OFFSET(0x9F4200)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9F4140)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9F4100)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKOFFSET_OFFSET UNITYSDK_OFFSET(0x9F41C0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x9F4080)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x9F40C0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKRADIUS_OFFSET UNITYSDK_OFFSET(0x9F4180)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D567F20)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F4050)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x490140)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9F3670)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x3E3D10)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x388220)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x4900E0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x983E20)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9F3FD0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F4070)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9F3DC0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x9F3690)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x9F3F50)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x9F3C30)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x9F3CC0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETRADIUS_OFFSET UNITYSDK_OFFSET(0x9F3EC0)
#define PIPELINECAMERA_LOCALBASICCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0x9F3960)

namespace PipelineCamera
{
	inline static constexpr unsigned int LocalBasicCameraData_TypeDefinitionIndex = 37598;

	struct alignas(4) LocalBasicCameraData
	{
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::UnityEngine::Quaternion _pivotRotation; // 0x1C
		::UnityEngine::Quaternion _localRotation; // 0x2C
		::System::Single _radius; // 0x3C
		::UnityEngine::Vector2 _offset; // 0x40
		::System::Single _fieldOfView; // 0x48

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_RADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GET_OFFSET_OFFSET))(this);
		}

		::System::Void SetLocation(::UnityEngine::Vector3& location)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCATION_OFFSET))(this, location);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETROTATION_OFFSET))(this, rotation);
		}

		::System::Void SetPivotLocation(::UnityEngine::Vector3& pivotLocation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETPIVOTLOCATION_OFFSET))(this, pivotLocation);
		}

		::System::Void SetPivotRotation(::UnityEngine::Quaternion& pivotRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETPIVOTROTATION_OFFSET))(this, pivotRotation);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion& localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCALROTATION_OFFSET))(this, localRotation);
		}

		::System::Void SetRadius(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETRADIUS_OFFSET))(this, radius);
		}

		::System::Void SetOffset(::UnityEngine::Vector2& offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETOFFSET_OFFSET))(this, offset);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		static ::PipelineCamera::LocalBasicCameraData Create(::UnityEngine::Vector3& pivotLocation, ::UnityEngine::Quaternion& pivotRotation, ::UnityEngine::Quaternion& localRotation, ::System::Single radius, ::UnityEngine::Vector2& offset, ::System::Single fieldOfView)
		{
			return ((::PipelineCamera::LocalBasicCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CREATE_OFFSET))(pivotLocation, pivotRotation, localRotation, radius, offset, fieldOfView);
		}

		::UnityEngine::Vector3 GetLocalCameraToPivotInternal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this);
		}

		::System::Void SetLocalCameraToPivotInternal(::UnityEngine::Vector3& localCameraToLookAt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this, localCameraToLookAt);
		}

		::System::Void CheckPivotLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKPIVOTLOCATION_OFFSET))(this);
		}

		::System::Void CheckPivotRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKPIVOTROTATION_OFFSET))(this);
		}

		::System::Void CheckLocalRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKLOCALROTATION_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKRADIUS_OFFSET))(this);
		}

		::System::Void CheckOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKOFFSET_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALBASICCAMERADATA_CHECKALL_OFFSET))(this);
		}
	};
}
