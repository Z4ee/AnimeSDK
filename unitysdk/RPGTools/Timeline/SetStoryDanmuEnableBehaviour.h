#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xE8E22C0)
#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8E22E0)
#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xE8E22D0)
#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E2390)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetStoryDanmuEnableBehaviour_TypeDefinitionIndex = 48525;

	class SetStoryDanmuEnableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean _IsEnable_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_SET_ISENABLE_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
