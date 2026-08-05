#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_CHARACTERMATERIALBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13864000)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterMaterialBehaviour_TypeDefinitionIndex = 42121;

	class CharacterMaterialBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::SkinnedMeshRenderer* renderer; // 0x18
		::System::Boolean receiveShadows; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERMATERIALBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
