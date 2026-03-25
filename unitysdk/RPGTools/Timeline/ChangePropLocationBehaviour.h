#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7CE32ADB98EEB758;

#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB31DE0)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB31E00)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB31DF0)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB31F30)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB31F40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ChangePropLocationBehaviour_TypeDefinitionIndex = 38773;

	class ChangePropLocationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::UnityEngine::Vector3 Position; // 0x18
		::Class_2_7CE32ADB98EEB758* _TrackMixer_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Class_2_7CE32ADB98EEB758* get_TrackMixer()
		{
			return ((::Class_2_7CE32ADB98EEB758*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET))(this);
		}

		::System::Void set_TrackMixer(::Class_2_7CE32ADB98EEB758* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7CE32ADB98EEB758*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
