#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C41538A1857963AE;
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B352E80)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B352EA0)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B352E90)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B352FD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ChangeStageItemLocationBehaviour_TypeDefinitionIndex = 46147;

	class ChangeStageItemLocationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::UnityEngine::Vector3 Position; // 0x20
		::Class_2_C41538A1857963AE* _TrackMixer_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Class_2_C41538A1857963AE* get_TrackMixer()
		{
			return ((::Class_2_C41538A1857963AE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET))(this);
		}

		::System::Void set_TrackMixer(::Class_2_C41538A1857963AE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C41538A1857963AE*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
