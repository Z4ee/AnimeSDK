#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/RotateVectorPolicy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_BUILDCACHEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA5F780)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKALL_OFFSET UNITYSDK_OFFSET(0xA5F690)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA5F650)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKCAMERALOCATION_OFFSET UNITYSDK_OFFSET(0xA5F550)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA5F610)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0xA5F590)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKLOOKATSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0xA5F5D0)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CREATE_OFFSET UNITYSDK_OFFSET(0x1EBC81D0)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA5F730)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xA5F6D0)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9CF500)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA5F750)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xA5F790)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA5F290)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETCAMERALOCATION_OFFSET UNITYSDK_OFFSET(0xA5E900)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xA5F060)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0xA5EB40)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETLOOKATSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0xA5ED80)
#define PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETROTATIONTYPE_OFFSET UNITYSDK_OFFSET(0xA5F4C0)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInFinal_ByRotation_TypeDefinitionIndex = 38442;

	struct alignas(4) LookAtInFinal_ByRotation
	{
		::UnityEngine::Vector3 _cameraLocation; // 0x10
		::UnityEngine::Vector3 _lookAtLocation; // 0x1C
		::UnityEngine::Vector2 _lookAtScreenOffset; // 0x28
		::System::Single _fieldOfView; // 0x30
		::System::Single _aspectRatio; // 0x34
		::Foundation::RotateVectorPolicy _rotateType; // 0x38
		::System::Nullable_1<::UnityEngine::Quaternion> _cachedRotation; // 0x3C
		::System::Boolean _isDirty; // 0x50

		::System::Void SetCameraLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETCAMERALOCATION_OFFSET))(this, value);
		}

		::System::Void SetLookAtLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETLOOKATLOCATION_OFFSET))(this, value);
		}

		::System::Void SetLookAtScreenOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETLOOKATSCREENOFFSET_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Void SetAspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETASPECTRATIO_OFFSET))(this, value);
		}

		::System::Void SetRotationType(::Foundation::RotateVectorPolicy rotateType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::RotateVectorPolicy))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_SETROTATIONTYPE_OFFSET))(this, rotateType);
		}

		static ::PipelineCamera::Data::LookAtInFinal_ByRotation Create(::UnityEngine::Vector3& cameraLocation, ::UnityEngine::Vector3& lookAtLocation, ::UnityEngine::Vector2& lookAtScreenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio, ::Foundation::RotateVectorPolicy rotateType)
		{
			return ((::PipelineCamera::Data::LookAtInFinal_ByRotation(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::Foundation::RotateVectorPolicy))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CREATE_OFFSET))(cameraLocation, lookAtLocation, lookAtScreenOffset, fieldOfView, aspectRatio, rotateType);
		}

		::System::Void CheckCameraLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKCAMERALOCATION_OFFSET))(this);
		}

		::System::Void CheckLookAtLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKLOOKATLOCATION_OFFSET))(this);
		}

		::System::Void CheckLookAtScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKLOOKATSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_CHECKALL_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_ISNULL_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_Location()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_LOCATION_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_FieldOfView()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation()
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_GET_ROTATION_OFFSET))(this);
		}

		::System::Void BuildCacheInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_BUILDCACHEINTERNAL_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_BYROTATION_MARKDIRTY_OFFSET))(this);
		}
	};
}
