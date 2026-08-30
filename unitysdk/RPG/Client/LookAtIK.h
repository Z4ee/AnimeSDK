#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/RPG/Client/LookAtTiltData.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_356;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class LookAtAdditiveCurve; }
namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::GameCore { class CharacterHeadConstraint; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_APPLYCONSTRAINTONUPDATE_OFFSET UNITYSDK_OFFSET(0xD57DAE0)
#define RPG_CLIENT_LOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD57A0F0)
#define RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xD5795A0)
#define RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0xD579E60)
#define RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET UNITYSDK_OFFSET(0xD57C8F0)
#define RPG_CLIENT_LOOKATIK_GETHEADFORWARDPOSITION_OFFSET UNITYSDK_OFFSET(0xD57B1F0)
#define RPG_CLIENT_LOOKATIK_GETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xD57AF20)
#define RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0xD5791B0)
#define RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xD579390)
#define RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET UNITYSDK_OFFSET(0xD579CC0)
#define RPG_CLIENT_LOOKATIK_GET_HEAD_OFFSET UNITYSDK_OFFSET(0xD579CA0)
#define RPG_CLIENT_LOOKATIK_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD582180)
#define RPG_CLIENT_LOOKATIK_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xD5820F0)
#define RPG_CLIENT_LOOKATIK_GET_ISFORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0xD57DA50)
#define RPG_CLIENT_LOOKATIK_GET_ISFULLWEIGHT_OFFSET UNITYSDK_OFFSET(0xD582220)
#define RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0xD582440)
#define RPG_CLIENT_LOOKATIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xD57B450)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEBLEND_OFFSET UNITYSDK_OFFSET(0xD5823A0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEENABLED_OFFSET UNITYSDK_OFFSET(0xD582380)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATADDITIVECURVEWEIGHT_OFFSET UNITYSDK_OFFSET(0xD5823C0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATDISABLECAUSE_OFFSET UNITYSDK_OFFSET(0xD582270)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATIKROTATION_OFFSET UNITYSDK_OFFSET(0xD5822C0)
#define RPG_CLIENT_LOOKATIK_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD582360)
#define RPG_CLIENT_LOOKATIK_GET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0xD582420)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0xD579B40)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0xD579BA0)
#define RPG_CLIENT_LOOKATIK_GET__CURRENTLOOKATSPEED_OFFSET UNITYSDK_OFFSET(0xD579C00)
#define RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET UNITYSDK_OFFSET(0xD57D320)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET UNITYSDK_OFFSET(0xD57D5F0)
#define RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET UNITYSDK_OFFSET(0xD57D450)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET UNITYSDK_OFFSET(0xD57D0E0)
#define RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET UNITYSDK_OFFSET(0xD57CF00)
#define RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET UNITYSDK_OFFSET(0xD57D3A0)
#define RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET UNITYSDK_OFFSET(0xD57C750)
#define RPG_CLIENT_LOOKATIK_ISNEARLYLOOKAT_OFFSET UNITYSDK_OFFSET(0xD57AB10)
#define RPG_CLIENT_LOOKATIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD57A280)
#define RPG_CLIENT_LOOKATIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD57A460)
#define RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET UNITYSDK_OFFSET(0xD57DB30)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET UNITYSDK_OFFSET(0xD57D820)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0xD57D7C0)
#define RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET UNITYSDK_OFFSET(0xD57D760)
#define RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xD57A3A0)
#define RPG_CLIENT_LOOKATIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xD57A400)
#define RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xD57A140)
#define RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0xD57D8F0)
#define RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0xD57D880)
#define RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET UNITYSDK_OFFSET(0xD582450)
#define RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD582370)
#define RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET UNITYSDK_OFFSET(0xD582430)
#define RPG_CLIENT_LOOKATIK_USEQUICKLYSLERPSPEED_OFFSET UNITYSDK_OFFSET(0xD57DA90)
#define RPG_CLIENT_LOOKATIK__CTOR_OFFSET UNITYSDK_OFFSET(0xD582460)
#define RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET UNITYSDK_OFFSET(0xD57E480)
#define RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET UNITYSDK_OFFSET(0xD57B5D0)
#define RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET UNITYSDK_OFFSET(0xD57B950)
#define RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD57A680)
#define RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD57D060)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_TypeDefinitionIndex = 68435;

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
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* ExternalTraceTargetPositionModified; // 0x58
		::UnityChan::SpringManager* _SpringManager_k__BackingField; // 0x60
		::System::Single MinSpringHairAngle; // 0x68
		::System::Single OverrideMinSpringHairAngle; // 0x6C
		::System::Boolean _IsInTurnInPlaceAnim_k__BackingField; // 0x70
		::RPG::Client::LookAtTargetData _LookAtData; // 0x78
		::RPG::Client::LookAtAdditiveCurve* _LookAtAdditiveCurve; // 0x100
		::RPG::Client::LookAtTiltData _TiltData; // 0x108
		::UnityEngine::Vector3 _PrevTracePos; // 0x150
		::System::Single _OverrideLookAtSpeed; // 0x15C
		::System::Single _OverrideLookAtFadeInTime; // 0x160
		::System::Single _OverrideLookAtFadeOutTime; // 0x164
		::UnityEngine::Vector3 _LastModelPos; // 0x168
		::UnityEngine::Quaternion _LastModelRot; // 0x174
		::System::Boolean _IsModelMoved; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPerformanceRuntimeCache(::System::String*& a1, ::Class_0_16E4307DCC419505_356*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::Class_0_16E4307DCC419505_356*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETPERFORMANCERUNTIMECACHE_OFFSET))(this, a1, a2);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_1E36AD6D9A5F486C& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_1E36AD6D9A5F486C&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_1E36AD6D9A5F486C& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_1E36AD6D9A5F486C&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FLUSHTHREADDATA_OFFSET))(this, a1, a2);
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

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SAFEINIT_OFFSET))(this, a1);
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

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void HeadStopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADSTOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void ForceLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_FORCELOOKAT_OFFSET))(this);
		}

		::System::Void HeadLookAt(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::RPG::GameCore::CharacterHeadConstraint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HeadLookAt_1(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::GameCore::CharacterHeadConstraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKAT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HeadAddLookAtCurve(::UnityEngine::AnimationCurve* a1, ::RPG::Client::LookAtAdditiveCurveConstraint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::RPG::Client::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADADDLOOKATCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void HeadRemoveLookAtCurve(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADREMOVELOOKATCURVE_OFFSET))(this, a1);
		}

		::System::Void HeadLookAtTilt(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILT_OFFSET))(this, a1, a2);
		}

		::System::Void HeadLookAtTiltByCurve(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_HEADLOOKATTILTBYCURVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OverrideLookAtSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATSPEED_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEOUTTIME_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtFadeInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_OVERRIDELOOKATFADEINTIME_OFFSET))(this, a1);
		}

		::System::Void SetupCurveBlender(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETUPCURVEBLENDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetDisableWithCause(::RPG::Client::LookAtDisableCause a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SETDISABLEWITHCAUSE_OFFSET))(this, a1, a2);
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

		::System::Void OnLookAtTargetMoveByPlatform(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_ONLOOKATTARGETMOVEBYPLATFORM_OFFSET))(this, a1);
		}

		::System::Void _Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INITIALIZE_OFFSET))(this);
		}

		::System::Void _IKPreUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKPREUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean _IKUpdate(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__IKUPDATE_OFFSET))(this, a1);
		}

		::System::Void _InternalSetLookAtTarget(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__INTERNALSETLOOKATTARGET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _FilterLookAtTracingTarget(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK__FILTERLOOKATTRACINGTARGET_OFFSET))(this, a1, a2);
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

		::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_LOOKATTARGET_OFFSET))(this, a1);
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

		::System::Void set_SpringManager(::UnityChan::SpringManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_SPRINGMANAGER_OFFSET))(this, a1);
		}

		::System::Single get_CurrentMinSpringHairAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_CURRENTMINSPRINGHAIRANGLE_OFFSET))(this);
		}

		::System::Boolean get_IsInTurnInPlaceAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_GET_ISINTURNINPLACEANIM_OFFSET))(this);
		}

		::System::Void set_IsInTurnInPlaceAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_SET_ISINTURNINPLACEANIM_OFFSET))(this, a1);
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
