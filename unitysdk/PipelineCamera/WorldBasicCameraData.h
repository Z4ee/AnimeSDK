#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKALL_OFFSET UNITYSDK_OFFSET(0x94D610)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x94D5D0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKOFFSET_OFFSET UNITYSDK_OFFSET(0x94D590)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x94D4D0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKRADIUS_OFFSET UNITYSDK_OFFSET(0x94D550)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKROTATION_OFFSET UNITYSDK_OFFSET(0x94D510)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B075050)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GETCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x94D4B0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x58C0F0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x94D0F0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x94D150)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3F6E00)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_INTERPTO_OFFSET UNITYSDK_OFFSET(0x1B075C50)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x94D4A0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x94D2E0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x94D160)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x94D450)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x94D390)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETRADIUS_OFFSET UNITYSDK_OFFSET(0x94D3F0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0x94D1E0)
#define PIPELINECAMERA_WORLDBASICCAMERADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0764D0)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraData_TypeDefinitionIndex = 35992;

	struct alignas(4) WorldBasicCameraData
	{
		static ::PipelineCamera::WorldBasicCameraData* StaticGet_Fallback()
		{
			return (::PipelineCamera::WorldBasicCameraData*)Il2CppClass::FromTypeDefinitionIndex(WorldBasicCameraData_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::UnityEngine::Quaternion _rotation; // 0x1C
		::System::Single _radius; // 0x2C
		::UnityEngine::Vector2 _offset; // 0x30
		::System::Single _fieldOfView; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_OFFSET_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GET_RADIUS_OFFSET))(this);
		}

		::System::Void SetLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETLOCATION_OFFSET))(this, value);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETROTATION_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Void SetPivotLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETPIVOTLOCATION_OFFSET))(this, value);
		}

		::System::Void SetRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETRADIUS_OFFSET))(this, value);
		}

		::System::Void SetOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETOFFSET_OFFSET))(this, value);
		}

		static ::PipelineCamera::WorldBasicCameraData Create(::UnityEngine::Vector3& pivotLocation, ::UnityEngine::Quaternion& rotation, ::System::Single radius, ::UnityEngine::Vector2& offset, ::System::Single fieldOfView)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CREATE_OFFSET))(pivotLocation, rotation, radius, offset, fieldOfView);
		}

		::System::Void SetCameraToPivotInternal(::UnityEngine::Vector3& cameraToPivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_SETCAMERATOPIVOTINTERNAL_OFFSET))(this, cameraToPivot);
		}

		::UnityEngine::Vector3 GetCameraToPivotInternal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_GETCAMERATOPIVOTINTERNAL_OFFSET))(this);
		}

		static ::PipelineCamera::WorldBasicCameraData InterpTo(::PipelineCamera::WorldBasicCameraData& current, ::PipelineCamera::WorldBasicCameraData& target, ::System::Single deltaTime, ::System::Single interpToSpeed)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_INTERPTO_OFFSET))(current, target, deltaTime, interpToSpeed);
		}

		::System::Void CheckPivotLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKPIVOTLOCATION_OFFSET))(this);
		}

		::System::Void CheckRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKROTATION_OFFSET))(this);
		}

		::System::Void CheckRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKRADIUS_OFFSET))(this);
		}

		::System::Void CheckOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKOFFSET_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADATA_CHECKALL_OFFSET))(this);
		}
	};
}
