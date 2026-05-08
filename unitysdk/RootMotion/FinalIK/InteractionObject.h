#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/RootMotion/FinalIK/InteractionObject_WeightCurve_Type.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace RootMotion::FinalIK { class InteractionObject_InteractionEvent; }
namespace RootMotion::FinalIK { class InteractionObject_Multiplier; }
namespace RootMotion::FinalIK { class InteractionObject_WeightCurve; }
namespace RootMotion::FinalIK { class InteractionSystem; }
namespace RootMotion::FinalIK { class InteractionTarget; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1C11C0E0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1C11B750)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1C11ABD0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_CURVEUSED_OFFSET UNITYSDK_OFFSET(0x1C11B470)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETMULTIPLIERINDEX_OFFSET UNITYSDK_OFFSET(0x1C11D0A0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGETS_OFFSET UNITYSDK_OFFSET(0x1C11B520)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_1_OFFSET UNITYSDK_OFFSET(0x1C11B530)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_2_OFFSET UNITYSDK_OFFSET(0x1C11B6D0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1C11B2C0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C11CB00)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETWEIGHTCURVEINDEX_OFFSET UNITYSDK_OFFSET(0x1C11CAB0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LASTUSEDINTERACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1C11AC40)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C11AC20)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x1C11B180)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_TARGETSROOT_OFFSET UNITYSDK_OFFSET(0x1C11B040)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_INITIATE_OFFSET UNITYSDK_OFFSET(0x1C11AC60)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_ONSTARTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1C11B740)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C11A9F0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL1_OFFSET UNITYSDK_OFFSET(0x1C11AA40)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL2_OFFSET UNITYSDK_OFFSET(0x1C11AA90)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL3_OFFSET UNITYSDK_OFFSET(0x1C11AAE0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL4_OFFSET UNITYSDK_OFFSET(0x1C11AB30)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1C11A9A0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_SET_LASTUSEDINTERACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1C11AC50)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C11AC30)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_START_OFFSET UNITYSDK_OFFSET(0x1C11D090)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1C11AB80)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11D0F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_TypeDefinitionIndex = 36651;

	class InteractionObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* otherLookAtTarget; // 0x18
		::UnityEngine::Transform* otherTargetsRoot; // 0x20
		::UnityEngine::Transform* positionOffsetSpace; // 0x28
		::Il2CppArray<::RootMotion::FinalIK::InteractionObject_WeightCurve*>* weightCurves; // 0x30
		::Il2CppArray<::RootMotion::FinalIK::InteractionObject_Multiplier*>* multipliers; // 0x38
		::Il2CppArray<::RootMotion::FinalIK::InteractionObject_InteractionEvent*>* events; // 0x40
		::System::Single _length_k__BackingField; // 0x48
		::RootMotion::FinalIK::InteractionSystem* _lastUsedInteractionSystem_k__BackingField; // 0x50
		::Il2CppArray<::RootMotion::FinalIK::InteractionTarget*>* targets; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenTutorial1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL1_OFFSET))(this);
		}

		::System::Void OpenTutorial2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL2_OFFSET))(this);
		}

		::System::Void OpenTutorial3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL3_OFFSET))(this);
		}

		::System::Void OpenTutorial4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_OPENTUTORIAL4_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ASTHREAD_OFFSET))(this);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_SET_LENGTH_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::InteractionSystem* get_lastUsedInteractionSystem()
		{
			return ((::RootMotion::FinalIK::InteractionSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LASTUSEDINTERACTIONSYSTEM_OFFSET))(this);
		}

		::System::Void set_lastUsedInteractionSystem(::RootMotion::FinalIK::InteractionSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::InteractionSystem*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_SET_LASTUSEDINTERACTIONSYSTEM_OFFSET))(this, value);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_INITIATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_LOOKATTARGET_OFFSET))(this);
		}

		::RootMotion::FinalIK::InteractionTarget* GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionSystem* interactionSystem)
		{
			return ((::RootMotion::FinalIK::InteractionTarget*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionSystem*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_OFFSET))(this, effectorType, interactionSystem);
		}

		::System::Boolean CurveUsed(::RootMotion::FinalIK::InteractionObject_WeightCurve_Type type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_CURVEUSED_OFFSET))(this, type);
		}

		::Il2CppArray<::RootMotion::FinalIK::InteractionTarget*>* GetTargets()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::InteractionTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGETS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTarget_1(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::System::String* tag)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_1_OFFSET))(this, effectorType, tag);
		}

		::System::Void OnStartInteraction(::RootMotion::FinalIK::InteractionSystem* interactionSystem)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::InteractionSystem*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_ONSTARTINTERACTION_OFFSET))(this, interactionSystem);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionTarget* target, ::System::Single timer, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionTarget*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_APPLY_OFFSET))(this, solver, effector, target, timer, weight);
		}

		::System::Single GetValue(::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType, ::RootMotion::FinalIK::InteractionTarget* target, ::System::Single timer)
		{
			return ((::System::Single(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type, ::RootMotion::FinalIK::InteractionTarget*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETVALUE_OFFSET))(this, weightCurveType, target, timer);
		}

		::UnityEngine::Transform* get_targetsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GET_TARGETSROOT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_START_OFFSET))(this);
		}

		::System::Void Apply_1(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type type, ::System::Single value, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_APPLY_1_OFFSET))(this, solver, effector, type, value, weight);
		}

		::UnityEngine::Transform* GetTarget_2(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETTARGET_2_OFFSET))(this, effectorType);
		}

		::System::Int32 GetWeightCurveIndex(::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType)
		{
			return ((::System::Int32(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETWEIGHTCURVEINDEX_OFFSET))(this, weightCurveType);
		}

		::System::Int32 GetMultiplierIndex(::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType)
		{
			return ((::System::Int32(*)(::PVOID, ::RootMotion::FinalIK::InteractionObject_WeightCurve_Type))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_GETMULTIPLIERINDEX_OFFSET))(this, weightCurveType);
		}
	};
}
