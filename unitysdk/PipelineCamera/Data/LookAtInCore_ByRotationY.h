#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_BUILDCACHEINTERNAL_OFFSET UNITYSDK_OFFSET(0x8DAB20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKALL_OFFSET UNITYSDK_OFFSET(0x8DA450)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x8DA7B0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKDELTARADIAN_OFFSET UNITYSDK_OFFSET(0x8DA8D0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8DA720)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0x8DA600)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKLOOKATSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x8DA690)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINLOCATION_OFFSET UNITYSDK_OFFSET(0x8DA4E0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINRADIUS_OFFSET UNITYSDK_OFFSET(0x8DA840)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x8DA570)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKPITCH_OFFSET UNITYSDK_OFFSET(0x8DA960)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKROLL_OFFSET UNITYSDK_OFFSET(0x8DA9F0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4CF8A0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_DESIREDRANGEBYPOSITIVEFORWARD_OFFSET UNITYSDK_OFFSET(0x1A4D2770)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_DESIREDRANGEBYSETTING_OFFSET UNITYSDK_OFFSET(0x8DAB40)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GETDESIREDOFFSET_OFFSET UNITYSDK_OFFSET(0x8DAB30)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8DAD20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x8DAB60)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x8DAC00)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8DAF70)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x8DADE0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x8DAEB0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x8DAC20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x8DAA80)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x8D9710)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETDELTARADIAN_OFFSET UNITYSDK_OFFSET(0x8D9B50)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8D94D0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETLOOKATLOCATION_OFFSET UNITYSDK_OFFSET(0x8D9290)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETLOOKATSCREENOFFSETX_OFFSET UNITYSDK_OFFSET(0x8D92A0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINLOCATION_OFFSET UNITYSDK_OFFSET(0x8D8FA0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINRADIUS_OFFSET UNITYSDK_OFFSET(0x8D9930)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x8D8FB0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETPITCH_OFFSET UNITYSDK_OFFSET(0x8D9F20)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETROLL_OFFSET UNITYSDK_OFFSET(0x8DA160)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_ByRotationY_TypeDefinitionIndex = 36168;

	struct alignas(4) LookAtInCore_ByRotationY
	{
		// static const ::System::Single Epsilon; // 0x0
		::UnityEngine::Vector3 _mainLocation; // 0x10
		::UnityEngine::Vector2 _mainScreenOffset; // 0x1C
		::UnityEngine::Vector3 _lookAtLocation; // 0x24
		::System::Single _lookAtScreenOffsetX; // 0x30
		::System::Single _fieldOfView; // 0x34
		::System::Single _aspectRatio; // 0x38
		::System::Single _mainRadius; // 0x3C
		::System::Single _minDeltaRadian; // 0x40
		::System::Single _maxDeltaRadian; // 0x44
		::System::Single _pitch; // 0x48
		::System::Single _roll; // 0x4C
		::System::Boolean _isDirty; // 0x50
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> _cachedData; // 0x54

		::System::Void SetMainLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINLOCATION_OFFSET))(this, value);
		}

		::System::Void SetMainScreenOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINSCREENOFFSET_OFFSET))(this, value);
		}

		::System::Void SetLookAtLocation(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETLOOKATLOCATION_OFFSET))(this, value);
		}

		::System::Void SetLookAtScreenOffsetX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETLOOKATSCREENOFFSETX_OFFSET))(this, value);
		}

		::System::Void SetFieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETFIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Void SetAspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETASPECTRATIO_OFFSET))(this, value);
		}

		::System::Void SetMainRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETMAINRADIUS_OFFSET))(this, value);
		}

		::System::Void SetDeltaRadian(::System::Single minRadian, ::System::Single maxRadian)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETDELTARADIAN_OFFSET))(this, minRadian, maxRadian);
		}

		::System::Void SetPitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETPITCH_OFFSET))(this, value);
		}

		::System::Void SetRoll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_SETROLL_OFFSET))(this, value);
		}

		static ::PipelineCamera::Data::LookAtInCore_ByRotationY Create(::UnityEngine::Vector3& mainLocation, ::UnityEngine::Vector2& mainScreenOffset, ::UnityEngine::Vector3& lookAtLocation, ::System::Single lookAtScreenOffsetX, ::System::Single fieldOfView, ::System::Single aspectRatio, ::System::Single mainRadius, ::UnityEngine::Vector2 deltaRadian, ::System::Single pitch, ::System::Single roll)
		{
			return ((::PipelineCamera::Data::LookAtInCore_ByRotationY(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CREATE_OFFSET))(mainLocation, mainScreenOffset, lookAtLocation, lookAtScreenOffsetX, fieldOfView, aspectRatio, mainRadius, deltaRadian, pitch, roll);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKALL_OFFSET))(this);
		}

		::System::Void CheckMainLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINLOCATION_OFFSET))(this);
		}

		::System::Void CheckMainScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckLookAtLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKLOOKATLOCATION_OFFSET))(this);
		}

		::System::Void CheckLookAtScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKLOOKATSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckMainRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKMAINRADIUS_OFFSET))(this);
		}

		::System::Void CheckDeltaRadian()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKDELTARADIAN_OFFSET))(this);
		}

		::System::Void CheckPitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKPITCH_OFFSET))(this);
		}

		::System::Void CheckRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_CHECKROLL_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_MARKDIRTY_OFFSET))(this);
		}

		::System::Void BuildCacheInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_BUILDCACHEINTERNAL_OFFSET))(this);
		}

		::System::Void GetDesiredOffset(::UnityEngine::Vector2& main, ::System::Single& lookAtX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GETDESIREDOFFSET_OFFSET))(this, main, lookAtX);
		}

		/*
		::Foundation::Unreal::Unsafe::Interval DesiredRangeBySetting(::UnityEngine::Vector3& mainToLookAt)
		{
			return ((::Foundation::Unreal::Unsafe::Interval(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_DESIREDRANGEBYSETTING_OFFSET))(this, mainToLookAt);
		}
		*/

		/*
		static ::Foundation::Unreal::Unsafe::Interval DesiredRangeByPositiveForward(::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ& vectorProxy)
		{
			return ((::Foundation::Unreal::Unsafe::Interval(*)(::PipelineCamera::Data::LookAtInCore_ByRotationY_CameraSpaceVectorProxyWithXZ&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_DESIREDRANGEBYPOSITIVEFORWARD_OFFSET))(vectorProxy);
		}
		*/

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_ISNULL_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_Location()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_LOCATION_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation()
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_ROTATION_OFFSET))(this);
		}
		*/

		::System::Nullable_1<::System::Single> get_FieldOfView()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_PivotLocation()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_Radius()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_RADIUS_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2> get_Offset()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_GET_OFFSET_OFFSET))(this);
		}
	};
}
