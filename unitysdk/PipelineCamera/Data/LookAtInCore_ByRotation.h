#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/RotateVectorPolicy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_BUILDCACHEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9CF310)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKALL_OFFSET UNITYSDK_OFFSET(0x9CF280)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9CF160)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9CF0D0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0x9CEFB0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKLOOKATSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9CF040)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINLOCATION_OFFSET UNITYSDK_OFFSET(0x9CEE90)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINRADIUS_OFFSET UNITYSDK_OFFSET(0x9CF1F0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9CEF20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CREATE_OFFSET UNITYSDK_OFFSET(0x1DCCDCF0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GETCAMERAROTATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9CF320)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9CF4E0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9CF3E0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9CF480)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x9CF540)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x9CF500)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9CF520)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9CF4B0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x9CF340)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x9CE8D0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x9CE690)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0x9CE3A0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETLOOKATSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9CE3B0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINLOCATION_OFFSET UNITYSDK_OFFSET(0x9CE0B0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINRADIUS_OFFSET UNITYSDK_OFFSET(0x9CEC50)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9CE0C0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETROTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9CEB10)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_ByRotation_TypeDefinitionIndex = 38436;

	struct alignas(4) LookAtInCore_ByRotation
	{
		::UnityEngine::Vector3 _mainLocation; // 0x10
		::UnityEngine::Vector2 _mainScreenOffset; // 0x1C
		::UnityEngine::Vector3 _lookAtLocation; // 0x24
		::UnityEngine::Vector2 _lookAtScreenOffset; // 0x30
		::System::Single _fieldOfView; // 0x38
		::System::Single _aspectRatio; // 0x3C
		::System::Single _mainRadius; // 0x40
		::Foundation::RotateVectorPolicy _rotateType; // 0x44
		::System::Boolean _isDirty; // 0x45
		::System::Nullable_1<::UnityEngine::Quaternion> _cachedRotation; // 0x48
		::System::Nullable_1<::UnityEngine::Vector3> _cachedLocation; // 0x5C
		::System::Nullable_1<::UnityEngine::Vector2> _cachedOffset; // 0x6C

		::System::Void SetMainLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINLOCATION_OFFSET))(this, value);
		}

		::System::Void SetMainScreenOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINSCREENOFFSET_OFFSET))(this, value);
		}

		::System::Void SetLookAtLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETLOOKATLOCATION_OFFSET))(this, value);
		}

		::System::Void SetLookAtScreenOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETLOOKATSCREENOFFSET_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::System::Void SetAspectRatio(::System::Single aspectRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETASPECTRATIO_OFFSET))(this, aspectRatio);
		}

		::System::Void SetRotationType(::Foundation::RotateVectorPolicy rotateType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::RotateVectorPolicy))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETROTATIONTYPE_OFFSET))(this, rotateType);
		}

		::System::Void SetMainRadius(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_SETMAINRADIUS_OFFSET))(this, radius);
		}

		::System::Void CheckMainLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINLOCATION_OFFSET))(this);
		}

		::System::Void CheckMainScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckLookAtLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKLOOKATLOCATION_OFFSET))(this);
		}

		::System::Void CheckLookAtScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKLOOKATSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckMainRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKMAINRADIUS_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CHECKALL_OFFSET))(this);
		}

		static ::PipelineCamera::Data::LookAtInCore_ByRotation Create(::UnityEngine::Vector3& mainLocation, ::UnityEngine::Vector2& mainScreenOffset, ::System::Single mainRadius, ::UnityEngine::Vector3& lookAtLocation, ::UnityEngine::Vector2& lookAtScreenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio, ::Foundation::RotateVectorPolicy rotateType)
		{
			return ((::PipelineCamera::Data::LookAtInCore_ByRotation(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::Foundation::RotateVectorPolicy))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_CREATE_OFFSET))(mainLocation, mainScreenOffset, mainRadius, lookAtLocation, lookAtScreenOffset, fieldOfView, aspectRatio, rotateType);
		}

		::System::Void BuildCacheInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_BUILDCACHEINTERNAL_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> GetCameraRotationInternal()
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GETCAMERAROTATIONINTERNAL_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_ISNULL_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_Location()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_LOCATION_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation()
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_ROTATION_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_FieldOfView()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_PivotLocation()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_Radius()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_RADIUS_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2> get_Offset()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATION_GET_OFFSET_OFFSET))(this);
		}
	};
}
