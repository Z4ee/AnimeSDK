#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_5A8D842CFA6E673C_1.h"
#include "unitysdk/Struct_2_6B3AF550BFF57BDB.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x136C1060)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x136C2F90)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x136C2F20)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET UNITYSDK_OFFSET(0x136C33F0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x136C3000)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCURFOCUSTARGETPOS_OFFSET UNITYSDK_OFFSET(0x136C3580)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_INITFOCUSDATA_OFFSET UNITYSDK_OFFSET(0x136C0F50)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x136C0E60)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x136C1010)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x136C1150)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x136C2280)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x136C17A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x136C1EC0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x136C1520)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x136C1960)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET UNITYSDK_OFFSET(0x136C2440)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHOVERSHOULDERCAMERAFOCUSTARGETINFO_OFFSET UNITYSDK_OFFSET(0x136C1390)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERACHECK_OFFSET UNITYSDK_OFFSET(0x136C11B0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERAFOCUSCHECK_OFFSET UNITYSDK_OFFSET(0x136C12A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x136C3AD0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x136C3AF0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x136C3B30)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x136C3B70)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem_TypeDefinitionIndex = 60910;

	class LevelPerformCameraSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LevelPerformCameraSubSystem*>
	{
	public:
		// static const ::System::Single DEFAULT_FOLLOW_ENTITY_OVERRIDE_HEIGHT; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_DAMPING_SPEED; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_BACKUP_PROTECTION_DISTANCE; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_PROTECTION_OFFSET_SCALE; // 0x0
		::Class_3_C93CC3D2C2AC4067* _cachedFocusModelComp; // 0x10
		::UnityEngine::Transform* _cachedFocusTransform; // 0x18
		::MoleMole::EntityHandle _cachedFocusEntity; // 0x20
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x30
		::Class_3_C93CC3D2C2AC4067* _cachedOverrideFollowModelComp; // 0x38
		::System::Collections::Generic::List_1<::Struct_2_6B3AF550BFF57BDB>* _levelPerformCameraDataList; // 0x40
		::MoleMole::EntityHandle _cachedOverrideFollowEntity; // 0x48
		::System::Collections::Generic::List_1<::Struct_2_5A8D842CFA6E673C_1>* _focusTargetDataList; // 0x58
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x60
		::System::Single _cachedFocusDampingSpeed; // 0x6C
		::UnityEngine::Vector3 _cachedLastFocusTargetPos; // 0x70
		::System::Boolean _isInFocusTargetMode; // 0x7C
		::System::Boolean _isFollowEntityOverride; // 0x7D
		::System::Single _cachedFocusViewRatio; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void PushLevelPerformCameraFocusTargetData(::System::String* tag, ::System::UInt32 focusEntityID, ::System::String* focusEntityAttachPoint, ::UnityEngine::Vector3 focusWorldPos, ::System::Single dampingSpeed, ::System::Single viewRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET))(this, tag, focusEntityID, focusEntityAttachPoint, focusWorldPos, dampingSpeed, viewRatio);
		}

		::System::Void PopLevelPerformCameraFocusTargetData(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET))(this, tag, needRefresh);
		}

		::System::Void PushLevelPerformCameraData(::System::String* tag, ::System::String* baseConfigKey, ::System::String* overrideConfigKey, ::System::Boolean enableInitAimTarget, ::UnityEngine::Vector3 initAimTargetPos, ::System::Boolean enableInitPitch, ::System::Single initPitch, ::System::Boolean enableInitYaw, ::System::Single initYaw, ::System::Boolean useWorldCoordYaw, ::System::UInt32 followEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET))(this, tag, baseConfigKey, overrideConfigKey, enableInitAimTarget, initAimTargetPos, enableInitPitch, initPitch, enableInitYaw, initYaw, useWorldCoordYaw, followEntityID);
		}

		::System::Void PopLevelPerformCameraData(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET))(this, tag, needRefresh);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARDATA_OFFSET))(this);
		}

		::System::Void ClearLevelPerformCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET))(this);
		}

		::System::Void ClearFocusTargetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARFOCUSTARGETDATA_OFFSET))(this);
		}

		::System::Void TickLevelPerformCameraCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERACHECK_OFFSET))(this);
		}

		::System::Void TickLevelPerformCameraFocusCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERAFOCUSCHECK_OFFSET))(this);
		}

		::System::Void RefreshLevelPerformCamera(::System::Boolean fromPop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET))(this, fromPop);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Single GetCameraFollowEntityRotationYaw()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET))(this);
		}

		::System::Void InitFocusData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_INITFOCUSDATA_OFFSET))(this);
		}

		::System::Void RefreshFocusTargetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHFOCUSTARGETDATA_OFFSET))(this);
		}

		::System::Void RefreshOverShoulderCameraFocusTargetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHOVERSHOULDERCAMERAFOCUSTARGETINFO_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCurFocusTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCURFOCUSTARGETPOS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
