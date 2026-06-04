#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectAliveState.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/EffectParamEntityUsage.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_30CF330D40A40872.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_108;
class Class_1_A53F3A238B732F34;
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRIGGEREFFECTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0xCAEEC70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_COPY_OFFSET UNITYSDK_OFFSET(0xCAEE6D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xCAEF3D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xCAEF590)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCAEF630)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCAEF510)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF550)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xCAEF610)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xCAEF490)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xCAEF470)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xCAEF3F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xCAEF410)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xCAEF4D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_MUTEXENTITY_OFFSET UNITYSDK_OFFSET(0xCAEF5B0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_REALPATH_OFFSET UNITYSDK_OFFSET(0xCAEF450)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xCAEF430)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF570)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xCAEF530)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xCAEF4F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xCAEF4B0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_HASFLAG_OFFSET UNITYSDK_OFFSET(0xCAEEE90)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETALIVESTATE_OFFSET UNITYSDK_OFFSET(0xCAEEF20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xCAEF330)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETCREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCAEF1D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETDELAYFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xCAEEBB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETEFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF290)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xCAEF0E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLED_OFFSET UNITYSDK_OFFSET(0xCAEF090)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xCAEEF70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xCAEF040)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISRELEASED_OFFSET UNITYSDK_OFFSET(0xCAEF130)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETREALPATH_OFFSET UNITYSDK_OFFSET(0xCAEF380)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xCAEEFD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF2E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETTARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xCAEF230)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETUNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xCAEF180)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xCAEF3E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xCAEF5A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCAEF620)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCAEF520)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF560)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xCAEEC00)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xCAEF4A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xCAEF480)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xCAEF400)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xCAEF420)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xCAEF4E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_REALPATH_OFFSET UNITYSDK_OFFSET(0xCAEF460)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xCAEF440)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xCAEF580)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xCAEF540)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xCAEF500)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xCAEF4C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAEF640)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__COPYRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xCAEEB20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEE660)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectParams_TypeDefinitionIndex = 65370;

	class TriggerEffectParams : public ::System::Object
	{
	public:
		static ::RPG::MVector3* StaticGet_InvalidVector3()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x4E70);
		}
		static ::System::UInt32* StaticGet_UniqueParamIDGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x4E7C);
		}
		static ::RPG::MVector3* StaticGet_InvalidScale()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x4E80);
		}
		::RPG::GameCore::GameEntity* ParamEntity; // 0x10
		::System::String* _RealPath_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_108* LittleGameEntity; // 0x20
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0x28
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* BeforeResetCompleteCallback; // 0x30
		::RPG::GameCore::OverrideMonoEffectConfig* OverrideConfig; // 0x38
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* _ReleaseCallback_k__BackingField; // 0x40
		::System::String* DynamicAttach; // 0x48
		::System::Action_1<::RPG::Client::MonoEffect*>* _EffectAsyncLoadedCallback_k__BackingField; // 0x50
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodLoadedCallback; // 0x58
		::Struct_2_30CF330D40A40872 LittleGameExtraParams; // 0x60
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x90
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodUnloadCallback; // 0x98
		::System::String* AudioSwitchName; // 0xA0
		::Class_1_A53F3A238B732F34* AdvEffectExtraParams; // 0xA8
		::RPG::GameCore::GameEntity* TargetEntity; // 0xB0
		::System::String* AudioSwitchGroup; // 0xB8
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* CompleteCallback; // 0xC0
		::RPG::Client::MockAnimator* _RecordAnimator_k__BackingField; // 0xC8
		::System::String* AdvConfigName; // 0xD0
		::RPG::GameCore::GameEntity* CasterEntity; // 0xD8
		::System::String* InitEffectState; // 0xE0
		::UnityEngine::Transform* _AttachTransform_k__BackingField; // 0xE8
		::System::String* _AttachPointName_k__BackingField; // 0xF0
		::System::String* UniqueEffectName; // 0xF8
		::System::String* TowardAttachPoint; // 0x100
		::System::String* EffectName; // 0x108
		::System::Boolean _IsReleased_k__BackingField; // 0x110
		::System::Boolean SyncPropState; // 0x111
		::System::Boolean _IsCulled_k__BackingField; // 0x112
		::System::Boolean _IsFirstLoad_k__BackingField; // 0x113
		::System::Nullable_1<::UnityEngine::Vector3> InitPosition; // 0x114
		::System::Single Delay; // 0x124
		::System::UInt32 AttachToTimelineVersion; // 0x128
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0x12C
		::System::Nullable_1<::UnityEngine::Vector3> PositionOffset; // 0x130
		::System::Boolean _DelayFirstLoad; // 0x140
		::System::Boolean _IsManualLOD_k__BackingField; // 0x141
		::System::Boolean IsForbidInitRenderCache; // 0x142
		::System::Boolean FollowCasterTimeSlow; // 0x143
		::System::Nullable_1<::UnityEngine::Vector3> AnchorPosition; // 0x144
		::System::Boolean IsForbidLod; // 0x154
		::System::Boolean IsModifierAttached; // 0x155
		::System::Boolean IsNeedFadeIn; // 0x156
		::System::Boolean ForceSimulateImmediately; // 0x157
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x158
		::System::Nullable_1<::RPG::GameCore::FixPoint> TaskTimeScale; // 0x160
		::RPG::Client::MonoEffectAliveState _AliveState_k__BackingField; // 0x170
		::System::Nullable_1<::UnityEngine::Quaternion> InitRotation; // 0x174
		::System::Nullable_1<::UnityEngine::Vector3> CustomScale; // 0x188
		::System::Boolean TowardRotatePitchOnly; // 0x198
		::System::Boolean IsForbidResetRenderCache; // 0x199
		::System::Single TowardMaxPitchAngle; // 0x19C
		::System::Single _CreateTimeStamp_k__BackingField; // 0x1A0
		::UnityEngine::Vector3 TowardTargetPosition; // 0x1A4
		::System::Boolean IsEnableReplay; // 0x1B0
		::System::Boolean IsUIEffect; // 0x1B1
		::System::Boolean _IsCulledHide_k__BackingField; // 0x1B2
		::System::Boolean IgnorePrefabAttachPoint; // 0x1B3
		::System::Boolean AttachToTimeline; // 0x1B4
		::System::Boolean _IsRealAttachToTargetEntity; // 0x1B5
		::System::Boolean EnableSimulateTimeAlign; // 0x1B6
		::System::Boolean FollowFirstFrameOnLateTick; // 0x1B7
		::System::Single _TargetEntityAnimNormalziedTime_k__BackingField; // 0x1B8
		::System::Nullable_1<::UnityEngine::Vector3> RotationOffset; // 0x1BC
		::System::UInt32 _UniqueEffectID_k__BackingField; // 0x1CC
		::System::UInt32 _UniqueParamID_k__BackingField; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS__CCTOR_OFFSET))();
		}

		::RPG::Client::TriggerEffectParams* Copy()
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_COPY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_CLEAR_OFFSET))(this);
		}

		::System::Boolean HasFlag(::RPG::GameCore::MonoEffectFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_HASFLAG_OFFSET))(this, a1);
		}

		::RPG::Client::MockAnimator* _CopyRecordAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS__COPYRECORDANIMATOR_OFFSET))(this);
		}

		::System::Void InnerSetAliveState(::RPG::Client::MonoEffectAliveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectAliveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETALIVESTATE_OFFSET))(this, a1);
		}

		::System::Void InnerSetDelayFirstLoad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETDELAYFIRSTLOAD_OFFSET))(this, a1);
		}

		::System::Void InnerSetIsFirstLoad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISFIRSTLOAD_OFFSET))(this, a1);
		}

		::System::Void InnerSetRecordAnimator(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRECORDANIMATOR_OFFSET))(this, a1);
		}

		::System::Void InnerSetIsManualLOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISMANUALLOD_OFFSET))(this, a1);
		}

		::System::Void InnerSetIsCulled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLED_OFFSET))(this, a1);
		}

		::System::Void InnerSetIsCulledHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLEDHIDE_OFFSET))(this, a1);
		}

		::System::Void InnerSetIsReleased(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISRELEASED_OFFSET))(this, a1);
		}

		::System::Void InnerSetUniqueEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETUNIQUEEFFECTID_OFFSET))(this, a1);
		}

		::System::Void InnerSetCreateTimeStamp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETCREATETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void InnerSetTargetEntityAnimNormalziedTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETTARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this, a1);
		}

		::System::Void InnerSetEffectAsyncLoadedCallback(::System::Action_1<::RPG::Client::MonoEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETEFFECTASYNCLOADEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void InnerSetReleaseCallback(::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRELEASECALLBACK_OFFSET))(this, a1);
		}

		::System::Void InnerSetAttachPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETATTACHPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void InnerSetRealPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETREALPATH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectAliveState get_AliveState()
		{
			return ((::RPG::Client::MonoEffectAliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ALIVESTATE_OFFSET))(this);
		}

		::System::Void set_AliveState(::RPG::Client::MonoEffectAliveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectAliveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ALIVESTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISFIRSTLOAD_OFFSET))(this);
		}

		::System::Void set_IsFirstLoad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISFIRSTLOAD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsManualLOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISMANUALLOD_OFFSET))(this);
		}

		::System::Void set_IsManualLOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISMANUALLOD_OFFSET))(this, a1);
		}

		::RPG::Client::MockAnimator* get_RecordAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RECORDANIMATOR_OFFSET))(this);
		}

		::System::Void set_RecordAnimator(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RECORDANIMATOR_OFFSET))(this, a1);
		}

		::System::String* get_RealPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_REALPATH_OFFSET))(this);
		}

		::System::Void set_RealPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_REALPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLED_OFFSET))(this);
		}

		::System::Void set_IsCulled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCulledHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLEDHIDE_OFFSET))(this);
		}

		::System::Void set_IsCulledHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLEDHIDE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueParamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEPARAMID_OFFSET))(this);
		}

		::System::Void set_UniqueParamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEPARAMID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Void set_IsReleased(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISRELEASED_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEEFFECTID_OFFSET))(this);
		}

		::System::Void set_UniqueEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEEFFECTID_OFFSET))(this, a1);
		}

		::System::Single get_CreateTimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_CREATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreateTimeStamp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_CREATETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Single get_TargetEntityAnimNormalziedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this);
		}

		::System::Void set_TargetEntityAnimNormalziedTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this, a1);
		}

		::System::Action_1<::RPG::Client::MonoEffect*>* get_EffectAsyncLoadedCallback()
		{
			return ((::System::Action_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_EFFECTASYNCLOADEDCALLBACK_OFFSET))(this);
		}

		::System::Void set_EffectAsyncLoadedCallback(::System::Action_1<::RPG::Client::MonoEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_EFFECTASYNCLOADEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* get_ReleaseCallback()
		{
			return ((::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RELEASECALLBACK_OFFSET))(this);
		}

		::System::Void set_ReleaseCallback(::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RELEASECALLBACK_OFFSET))(this, a1);
		}

		::System::String* get_AttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHPOINTNAME_OFFSET))(this);
		}

		::System::Void set_AttachPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHPOINTNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_MutexEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_MUTEXENTITY_OFFSET))(this);
		}

		::System::Void set_IsAttachToTargetEntity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISATTACHTOTARGETENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttachToTargetEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISATTACHTOTARGETENTITY_OFFSET))(this);
		}

		::System::Void set_AttachTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_AttachTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHTRANSFORM_OFFSET))(this);
		}
	};
}
