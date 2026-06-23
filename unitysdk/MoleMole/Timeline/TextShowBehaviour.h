#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1740C010)
#define MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1740BF80)
#define MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1740C000)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextShowBehaviour_TypeDefinitionIndex = 60936;

	class TextShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* text; // 0x10
		::System::Int32 fontSize; // 0x18
		::UnityEngine::Color textColor; // 0x1C
		::UnityEngine::TextAnchor textAlignment; // 0x2C
		::System::Single fadeInTime; // 0x30
		::System::Single fadeOutTime; // 0x34
		::UnityEngine::Color backgroundColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}
	};
}
