#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5ACC12D56DC348A8.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_IKBINDTARGETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x190BDBA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int IKBindTargetBehaviour_TypeDefinitionIndex = 54856;

	class IKBindTargetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Enum_3_5ACC12D56DC348A8 ikType; // 0x10
		::UnityEngine::Transform* targetTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
