#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_APPLY_OFFSET UNITYSDK_OFFSET(0x1F6E8BB0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_CROSSFADER_OFFSET UNITYSDK_OFFSET(0x1F6E8A50)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_FORCE_OFFSET UNITYSDK_OFFSET(0x1F6E8A90)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1F6E8A40)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_TIMER_OFFSET UNITYSDK_OFFSET(0x1F6E8A70)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_HIT_OFFSET UNITYSDK_OFFSET(0x1F6E8AC0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_CROSSFADER_OFFSET UNITYSDK_OFFSET(0x1F6E8A60)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_FORCE_OFFSET UNITYSDK_OFFSET(0x1F6E8AB0)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_TIMER_OFFSET UNITYSDK_OFFSET(0x1F6E8A80)
#define ROOTMOTION_FINALIK_HITREACTION_HITPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E8C80)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_HitPoint_TypeDefinitionIndex = 38838;

	class HitReaction_HitPoint : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Collider* collider; // 0x18
		::System::Single crossFadeTime; // 0x20
		::System::Single _crossFader_k__BackingField; // 0x24
		::System::Single _timer_k__BackingField; // 0x28
		::UnityEngine::Vector3 _force_k__BackingField; // 0x2C
		::System::Single length; // 0x38
		::System::Single crossFadeSpeed; // 0x3C
		::System::Single lastTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Single get_crossFader()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_CROSSFADER_OFFSET))(this);
		}

		::System::Void set_crossFader(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_CROSSFADER_OFFSET))(this, value);
		}

		::System::Single get_timer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_TIMER_OFFSET))(this);
		}

		::System::Void set_timer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_TIMER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_force()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_GET_FORCE_OFFSET))(this);
		}

		::System::Void set_force(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_SET_FORCE_OFFSET))(this, value);
		}

		::System::Void Hit(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_HIT_OFFSET))(this, force, point);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HITPOINT_APPLY_OFFSET))(this, solver, weight);
		}
	};
}
