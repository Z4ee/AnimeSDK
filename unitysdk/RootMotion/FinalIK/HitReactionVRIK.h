#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifierVRIK.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class HitReactionVRIK_PositionOffset; }
namespace RootMotion::FinalIK { class HitReactionVRIK_RotationOffset; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_HIT_OFFSET UNITYSDK_OFFSET(0x1FA5A900)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FA5A650)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5AD10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_TypeDefinitionIndex = 38887;

	class HitReactionVRIK : public ::RootMotion::FinalIK::OffsetModifierVRIK
	{
	public:
		::Il2CppArray<::UnityEngine::AnimationCurve*>* offsetCurves; // 0x30
		::Il2CppArray<::RootMotion::FinalIK::HitReactionVRIK_PositionOffset*>* positionOffsets; // 0x38
		::Il2CppArray<::RootMotion::FinalIK::HitReactionVRIK_RotationOffset*>* rotationOffsets; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ONMODIFYOFFSET_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_HIT_OFFSET))(this, collider, force, point);
		}
	};
}
