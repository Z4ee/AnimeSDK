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
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRIGGEREFFECTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0xB3919E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_COPY_OFFSET UNITYSDK_OFFSET(0xB391450)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xB392140)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB392300)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB3923A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB392280)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3922C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xB392380)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xB392200)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xB3921E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xB392160)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xB392180)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xB392240)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_MUTEXENTITY_OFFSET UNITYSDK_OFFSET(0xB392320)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_REALPATH_OFFSET UNITYSDK_OFFSET(0xB3921C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xB3921A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3922E0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xB3922A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xB392260)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_GET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xB392220)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_HASFLAG_OFFSET UNITYSDK_OFFSET(0xB391C00)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETALIVESTATE_OFFSET UNITYSDK_OFFSET(0xB391C90)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB3920A0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETCREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB391F40)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETDELAYFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xB391920)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETEFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB392000)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xB391E50)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISCULLED_OFFSET UNITYSDK_OFFSET(0xB391E00)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xB391CE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xB391DB0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETISRELEASED_OFFSET UNITYSDK_OFFSET(0xB391EA0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETREALPATH_OFFSET UNITYSDK_OFFSET(0xB3920F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xB391D40)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETRELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xB392050)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETTARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xB391FA0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_INNERSETUNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xB391EF0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0xB392150)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB392310)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB392390)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB392290)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_EFFECTASYNCLOADEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3922D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xB391970)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLEDHIDE_OFFSET UNITYSDK_OFFSET(0xB392210)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xB3921F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISFIRSTLOAD_OFFSET UNITYSDK_OFFSET(0xB392170)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISMANUALLOD_OFFSET UNITYSDK_OFFSET(0xB392190)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xB392250)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_REALPATH_OFFSET UNITYSDK_OFFSET(0xB3921D0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xB3921B0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_RELEASECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3922F0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_TARGETENTITYANIMNORMALZIEDTIME_OFFSET UNITYSDK_OFFSET(0xB3922B0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xB392270)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS_SET_UNIQUEPARAMID_OFFSET UNITYSDK_OFFSET(0xB392230)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3923B0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__COPYRECORDANIMATOR_OFFSET UNITYSDK_OFFSET(0xB391890)
#define RPG_CLIENT_TRIGGEREFFECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3913E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectParams_TypeDefinitionIndex = 64449;

	class TriggerEffectParams : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_UniqueParamIDGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x2AC0);
		}
		static ::RPG::MVector3* StaticGet_InvalidScale()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x2AC4);
		}
		static ::RPG::MVector3* StaticGet_InvalidVector3()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(TriggerEffectParams_TypeDefinitionIndex)->GetStaticField(0x2AD0);
		}
		::System::Action_1<::RPG::Client::MonoEffect*>* _EffectAsyncLoadedCallback_k__BackingField; // 0x10
		::RPG::GameCore::OverrideMonoEffectConfig* OverrideConfig; // 0x18
		::System::String* AdvConfigName; // 0x20
		::System::String* EffectName; // 0x28
		::RPG::GameCore::GameEntity* TargetEntity; // 0x30
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodUnloadCallback; // 0x38
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x40
		::System::String* _AttachPointName_k__BackingField; // 0x48
		::System::String* DynamicAttach; // 0x50
		::UnityEngine::Transform* _AttachTransform_k__BackingField; // 0x58
		::System::String* InitEffectState; // 0x60
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* CompleteCallback; // 0x68
		::Class_1_A53F3A238B732F34* AdvEffectExtraParams; // 0x70
		::RPG::GameCore::GameEntity* ParamEntity; // 0x78
		::System::String* UniqueEffectName; // 0x80
		::RPG::Client::MockAnimator* _RecordAnimator_k__BackingField; // 0x88
		::System::String* TowardAttachPoint; // 0x90
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0x98
		::Struct_2_04B793AC4236949F LittleGameExtraParams; // 0xA0
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* LodLoadedCallback; // 0xC0
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* BeforeResetCompleteCallback; // 0xC8
		::RPG::GameCore::GameEntity* CasterEntity; // 0xD0
		::Class_0_16E4307DCC419505_109* LittleGameEntity; // 0xD8
		::System::String* AudioSwitchName; // 0xE0
		::System::String* AudioSwitchGroup; // 0xE8
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* _ReleaseCallback_k__BackingField; // 0xF0
		::System::String* _RealPath_k__BackingField; // 0xF8
		::System::Single _CreateTimeStamp_k__BackingField; // 0x100
		::System::UInt32 _UniqueParamID_k__BackingField; // 0x104
		::System::UInt32 AttachToTimelineVersion; // 0x108
		::System::Nullable_1<::RPG::GameCore::FixPoint> TaskTimeScale; // 0x110
		::System::Nullable_1<::UnityEngine::Vector3> PositionOffset; // 0x120
		::System::Boolean IsEnableReplay; // 0x130
		::System::Boolean FollowCasterTimeSlow; // 0x131
		::System::Boolean AttachToTimeline; // 0x132
		::System::Boolean _IsFirstLoad_k__BackingField; // 0x133
		::UnityEngine::Vector3 TowardTargetPosition; // 0x134
		::System::Boolean _IsCulledHide_k__BackingField; // 0x140
		::System::Boolean _IsCulled_k__BackingField; // 0x141
		::System::Boolean IsModifierAttached; // 0x142
		::System::Boolean IgnorePrefabAttachPoint; // 0x143
		::System::Boolean TowardRotatePitchOnly; // 0x144
		::System::Boolean _DelayFirstLoad; // 0x145
		::System::Boolean IsForbidLod; // 0x146
		::System::Boolean _IsManualLOD_k__BackingField; // 0x147
		::RPG::Client::MonoEffectAliveState _AliveState_k__BackingField; // 0x148
		::System::Single _TargetEntityAnimNormalziedTime_k__BackingField; // 0x14C
		::System::Nullable_1<::UnityEngine::Vector3> InitPosition; // 0x150
		::System::Boolean IsNeedFadeIn; // 0x160
		::System::Boolean FollowFirstFrameOnLateTick; // 0x161
		::System::Boolean IsForbidInitRenderCache; // 0x162
		::System::Boolean _IsReleased_k__BackingField; // 0x163
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0x164
		::System::Nullable_1<::UnityEngine::Quaternion> InitRotation; // 0x168
		::System::Nullable_1<::UnityEngine::Vector3> CustomScale; // 0x17C
		::System::Nullable_1<::UnityEngine::Vector3> AnchorPosition; // 0x18C
		::System::Single TowardMaxPitchAngle; // 0x19C
		::System::Single Delay; // 0x1A0
		::System::UInt32 _UniqueEffectID_k__BackingField; // 0x1A4
		::System::Boolean ForceSimulateImmediately; // 0x1A8
		::System::Boolean IsUIEffect; // 0x1A9
		::System::Boolean EnableSimulateTimeAlign; // 0x1AA
		::System::Boolean IsForbidResetRenderCache; // 0x1AB
		::System::Boolean _IsRealAttachToTargetEntity; // 0x1AC
		::System::Boolean SyncPropState; // 0x1AD
		::System::Nullable_1<::UnityEngine::Vector3> RotationOffset; // 0x1B0
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x1C0

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
