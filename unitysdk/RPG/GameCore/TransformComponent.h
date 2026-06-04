#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TransformComponent_ScaleSource.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C1413457115002E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_4B1D94091324F74F;
class Class_1_70443244DF08F2E0;
class TransformVersionTracker;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET UNITYSDK_OFFSET(0xCF310C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET UNITYSDK_OFFSET(0xCF30990)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_CANCELSMOOTHFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF31570)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF2D100)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCF303C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xCF32AE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF23D30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF2F560)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET UNITYSDK_OFFSET(0xCF2D9B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xCF30950)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF30940)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xCF30970)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xCF326E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xCF00730)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xCF23AC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_HASROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF33630)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xCF326C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xCF15990)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOSFORCENEWEST_OFFSET UNITYSDK_OFFSET(0xCF2FD70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCF2FCD0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xCF301E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xCF2DF90)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xCF302D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCF30540)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0xCF30070)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_TARGETYAWANGLE_OFFSET UNITYSDK_OFFSET(0xCF33690)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_UP_OFFSET UNITYSDK_OFFSET(0xCF305F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xCF30980)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0xCF2FCB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALESOURCETRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF2FFB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_WORLDSCALE_OFFSET UNITYSDK_OFFSET(0xCF23C30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xCF30090)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xCF301D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ATTACHEDSCALE_OFFSET UNITYSDK_OFFSET(0xCF2E8A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET UNITYSDK_OFFSET(0xCF336A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__SMOOTHENABLED_OFFSET UNITYSDK_OFFSET(0xCF2F6B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET UNITYSDK_OFFSET(0xCF2E7C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCF2D480)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF2F770)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKSMOOTHFOLLOWSTATE_OFFSET UNITYSDK_OFFSET(0xCF314F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCF2F710)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET UNITYSDK_OFFSET(0xCF32610)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xCF31F10)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCF2F920)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCF2FC60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET UNITYSDK_OFFSET(0xCF30E70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCF2D7E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET UNITYSDK_OFFSET(0xCF2E2E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET UNITYSDK_OFFSET(0xCF30A40)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCF336C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET UNITYSDK_OFFSET(0xCF30FD0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0xCF31E20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET UNITYSDK_OFFSET(0xCF31910)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHINFO_OFFSET UNITYSDK_OFFSET(0xCF30CB0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0xCF32D30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xCF126B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET UNITYSDK_OFFSET(0xCF2E5E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETUPSMOOTHFOLLOW_OFFSET UNITYSDK_OFFSET(0xCF31340)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCF31850)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET UNITYSDK_OFFSET(0xCF30960)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET UNITYSDK_OFFSET(0xCF326F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xCF326D0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET UNITYSDK_OFFSET(0xCF326B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCF2E560)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET UNITYSDK_OFFSET(0xCF15C60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET UNITYSDK_OFFSET(0xCF15C00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCF20140)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET UNITYSDK_OFFSET(0xCF2E820)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0xCF149C0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xCF23B60)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xCF15B30)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET UNITYSDK_OFFSET(0xCF2D960)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET UNITYSDK_OFFSET(0xCF2D830)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET UNITYSDK_OFFSET(0xCF2EB00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xCF32700)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCF2E990)
#define RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0xCF2DE70)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF338B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCF2D080)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0xCF33320)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xCF301F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHENABLEATTACH_OFFSET UNITYSDK_OFFSET(0xCF33370)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHFORMATION_OFFSET UNITYSDK_OFFSET(0xCF330F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xCF33180)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xCF302E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET UNITYSDK_OFFSET(0xCF300A0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET UNITYSDK_OFFSET(0xCF31A20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATIONSMOOTHLY_OFFSET UNITYSDK_OFFSET(0xCF32760)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET UNITYSDK_OFFSET(0xCF316B0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET UNITYSDK_OFFSET(0xCF2D580)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET UNITYSDK_OFFSET(0xCF32F00)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET UNITYSDK_OFFSET(0xCF2FAF0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__SETTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0xCF2D2F0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET UNITYSDK_OFFSET(0xCF32DE0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET UNITYSDK_OFFSET(0xCF2EEC0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET UNITYSDK_OFFSET(0xCF2EC20)
#define RPG_GAMECORE_TRANSFORMCOMPONENT__UPDATESMOOTHPOSTOTARGET_OFFSET UNITYSDK_OFFSET(0xCF33220)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF338E0)
#define RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCF338D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponent_TypeDefinitionIndex = 53930;

	class TransformComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickYawAngleToTargetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x68BC0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickUnityGOSyncMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(TransformComponent_TypeDefinitionIndex)->GetStaticField(0x68BC8);
		}
		::UnityEngine::Transform* _RootTransform; // 0x18
		::System::Action* OnPositionChange; // 0x20
		::Struct_2_3C1413457115002E _LastAttachPointEntry; // 0x28
		::UnityEngine::Transform* _SelfAttachPoint; // 0x58
		::Class_1_4B1D94091324F74F* _SmoothFollowAgent; // 0x60
		::RPG::GameCore::TransformComponent* _LockedFaceTarget; // 0x68
		::Struct_2_3C1413457115002E _PausedAttachPointEntry; // 0x70
		::Class_1_70443244DF08F2E0* _dataViewSnapshot; // 0xA0
		::RPG::GameCore::GameEntity* _AttachedEntity_k__BackingField; // 0xA8
		::System::Action_1<::RPG::MVector3>* OnScaleChanged; // 0xB0
		::TransformVersionTracker* _TransformTracker; // 0xB8
		::UnityEngine::Transform* _AttachedTransform; // 0xC0
		::System::Single _YawAngleCacheOnAttach; // 0xC8
		::System::UInt32 _EntityLodCurrentRegionID_k__BackingField; // 0xCC
		::RPG::MVector3 _AttachedWorldOffset; // 0xD0
		::RPG::MVector3 _WorldPos; // 0xDC
		::System::Int32 _LastLateUpdateFrame; // 0xE8
		::System::Boolean _UseAttachedScale; // 0xEC
		::UnityEngine::Vector3 _RootLocalOffset; // 0xF0
		::RPG::MVector3 _WorldPosCacheOnAttach; // 0xFC
		::System::Single _RollAngle; // 0x108
		::System::UInt32 _RegisterVisibleChangeEntityID; // 0x10C
		::RPG::MVector3 _SelfScale; // 0x110
		::System::Boolean _UseSelfAttachPointFollow; // 0x11C
		::System::Boolean _EnableAttach; // 0x11D
		::System::Boolean _YawAngleSmoothWithModelCentred; // 0x11E
		::System::Boolean _CachePauseStateUtilResume; // 0x11F
		::System::Single _YawAngle; // 0x120
		::System::Boolean _IsSelfTracker; // 0x124
		::System::Boolean _IsStatic; // 0x125
		::System::Boolean _LockPosition; // 0x126
		::System::Boolean _DisableAttachWhenTargetInvisible; // 0x127
		::System::Single _TargetYawAngle; // 0x128
		::System::Single _YawAngleSmoothDuration; // 0x12C
		::System::Boolean _IsAttachPaused; // 0x130
		::System::Boolean _LockRotation; // 0x131
		::System::Boolean _PauseAttachRelative; // 0x132
		::System::Boolean _IndenpendentTransformMode; // 0x133
		::System::Single _PitchAngle; // 0x134
		::System::UInt32 _TransformVersion; // 0x138

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

		::System::Void SetRootLocalOffset(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETROOTLOCALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void PostInitComponent(::RPG::GameCore::EntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_POSTINITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void SmoothChangeYawAngleStart(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLESTART_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SmoothChangeYawAngleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SMOOTHCHANGEYAWANGLEEND_OFFSET))(this);
		}

		::RPG::MVector3 GetLookAtPos(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GETLOOKATPOS_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 TransformVector(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TRANSFORMVECTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshScaleToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_REFRESHSCALETOMODEL_OFFSET))(this);
		}

		::System::Void SetScaleByWorldScale(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETSCALEBYWORLDSCALE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void TickPos(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKPOS_OFFSET))(this, a1);
		}

		::System::Void ForceSyncTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESYNCTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void LockTransform(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LATEUPDATE_OFFSET))(this, a1);
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

		::System::Void set_WorldPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_WORLDPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ModelWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_MODELWORLDPOS_OFFSET))(this);
		}

		::System::Void set_ModelWorldPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_MODELWORLDPOS_OFFSET))(this, a1);
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

		::System::Void set_SelfScale(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_SELFSCALE_OFFSET))(this, a1);
		}

		::System::Single get_YawAngleWithModelCentred()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLEWITHMODELCENTRED_OFFSET))(this);
		}

		::System::Void set_YawAngleWithModelCentred(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLEWITHMODELCENTRED_OFFSET))(this, a1);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_YAWANGLE_OFFSET))(this);
		}

		::System::Void set_YawAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_YAWANGLE_OFFSET))(this, a1);
		}

		::System::Single get_PitchAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_PITCHANGLE_OFFSET))(this);
		}

		::System::Void set_PitchAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_PITCHANGLE_OFFSET))(this, a1);
		}

		::System::Single get_RollAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROLLANGLE_OFFSET))(this);
		}

		::System::Void set_RollAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROLLANGLE_OFFSET))(this, a1);
		}

		::System::Single Distance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_DISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ROTATION_OFFSET))(this, a1);
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

		::RPG::GameCore::GameEntity* get_AttachedEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ATTACHEDENTITY_OFFSET))(this);
		}

		::System::Void set_AttachedEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ATTACHEDENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENABLEATTACH_OFFSET))(this);
		}

		::System::Boolean get_UseAttachedScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_USEATTACHEDSCALE_OFFSET))(this);
		}

		::System::Boolean get__SmoothEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__SMOOTHENABLED_OFFSET))(this);
		}

		::System::Void _SetTransformTracker(::TransformVersionTracker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TransformVersionTracker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETTRANSFORMTRACKER_OFFSET))(this, a1);
		}

		::System::Void AttachTo(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseAttach(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_PAUSEATTACH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResumeAttach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RESUMEATTACH_OFFSET))(this, a1);
		}

		::System::Void AttachTo_1(::Struct_2_3C1413457115002E a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3C1413457115002E))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ATTACHTO_1_OFFSET))(this, a1);
		}

		::System::Void SetupSmoothFollow(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETUPSMOOTHFOLLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LockSmoothFollowState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_LOCKSMOOTHFOLLOWSTATE_OFFSET))(this, a1);
		}

		::System::Void CancelSmoothFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_CANCELSMOOTHFOLLOW_OFFSET))(this);
		}

		::System::Void ReleaseAttach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RELEASEATTACH_OFFSET))(this, a1);
		}

		::System::Void SetAttachInfo(::UnityEngine::Transform* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetWorldPos(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_OFFSET))(this, a1, a2);
		}

		::System::Void SetAttachEntityPosBySelfTargetPos_1(::RPG::MVector3 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHENTITYPOSBYSELFTARGETPOS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetAttachTransByTargetPos(::RPG::MVector3 a1, ::RPG::GameCore::TransformComponent* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::GameCore::TransformComponent*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETATTACHTRANSBYTARGETPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBattleDataView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEW_OFFSET))(this, a1);
		}

		::System::Void OnBattleDataViewBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_ONBATTLEDATAVIEWBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* get_LockedFaceTarget()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_LOCKEDFACETARGET_OFFSET))(this);
		}

		::System::Void set_LockedFaceTarget(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_LOCKEDFACETARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityLodCurrentRegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_ENTITYLODCURRENTREGIONID_OFFSET))(this);
		}

		::System::Void set_EntityLodCurrentRegionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SET_ENTITYLODCURRENTREGIONID_OFFSET))(this, a1);
		}

		::System::Void TickUnityGoSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_TICKUNITYGOSYNC_OFFSET))(this);
		}

		::System::Void _TickUnityGOSync(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKUNITYGOSYNC_OFFSET))(this, a1);
		}

		::System::Void ForceSetTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ForceSetTransform_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_FORCESETTRANSFORM_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetAttachmentIndependentTransformMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_SETATTACHMENTINDEPENDENTTRANSFORMMODE_OFFSET))(this, a1);
		}

		::System::Void _TickPos(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKPOS_OFFSET))(this, a1);
		}

		::System::Void _TickYawAngleToTarget(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__TICKYAWANGLETOTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnYawAngleChanged(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONYAWANGLECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPitchAngleChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONPITCHANGLECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnRollAngleChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONROLLANGLECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshFormation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHFORMATION_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshTeamFormation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONREFRESHTEAMFORMATION_OFFSET))(this, a1);
		}

		::System::Void _UpdateSmoothPosToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__UPDATESMOOTHPOSTOTARGET_OFFSET))(this);
		}

		::System::Void _SetRootTransPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOS_OFFSET))(this, a1);
		}

		::System::Void _SetRootTransPosAndRotation(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void _SetRootTransPosAndRotationSmoothly(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSPOSANDROTATIONSMOOTHLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetRootTransRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATION_OFFSET))(this, a1);
		}

		::System::Void _SetRootTransRotationWithModelCentred(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__SETROOTTRANSROTATIONWITHMODELCENTRED_OFFSET))(this, a1);
		}

		::System::Void _OnAttachEntityVisibleChanged(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT__ONATTACHENTITYVISIBLECHANGED_OFFSET))(this, a1);
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

		::System::Single get_TargetYawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET_TARGETYAWANGLE_OFFSET))(this);
		}

		::System::Boolean get__IsYawAngleSmoothChangeStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__ISYAWANGLESMOOTHCHANGESTART_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent_ScaleSource get__WorldScaleSource()
		{
			return ((::RPG::GameCore::TransformComponent_ScaleSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_GET__WORLDSCALESOURCE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFORMCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
		}
	};
}
