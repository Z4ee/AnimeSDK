#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_GET_FOLLOWBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1739FC10)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_GET_LOOKATBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1739FC30)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_SET_FOLLOWBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1739FC20)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_SET_LOOKATBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1739FC40)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1739FC50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamLookAtFollowBehaviour_TypeDefinitionIndex = 71986;

	class CamLookAtFollowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Transform* lookAtTarget; // 0x10
		::UnityEngine::Vector3 lookAtOffset; // 0x18
		::UnityEngine::AnimationCurve* lookAtWeightCurve; // 0x28
		::UnityEngine::Transform* followTarget; // 0x30
		::UnityEngine::Vector3 followPositionOffset; // 0x38
		::UnityEngine::AnimationCurve* followWeightCurve; // 0x48
		::System::Single _followBlendWeight_k__BackingField; // 0x50
		::System::Single _lookAtBlendWeight_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Single get_followBlendWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_GET_FOLLOWBLENDWEIGHT_OFFSET))(this);
		}

		::System::Void set_followBlendWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_SET_FOLLOWBLENDWEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_lookAtBlendWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_GET_LOOKATBLENDWEIGHT_OFFSET))(this);
		}

		::System::Void set_lookAtBlendWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR_SET_LOOKATBLENDWEIGHT_OFFSET))(this, a1);
		}
	};
}
