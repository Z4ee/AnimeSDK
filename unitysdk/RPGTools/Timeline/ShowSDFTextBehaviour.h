#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ShowSDFTextData; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x199B5EA0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x199B5EC0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x199B5EE0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x199B5EB0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x199B5ED0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199B63C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowSDFTextBehaviour_TypeDefinitionIndex = 46476;

	class ShowSDFTextBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPGTools::Timeline::ShowSDFTextData* _Config_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::ShowSDFTextData* get_Config()
		{
			return ((::RPGTools::Timeline::ShowSDFTextData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::ShowSDFTextData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ShowSDFTextData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
