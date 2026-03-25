#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectAliveState.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/EffectParamEntityUsage.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_04B793AC4236949F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_109;
class Class_1_A53F3A238B732F34;
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRIGGEREFFECTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0xA63A630)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_COPY_OFFSET UNITYSDK_OFFSET(0xA63A090)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xA63AD70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xA63AF30)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA63AFD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA63AEB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AEF0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA63AFB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xA63AE30)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xA63AE10)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xA63AD90)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xA63ADB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xA63AE70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_MUTEXENTITY_OFFSET UNITYSDK_OFFSET(0xA63AF50)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_REALPATH_OFFSET UNITYSDK_OFFSET(0xA63ADF0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xA63ADD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AF10)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xA63AED0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA63AE90)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xA63AE50)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_HASFLAG_OFFSET UNITYSDK_OFFSET(0xA63A830)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETALIVESTATE_OFFSET UNITYSDK_OFFSET(0xA63A8C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xA63ACD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETCREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA63AB70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETDELAYFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xA63A570)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETEFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AC30)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xA63AA80)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLED_OFFSET UNITYSDK_OFFSET(0xA63AA30)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xA63A910)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xA63A9E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISRELEASED_OFFSET UNITYSDK_OFFSET(0xA63AAD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETREALPATH_OFFSET UNITYSDK_OFFSET(0xA63AD20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xA63A970)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AC80)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETTARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xA63ABD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETUNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA63AB20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xA63AD80)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xA63AF40)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA63AFC0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA63AEC0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AF00)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA63A5C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xA63AE40)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xA63AE20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xA63ADA0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xA63ADC0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xA63AE80)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_REALPATH_OFFSET UNITYSDK_OFFSET(0xA63AE00)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xA63ADE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xA63AF20)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xA63AEE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA63AEA0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xA63AE60)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA63AFE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__COPYRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xA63A4E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xA63A020)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectParams_TypeDefinitionIndex = 57196;

	class TriggerEffectParams : public ::System::Object
	{
	public:
		static ::RPG::MVector3* StaticGet_InvalidScale()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x9E00);
		}
		static ::RPG::MVector3* StaticGet_InvalidVector3()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x9E0C);
		}
		static ::System::UInt32* StaticGet_UniqueParamIDGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x9E18);
		}
		::System::String* TowardAttachPoint; // 0x10
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x18
		::System::String* _RealPath_k__BackingField; // 0x20
		::System::String* _AttachPointName_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0x30
		::System::String* InitEffectState; // 0x38
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodUnloadCallback; // 0x40
		::RPG::GameCore::GameEntity* CasterEntity; // 0x48
		::RPG::GameCore::GameEntity* ParamEntity; // 0x50
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* BeforeResetCompleteCallback; // 0x58
		::System::String* EffectName; // 0x60
		::System::String* AudioSwitchName; // 0x68
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodLoadedCallback; // 0x70
		::System::String* UniqueEffectName; // 0x78
		::System::String* AudioSwitchGroup; // 0x80
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* _ReleaseCallback_k__BackingField; // 0x88
		::System::String* DynamicAttach; // 0x90
		::RPG::Client::MockAnimator* _RecordAnimator_k__BackingField; // 0x98
		::Class_1_A53F3A238B732F34* AdvEffectExtraParams; // 0xA0
		::System::Action_1<::RPG::Client::MonoEffect*>* _EffectAsyncLoadedCallback_k__BackingField; // 0xA8
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* CompleteCallback; // 0xB0
		::System::String* AdvConfigName; // 0xB8
		::UnityEngine::Transform* _AttachTransform_k__BackingField; // 0xC0
		::RPG::GameCore::GameEntity* TargetEntity; // 0xC8
		::Class_0_16E4307DCC419505_109* LittleGameEntity; // 0xD0
		::Struct_2_04B793AC4236949F LittleGameExtraParams; // 0xD8
		::System::Single _TargetEntityAnimNormalziedTime_k__BackingField; // 0xF8
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0xFC
		::System::Boolean IsEnableReplay; // 0x100
		::System::Boolean IsUIEffect; // 0x101
		::System::Boolean IsForbidResetRenderCache; // 0x102
		::System::Boolean IsNeedFadeIn; // 0x103
		::System::Single _CreateTimeStamp_k__BackingField; // 0x104
		::System::Nullable_1<::UnityEngine::Vector3> InitPosition; // 0x108
		::RPG::Client::MonoEffectAliveState _AliveState_k__BackingField; // 0x118
		::System::UInt32 _UniqueEffectID_k__BackingField; // 0x11C
		::System::Nullable_1<::UnityEngine::Vector3> AnchorPosition; // 0x120
		::System::Nullable_1<::UnityEngine::Quaternion> InitRotation; // 0x130
		::System::UInt32 AttachToTimelineVersion; // 0x144
		::UnityEngine::Vector3 TowardTargetPosition; // 0x148
		::System::Boolean FollowFirstFrameOnLateTick; // 0x154
		::System::Boolean _IsCulled_k__BackingField; // 0x155
		::System::Boolean TowardRotatePitchOnly; // 0x156
		::System::Boolean _IsManualLOD_k__BackingField; // 0x157
		::System::Boolean IsModifierAttached; // 0x158
		::System::Boolean FollowCasterTimeSlow; // 0x159
		::System::Boolean IgnorePrefabAttachPoint; // 0x15A
		::System::Boolean SyncPropState; // 0x15B
		::System::Boolean IsForbidLod; // 0x15C
		::System::Boolean _IsRealAttachToTargetEntity; // 0x15D
		::System::UInt32 _UniqueParamID_k__BackingField; // 0x160
		::System::Boolean EnableSimulateTimeAlign; // 0x164
		::System::Boolean _IsCulledHide_k__BackingField; // 0x165
		::System::Boolean _IsReleased_k__BackingField; // 0x166
		::System::Boolean ForceSimulateImmediately; // 0x167
		::System::Boolean AttachToTimeline; // 0x168
		::System::Boolean _IsFirstLoad_k__BackingField; // 0x169
		::System::Boolean IsForbidInitRenderCache; // 0x16A
		::System::Boolean _DelayFirstLoad; // 0x16B
		::System::Nullable_1<::UnityEngine::Vector3> RotationOffset; // 0x16C
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0x17C
		::System::Nullable_1<::RPG::GameCore::FixPoint> TaskTimeScale; // 0x180
		::System::Nullable_1<::UnityEngine::Vector3> PositionOffset; // 0x190
		::System::Single Delay; // 0x1A0
		::System::Nullable_1<::UnityEngine::Vector3> CustomScale; // 0x1A4
		::System::Single TowardMaxPitchAngle; // 0x1B4

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

		::System::Boolean HasFlag(::RPG::GameCore::MonoEffectFlag flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_HASFLAG_OFFSET))(this, flag);
		}

		::RPG::Client::MockAnimator* _CopyRecordAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS__COPYRECORDANIMATOR_OFFSET))(this);
		}

		::System::Void InnerSetAliveState(::RPG::Client::MonoEffectAliveState val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectAliveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETALIVESTATE_OFFSET))(this, val);
		}

		::System::Void InnerSetDelayFirstLoad(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETDELAYFIRSTLOAD_OFFSET))(this, val);
		}

		::System::Void InnerSetIsFirstLoad(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISFIRSTLOAD_OFFSET))(this, val);
		}

		::System::Void InnerSetRecordAnimator(::RPG::Client::MockAnimator* recordAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRECORDANIMATOR_OFFSET))(this, recordAnimator);
		}

		::System::Void InnerSetIsManualLOD(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISMANUALLOD_OFFSET))(this, val);
		}

		::System::Void InnerSetIsCulled(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLED_OFFSET))(this, val);
		}

		::System::Void InnerSetIsCulledHide(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLEDHIDE_OFFSET))(this, val);
		}

		::System::Void InnerSetIsReleased(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISRELEASED_OFFSET))(this, val);
		}

		::System::Void InnerSetUniqueEffectID(::System::UInt32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETUNIQUEEFFECTID_OFFSET))(this, val);
		}

		::System::Void InnerSetCreateTimeStamp(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETCREATETIMESTAMP_OFFSET))(this, val);
		}

		::System::Void InnerSetTargetEntityAnimNormalziedTime(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETTARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this, val);
		}

		::System::Void InnerSetEffectAsyncLoadedCallback(::System::Action_1<::RPG::Client::MonoEffect*>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETEFFECTASYNCLOADEDCALLBACK_OFFSET))(this, val);
		}

		::System::Void InnerSetReleaseCallback(::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRELEASECALLBACK_OFFSET))(this, val);
		}

		::System::Void InnerSetAttachPointName(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETATTACHPOINTNAME_OFFSET))(this, val);
		}

		::System::Void InnerSetRealPath(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETREALPATH_OFFSET))(this, val);
		}

		::RPG::Client::MonoEffectAliveState get_AliveState()
		{
			return ((::RPG::Client::MonoEffectAliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ALIVESTATE_OFFSET))(this);
		}

		::System::Void set_AliveState(::RPG::Client::MonoEffectAliveState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectAliveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ALIVESTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISFIRSTLOAD_OFFSET))(this);
		}

		::System::Void set_IsFirstLoad(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISFIRSTLOAD_OFFSET))(this, value);
		}

		::System::Boolean get_IsManualLOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISMANUALLOD_OFFSET))(this);
		}

		::System::Void set_IsManualLOD(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISMANUALLOD_OFFSET))(this, value);
		}

		::RPG::Client::MockAnimator* get_RecordAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RECORDANIMATOR_OFFSET))(this);
		}

		::System::Void set_RecordAnimator(::RPG::Client::MockAnimator* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RECORDANIMATOR_OFFSET))(this, value);
		}

		::System::String* get_RealPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_REALPATH_OFFSET))(this);
		}

		::System::Void set_RealPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_REALPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLED_OFFSET))(this);
		}

		::System::Void set_IsCulled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCulledHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLEDHIDE_OFFSET))(this);
		}

		::System::Void set_IsCulledHide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLEDHIDE_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueParamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEPARAMID_OFFSET))(this);
		}

		::System::Void set_UniqueParamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEPARAMID_OFFSET))(this, value);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Void set_IsReleased(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISRELEASED_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEEFFECTID_OFFSET))(this);
		}

		::System::Void set_UniqueEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEEFFECTID_OFFSET))(this, value);
		}

		::System::Single get_CreateTimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_CREATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreateTimeStamp(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_CREATETIMESTAMP_OFFSET))(this, value);
		}

		::System::Single get_TargetEntityAnimNormalziedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this);
		}

		::System::Void set_TargetEntityAnimNormalziedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET))(this, value);
		}

		::System::Action_1<::RPG::Client::MonoEffect*>* get_EffectAsyncLoadedCallback()
		{
			return ((::System::Action_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_EFFECTASYNCLOADEDCALLBACK_OFFSET))(this);
		}

		::System::Void set_EffectAsyncLoadedCallback(::System::Action_1<::RPG::Client::MonoEffect*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_EFFECTASYNCLOADEDCALLBACK_OFFSET))(this, value);
		}

		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* get_ReleaseCallback()
		{
			return ((::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RELEASECALLBACK_OFFSET))(this);
		}

		::System::Void set_ReleaseCallback(::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RELEASECALLBACK_OFFSET))(this, value);
		}

		::System::String* get_AttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHPOINTNAME_OFFSET))(this);
		}

		::System::Void set_AttachPointName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHPOINTNAME_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_MutexEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_MUTEXENTITY_OFFSET))(this);
		}

		::System::Void set_IsAttachToTargetEntity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISATTACHTOTARGETENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsAttachToTargetEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISATTACHTOTARGETENTITY_OFFSET))(this);
		}

		::System::Void set_AttachTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_AttachTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHTRANSFORM_OFFSET))(this);
		}
	};
}
