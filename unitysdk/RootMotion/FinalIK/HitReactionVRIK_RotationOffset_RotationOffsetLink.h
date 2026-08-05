#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_RotationOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class VRIK; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK_APPLY_OFFSET UNITYSDK_OFFSET(0x1F6E8C90)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1F6E8D90)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E8DA0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_RotationOffset_RotationOffsetLink_TypeDefinitionIndex = 38889;

	class HitReactionVRIK_RotationOffset_RotationOffsetLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset; // 0x10
		::System::Single weight; // 0x14
		::UnityEngine::Quaternion lastValue; // 0x18
		::UnityEngine::Quaternion current; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Quaternion offset, ::System::Single crossFader)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK_APPLY_OFFSET))(this, ik, offset, crossFader);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_ROTATIONOFFSET_ROTATIONOFFSETLINK_CROSSFADESTART_OFFSET))(this);
		}
	};
}
