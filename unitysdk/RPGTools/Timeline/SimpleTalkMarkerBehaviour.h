#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA0880)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA09A0)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABA0BD0)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA0BE0)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA0BF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleTalkMarkerBehaviour_TypeDefinitionIndex = 39070;

	class SimpleTalkMarkerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean BlackMask; // 0x10
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x14
		::System::Boolean NeedFadeBlackMask; // 0x18
		::System::Single BlackMaskFadeDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
