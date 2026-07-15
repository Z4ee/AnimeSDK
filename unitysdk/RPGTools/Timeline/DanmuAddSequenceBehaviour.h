#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_GET_GROUPIDSET_OFFSET UNITYSDK_OFFSET(0x19A36270)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19A362A0)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_SET_GROUPIDSET_OFFSET UNITYSDK_OFFSET(0x19A36290)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36380)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DanmuAddSequenceBehaviour_TypeDefinitionIndex = 46288;

	class DanmuAddSequenceBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Struct_2_137AB23E3A00ECA1 _GroupIdSet_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Struct_2_137AB23E3A00ECA1 get_GroupIdSet()
		{
			return ((::Struct_2_137AB23E3A00ECA1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_GET_GROUPIDSET_OFFSET))(this);
		}

		::System::Void set_GroupIdSet(::Struct_2_137AB23E3A00ECA1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_SET_GROUPIDSET_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
