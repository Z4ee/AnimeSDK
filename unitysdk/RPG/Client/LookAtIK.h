#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/RPG/Client/LookAtTiltData.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_292;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class LookAtAdditiveCurve; }
namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_APPLYCONSTRAINTONUPDATE_OFFSET UNITYSDK_OFFSET(0x9A635D0)
#define RPG_CLIENT_LOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A5FC50)
#define RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0x9A5F0B0)
#define RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0x9A5F9B0)
#define RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET UNITYSDK_OFFSET(0x9A623E0)
#define RPG_CLIENT_LOOKATIK_GETHEADFORWARDPOSITION_OFFSET UNITYSDK_OFFSET(0x9A60D80)
#define RPG_CLIENT_LOOKATIK_GETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x9A60AB0)
#define RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0x9A5EDA0)
#define RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9A5EFA0)
#define RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET UNITYSDK_OFFSET(0x9A5F810)
#define RPG_CLIENT_LOOKATIK_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x9A5F7F0)
#define RPG_CLIENT_LOOKATIK_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9A67A80)
#define RPG_CLIENT_LOOKATIK_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9A679F0)
#define RPG_CLIENT_LOOKATIK_GET_ISFORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x9A63540)
#define RPG_CLIENT_LOOKATIK_GET_ISFULLWEIGHT_OFFSET UNITYSDK_OFFSET(0x9A67B20)
#define RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0x9A67D40)
#define RPG_CLIENT_LOOKATIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x9A60FE0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEBLEND_OFFSET UNITYSDK_OFFSET(0x9A67CA0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEENABLED_OFFSET UNITYSDK_OFFSET(0x9A67C80)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEWEIGHT_OFFSET UNITYSDK_OFFSET(0x9A67CC0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATDISABLECAUSE_OFFSET UNITYSDK_OFFSET(0x9A67B70)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATIKROTATION_OFFSET UNITYSDK_OFFSET(0x9A67BC0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x9A67C60)
#define RPG_CLIENT_LOOKATIK_GET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x9A67D20)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0x9A5F690)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x9A5F6F0)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATSPEED_OFFSET UNITYSDK_OFFSET(0x9A5F750)
#define RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET UNITYSDK_OFFSET(0x9A62E10)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET UNITYSDK_OFFSET(0x9A630E0)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET UNITYSDK_OFFSET(0x9A62F40)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x9A62BD0)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET UNITYSDK_OFFSET(0x9A629F0)
#define RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET UNITYSDK_OFFSET(0x9A62E90)
#define RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET UNITYSDK_OFFSET(0x9A62240)
#define RPG_CLIENT_LOOKATIK_ISNEARLYLOOKAT_OFFSET UNITYSDK_OFFSET(0x9A606A0)
#define RPG_CLIENT_LOOKATIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A5FDE0)
#define RPG_CLIENT_LOOKATIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A5FFB0)
#define RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x9A63620)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0x9A63310)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x9A632B0)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET UNITYSDK_OFFSET(0x9A63250)
#define RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x9A5FEF0)
#define RPG_CLIENT_LOOKATIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x9A5FF50)
#define RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x9A5FCA0)
#define RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0x9A633E0)
#define RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0x9A63370)
#define RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0x9A67D50)
#define RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x9A67C70)
#define RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0x9A67D30)
#define RPG_CLIENT_LOOKATIK_USEQUICKLYSLERPSPEED_OFFSET UNITYSDK_OFFSET(0x9A63580)
#define RPG_CLIENT_LOOKATIK__CTOR_OFFSET UNITYSDK_OFFSET(0x9A67D60)
#define RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET UNITYSDK_OFFSET(0x9A63E90)
#define RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET UNITYSDK_OFFSET(0x9A61160)
#define RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET UNITYSDK_OFFSET(0x9A614E0)
#define RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A60210)
#define RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x9A62B50)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_TypeDefinitionIndex = 55899;

	class LookAtIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FadeInTime; // 0x18
		::System::Single FadeOutTime; // 0x1C
		::System::Single Speed; // 0x20
		::System::Single StopSpeed; // 0x24
		::System::Single UpDownFilterIntensity; // 0x28
		::System::Single LeftRightFilterIntensity; // 0x2C
		::RPG::Client::LookAtSolver* LookAtSolver; // 0x30
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0x38
		::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x40
		::System::Boolean StopLookAtIkUpdate; // 0x48
		::System::Action* OnIKLateUpdated; // 0x50
		::UnityChan::SpringManager* _SpringManager_k__BackingField; // 0x58
		::System::Single MinSpringHairAngle; // 0x60
		::System::Single OverrideMinSpringHairAngle; // 0x64
		::System::Boolean _IsInTurnInPlaceAnim_k__BackingField; // 0x68
		::RPG::Client::LookAtTargetData _LookAtData; // 0x70
		::RPG::Client::LookAtAdditiveCurve* _LookAtAdditiveCurve; // 0xF8
		::RPG::Client::LookAtTiltData _TiltData; // 0x100
		::UnityEngine::Vector3 _PrevTracePos; // 0x148
		::System::Single _OverrideLookAtSpeed; // 0x154
		::System::Single _OverrideLookAtFadeInTime; // 0x158
		::System::Single _OverrideLookAtFadeOutTime; // 0x15C
		::UnityEngine::Vector3 _LastModelPos; // 0x160
		::UnityEngine::Quaternion _LastModelRot; // 0x16C
		::System::Boolean _IsModelMoved; // 0x17C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPerformanceRuntimeCache(::System::String*& key, ::Class_0_16E4307DCC419505_292*& cache)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::Class_0_16E4307DCC419505_292*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET))(this, key, cache);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET))(this, transforms);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* context, ::Struct_2_1E36AD6D9A5F486C& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_1E36AD6D9A5F486C&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET))(this, context, data);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* context, ::Struct_2_1E36AD6D9A5F486C& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_1E36AD6D9A5F486C&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET))(this, context, data);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* mapping)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET))(this, mapping);
		}

		::System::Boolean IsNearlyLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ISNEARLYLOOKAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLookAtPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETLOOKATPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetHeadForwardPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETHEADFORWARDPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET))(this, deltaTime);
		}

		::System::Boolean Process(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PROCESS_OFFSET))(this, deltaTime);
		}

		::System::Void HeadStopLookAt(::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET))(this, immediately);
		}

		::System::Void ForceLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET))(this);
		}

		::System::Void HeadLookAt(::UnityEngine::Vector3 targetPosition, ::System::Boolean bForceChangeTarget, ::RPG::GameCore::CharacterHeadConstraint* overrideConstraint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET))(this, targetPosition, bForceChangeTarget, overrideConstraint);
		}

		::System::Void HeadLookAt_1(::UnityEngine::Transform* targetTransform, ::System::Boolean bTraceTarget, ::System::Boolean bForceChangeTarget, ::RPG::GameCore::CharacterHeadConstraint* overrideConstraint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET))(this, targetTransform, bTraceTarget, bForceChangeTarget, overrideConstraint);
		}

		::System::Void HeadAddLookAtCurve(::UnityEngine::AnimationCurve* curve, ::RPG::Client::LookAtAdditiveCurveConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::RPG::Client::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET))(this, curve, constraint);
		}

		::System::Void HeadRemoveLookAtCurve(::System::Single blendOutTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET))(this, blendOutTime);
		}

		::System::Void HeadLookAtTilt(::System::Single tiltAngle, ::System::Single overrideBlendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET))(this, tiltAngle, overrideBlendTime);
		}

		::System::Void HeadLookAtTiltByCurve(::System::Single tiltAngle, ::UnityEngine::AnimationCurve* curve, ::System::Single overrideBlendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET))(this, tiltAngle, curve, overrideBlendTime);
		}

		::System::Void OverrideLookAtSpeed(::System::Single fSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET))(this, fSpeed);
		}

		::System::Void OverrideLookAtFadeOutTime(::System::Single fFadeOutTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET))(this, fFadeOutTime);
		}

		::System::Void OverrideLookAtFadeInTime(::System::Single fFadeOutTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET))(this, fFadeOutTime);
		}

		::System::Void SetupCurveBlender(::System::Single fBlendDuration, ::UnityEngine::AnimationCurve* pCurve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET))(this, fBlendDuration, pCurve);
		}

		::System::Void SetDisableWithCause(::RPG::Client::LookAtDisableCause cause, ::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET))(this, cause, disabled);
		}

		::System::Boolean get_IsForceChangeTargetThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISFORCECHANGETARGETTHISFRAME_OFFSET))(this);
		}

		::System::Void UseQuicklySlerpSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_USEQUICKLYSLERPSPEED_OFFSET))(this);
		}

		::System::Void ApplyConstraintOnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_APPLYCONSTRAINTONUPDATE_OFFSET))(this);
		}

		::System::Void OnLookAtTargetMoveByPlatform(::UnityEngine::Vector3 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET))(this, deltaPos);
		}

		::System::Void _Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET))(this);
		}

		::System::Void _IKPreUpdate(::System::Single fElapsedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET))(this, fElapsedTime);
		}

		::System::Boolean _IKUpdate(::System::Single fElapsedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET))(this, fElapsedTime);
		}

		::System::Void _InternalSetLookAtTarget(::UnityEngine::Vector3 vTarget, ::System::Boolean bForceSetTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET))(this, vTarget, bForceSetTarget);
		}

		::UnityEngine::Vector3 _FilterLookAtTracingTarget(::UnityEngine::Vector3 vTracingTarget, ::System::Single fElapsedTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET))(this, vTracingTarget, fElapsedTime);
		}

		::UnityEngine::Transform* get_Head()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_HEAD_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsFullWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISFULLWEIGHT_OFFSET))(this);
		}

		::RPG::Client::LookAtDisableCause get_LookAtDisableCause()
		{
			return ((::RPG::Client::LookAtDisableCause(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATDISABLECAUSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LookAtIKRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATIKROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_LookAtAdditiveCurveEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEENABLED_OFFSET))(this);
		}

		::System::Single get_LookAtAdditiveCurveBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEBLEND_OFFSET))(this);
		}

		::System::Single get_LookAtAdditiveCurveWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEWEIGHT_OFFSET))(this);
		}

		::UnityChan::SpringManager* get_SpringManager()
		{
			return ((::UnityChan::SpringManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_SPRINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SpringManager(::UnityChan::SpringManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET))(this, value);
		}

		::System::Single get_CurrentMinSpringHairAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET))(this);
		}

		::System::Boolean get_IsInTurnInPlaceAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET))(this);
		}

		::System::Void set_IsInTurnInPlaceAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET))(this, value);
		}

		::System::Single get__CurrentLookAtSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATSPEED_OFFSET))(this);
		}

		::System::Single get__CurrentLookAtFadeInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEINTIME_OFFSET))(this);
		}

		::System::Single get__CurrentLookAtFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEOUTTIME_OFFSET))(this);
		}
	};
}
