#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_PositionOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class VRIK; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK_APPLY_OFFSET UNITYSDK_OFFSET(0x1EE3F510)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1EE3F7B0)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE3F7C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_PositionOffset_PositionOffsetLink_TypeDefinitionIndex = 38891;

	class HitReactionVRIK_PositionOffset_PositionOffsetLink : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset; // 0x10
		::System::Single weight; // 0x14
		::UnityEngine::Vector3 lastValue; // 0x18
		::UnityEngine::Vector3 current; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Vector3 offset, ::System::Single crossFader)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK_APPLY_OFFSET))(this, ik, offset, crossFader);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_POSITIONOFFSETLINK_CROSSFADESTART_OFFSET))(this);
		}
	};
}
