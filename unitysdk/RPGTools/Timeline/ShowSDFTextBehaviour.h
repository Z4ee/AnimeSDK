#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ShowSDFTextData; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB914740)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB914760)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB914780)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB914750)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB914770)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB914CA0)
#define RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB914CB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowSDFTextBehaviour_TypeDefinitionIndex = 44994;

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

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::RPGTools::Timeline::ShowSDFTextData* get_Config()
		{
			return ((::RPGTools::Timeline::ShowSDFTextData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::ShowSDFTextData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ShowSDFTextData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
