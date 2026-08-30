#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B5921F0)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1B592210)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B592230)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B592200)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1B592220)
#define RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B592430)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideSDFTextBehaviour_TypeDefinitionIndex = 48706;

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

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HideImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_GET_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_HideImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_SET_HIDEIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
