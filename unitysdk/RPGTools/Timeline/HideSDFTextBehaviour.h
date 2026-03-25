#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB6D3A0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xAB6D3C0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB6D3E0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB6D3B0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xAB6D3D0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6D5E0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB6D5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideSDFTextBehaviour_TypeDefinitionIndex = 39086;

	class HideSDFTextBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::System::Boolean _HideImmediately_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::System::Boolean get_HideImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_HideImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_HIDEIMMEDIATELY_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
