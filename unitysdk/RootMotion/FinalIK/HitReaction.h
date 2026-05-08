#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class HitReaction_HitPointBone; }
namespace RootMotion::FinalIK { class HitReaction_HitPointEffector; }
namespace UnityEngine { class Collider; }

#define ROOTMOTION_FINALIK_HITREACTION_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C39FD60)
#define ROOTMOTION_FINALIK_HITREACTION_HIT_OFFSET UNITYSDK_OFFSET(0x1C3A00B0)
#define ROOTMOTION_FINALIK_HITREACTION_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1C39FE10)
#define ROOTMOTION_FINALIK_HITREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A04B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_TypeDefinitionIndex = 36696;

	class HitReaction : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::HitReaction_HitPointEffector*>* effectorHitPoints; // 0x30
		::Il2CppArray<::RootMotion::FinalIK::HitReaction_HitPointBone*>* boneHitPoints; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_ONMODIFYOFFSET_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HIT_OFFSET))(this, collider, force, point);
		}
	};
}
