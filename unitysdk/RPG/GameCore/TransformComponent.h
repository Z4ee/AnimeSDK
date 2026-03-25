#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TransformComponent_ScaleSource.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C1413457115002E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_70443244DF08F2E0;
class TransformVersionTracker;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET UNITYSDK_OFFSET(0xAA81BC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET UNITYSDK_OFFSET(0xAA816F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA7E220)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET UNITYSDK_OFFSET(0xAA80FC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xAA82DC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA75DF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA80200)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET UNITYSDK_OFFSET(0xAA7E7A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xAA816B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA81540)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xAA816D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xAA82D40)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xAA54A30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xAA75B80)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA83770)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xAA82D20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xAA68510)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOSFORCENEWEST_OFFSET UNITYSDK_OFFSET(0xAA80960)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0xAA808C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xAA80DE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xAA7ED70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xAA80ED0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xAA81140)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0xAA80C70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_UP_OFFSET UNITYSDK_OFFSET(0xAA811F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xAA816E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0xAA808A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALESOURCETRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA80BB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALE_OFFSET UNITYSDK_OFFSET(0xAA75CF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xAA80C90)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xAA80DD0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xAA7F680)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET UNITYSDK_OFFSET(0xAA837D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET UNITYSDK_OFFSET(0xAA7F5A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAA7E2F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAA80360)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA80300)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0xAA82C70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xAA82650)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xAA804B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAA80850)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET UNITYSDK_OFFSET(0xAA81980)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAA7E5D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET UNITYSDK_OFFSET(0xAA7F0C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET UNITYSDK_OFFSET(0xAA81750)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET UNITYSDK_OFFSET(0xAA81AD0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0xAA82560)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET UNITYSDK_OFFSET(0xAA82070)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0xAA83000)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xAA654E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET UNITYSDK_OFFSET(0xAA7F3C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xAA81FB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xAA816C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA81550)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xAA82D50)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xAA82D30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xAA82D10)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0xAA7F340)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xAA687F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xAA68790)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xAA72340)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0xAA7F600)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0xAA675D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xAA75C20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xAA686B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET UNITYSDK_OFFSET(0xAA7E750)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET UNITYSDK_OFFSET(0xAA7E620)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET UNITYSDK_OFFSET(0xAA7F8E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xAA82D60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xAA7F770)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0xAA7EC50)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA837F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAA7E1A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0xAA83410)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xAA80DF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xAA83460)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xAA80EE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xAA80CA0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET UNITYSDK_OFFSET(0xAA82180)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET UNITYSDK_OFFSET(0xAA81E10)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET UNITYSDK_OFFSET(0xAA7E360)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xAA83220)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET UNITYSDK_OFFSET(0xAA806E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET UNITYSDK_OFFSET(0xAA83100)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xAA7FCB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET UNITYSDK_OFFSET(0xAA7FA00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAA83820)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAA83810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponent_TypeDefinitionIndex = 46528;

	class TransformComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickUnityGOSyncMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x45C90);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickYawAngleToTargetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x45C98);
		}
		::System::Action_1<::RPG::MVector3>* OnScaleChanged; // 0x18
		::UnityEngine::Transform* _AttachedTransform; // 0x20
		::RPG::GameCore::TransformComponent* _LockedFaceTarget; // 0x28
		::Struct_2_3C1413457115002E _PausedAttachPointEntry; // 0x30
		::System::Action* OnPositionChange; // 0x58
		::Struct_2_3C1413457115002E _LastAttachPointEntry; // 0x60
		::Class_1_70443244DF08F2E0* _dataViewSnapshot; // 0x88
		::UnityEngine::Transform* _RootTransform; // 0x90
		::TransformVersionTracker* _TransformTracker; // 0x98
		::RPG::GameCore::GameEntity* _AttachedEntity_k__BackingField; // 0xA0
		::RPG::MVector3 _WorldPos; // 0xA8
		::System::Single _YawAngleCacheOnAttach; // 0xB4
		::RPG::MVector3 _SelfScale; // 0xB8
		::UnityEngine::Vector3 _RootLocalOffset; // 0xC4
		::System::Boolean _CachePauseStateUtilResume; // 0xD0
		::System::Boolean _EnableAttach; // 0xD1
		::System::Boolean _YawAngleSmoothWithModelCentred; // 0xD2
		::System::Boolean _IndenpendentTransformMode; // 0xD3
		::System::Boolean _IsStatic; // 0xD4
		::System::Boolean _UseAttachedScale; // 0xD5
		::System::Boolean _IsAttachPaused; // 0xD6
		::System::Boolean _SyncRootTrans; // 0xD7
		::RPG::MVector3 _WorldPosCacheOnAttach; // 0xD8
		::System::Int32 _LastLateUpdateFrame; // 0xE4
		::System::Single _PitchAngle; // 0xE8
		::System::Single _TargetYawAngle; // 0xEC
		::System::Single _YawAngle; // 0xF0
		::System::UInt32 _EntityLodCurrentRegionID_k__BackingField; // 0xF4
		::System::Single _YawAngleSmoothDuration; // 0xF8
		::System::UInt32 _RegisterVisibleChangeEntityID; // 0xFC
		::System::Single _RollAngle; // 0x100
		::System::Boolean _DisableAttachWhenTargetInvisible; // 0x104
		::System::Boolean _LockPosition; // 0x105
		::System::Boolean _LockRotation; // 0x106
		::System::Boolean _PauseAttachRelative; // 0x107
		::System::UInt32 _TransformVersion; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void SetRootLocalOffset(::RPG::MVector3 offset, ::System::Boolean refreshRoot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET))(this, offset, refreshRoot);
		}

		::System::Void PostInitComponent(::RPG::GameCore::EntityType eEntityType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET))(this, eEntityType);
		}

		::System::Void SmoothChangeYawAngleStart(::System::Single targetYawAngle, ::System::Single duration, ::System::Boolean useModelCentredYaw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET))(this, targetYawAngle, duration, useModelCentredYaw);
		}

		::System::Void SmoothChangeYawAngleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET))(this);
		}

		::RPG::MVector3 GetLookAtPos(::RPG::GameCore::GameEntity* pTargetEntity, ::System::Boolean bUseTargetTeamFormationPos)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET))(this, pTargetEntity, bUseTargetTeamFormationPos);
		}

		::RPG::MVector3 TransformVector(::RPG::MVector3 vDir)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET))(this, vDir);
		}

		::System::Void RefreshScaleToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET))(this);
		}

		::System::Void SetScaleByWorldScale(::RPG::MVector3 vNewWorldScale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET))(this, vNewWorldScale);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void TickPos(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ForceSyncTransform(::System::Boolean ignoreVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET))(this, ignoreVersion);
		}

		::System::Void LockTransform(::System::Boolean lockPosition, ::System::Boolean lockRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET))(this, lockPosition, lockRotation);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::RPG::MVector3 get_WorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDPOS_OFFSET))(this);
		}

		::System::Void set_WorldPos(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ModelWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET))(this);
		}

		::System::Void set_ModelWorldPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ModelWorldPosForceNewest()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOSFORCENEWEST_OFFSET))(this);
		}

		::UnityEngine::Transform* get_WorldScaleSourceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALESOURCETRANSFORM_OFFSET))(this);
		}

		::RPG::MVector3 get_WorldScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALE_OFFSET))(this);
		}

		::RPG::MVector3 get_SelfScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_SELFSCALE_OFFSET))(this);
		}

		::System::Void set_SelfScale(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET))(this, value);
		}

		::System::Single get_YawAngleWithModelCentred()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET))(this);
		}

		::System::Void set_YawAngleWithModelCentred(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET))(this, value);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET))(this);
		}

		::System::Void set_YawAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET))(this, value);
		}

		::System::Single get_PitchAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET))(this);
		}

		::System::Void set_PitchAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET))(this, value);
		}

		::System::Single get_RollAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET))(this);
		}

		::System::Void set_RollAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET))(this, value);
		}

		::System::Single Distance(::UnityEngine::GameObject* other)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET))(this, other);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_FORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AttachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_AttachedTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDTRANSFORM_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_AttachedEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET))(this);
		}

		::System::Void set_AttachedEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_EnableAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET))(this);
		}

		::System::Boolean get_UseAttachedScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET))(this);
		}

		::System::Void AttachTo(::UnityEngine::Transform* TargetTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET))(this, TargetTransform);
		}

		::System::Void PauseAttach(::System::Boolean bResetPosAndRot, ::System::Boolean bResetVisibleFollow, ::System::Boolean bCachePauseStateUtilResume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET))(this, bResetPosAndRot, bResetVisibleFollow, bCachePauseStateUtilResume);
		}

		::System::Void ResumeAttach(::System::Boolean bTickPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET))(this, bTickPos);
		}

		::System::Void AttachTo_1(::Struct_2_3C1413457115002E pEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3C1413457115002E))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET))(this, pEntry);
		}

		::System::Void ReleaseAttach(::System::Boolean bResetPosAndRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET))(this, bResetPosAndRot);
		}

		::System::Void SetWorldPos(::RPG::MVector3 pos, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET))(this, pos, syncFormation);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos(::RPG::MVector3 targetPos, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET))(this, targetPos, syncFormation);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos_1(::RPG::MVector3 targetPos, ::RPG::GameCore::GameEntity* attachEntity, ::System::Boolean ignoreY, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET))(this, targetPos, attachEntity, ignoreY, syncFormation);
		}

		::System::Void _SetAttachTransByTargetPos(::RPG::MVector3 targetPos, ::RPG::GameCore::TransformComponent* attachTransform, ::System::Boolean ignoreY, ::System::Boolean syncFormation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::TransformComponent*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET))(this, targetPos, attachTransform, ignoreY, syncFormation);
		}

		::System::Void OnBattleDataView(::System::Boolean bIsEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET))(this, bIsEnter);
		}

		::System::Void OnBattleDataViewBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* get_LockedFaceTarget()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET))(this);
		}

		::System::Void set_LockedFaceTarget(::RPG::GameCore::TransformComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityLodCurrentRegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET))(this);
		}

		::System::Void set_EntityLodCurrentRegionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET))(this, value);
		}

		::System::Void TickUnityGoSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET))(this);
		}

		::System::Void _TickUnityGOSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET))(this);
		}

		::System::Void ForceSetTransform(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 scale, ::System::Single pitch, ::System::Single yaw, ::System::Single roll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET))(this, pos, scale, pitch, yaw, roll);
		}

		::System::Void ForceSetTransform_1(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET))(this, pos, rot);
		}

		::System::Void SetAttachmentIndependentTransformMode(::System::Boolean bIsOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET))(this, bIsOpen);
		}

		::System::Void _TickPos(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickYawAngleToTarget(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnYawAngleChanged(::System::Single newAngle, ::System::Boolean isModelCentred)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET))(this, newAngle, isModelCentred);
		}

		::System::Void _OnPitchAngleChanged(::System::Single newAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET))(this, newAngle);
		}

		::System::Void _OnRollAngleChanged(::System::Single newAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET))(this, newAngle);
		}

		::System::Void _SetRootTransPos(::UnityEngine::Vector3 newRootPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET))(this, newRootPos);
		}

		::System::Void _SetRootTransPosAndRotation(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET))(this, newRootPos, newRootRot);
		}

		::System::Void _SetRootTransRotation(::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET))(this, newRootRot);
		}

		::System::Void _SetRootTransRotationWithModelCentred(::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET))(this, newRootRot);
		}

		::System::Void _OnAttachEntityVisibleChanged(::Class_0_16E4307DCC419505_375* pevent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET))(this, pevent);
		}

		::System::Void _OnRefreshEnableAttach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHENABLEATTACH_OFFSET))(this);
		}

		::System::Boolean get_HasRootTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_HasRootLocalOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTLOCALOFFSET_OFFSET))(this);
		}

		::RPG::MVector3 get__AttachedScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ATTACHEDSCALE_OFFSET))(this);
		}

		::System::Boolean get__IsYawAngleSmoothChangeStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent_ScaleSource get__WorldScaleSource()
		{
			return ((::RPG::GameCore::TransformComponent_ScaleSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
