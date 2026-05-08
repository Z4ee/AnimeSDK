#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class WwiseAudioBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x12380650)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x12380640)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_METHOD_4_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x12380910)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_METHOD_4_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x123809F0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12380A50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioClip_TypeDefinitionIndex = 58494;

	class WwiseAudioClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::WwiseAudioBehaviour* template_; // 0x18
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0x20
		::System::Boolean disableMale; // 0x28
		::System::Boolean disableFemale; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_4_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_METHOD_4_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Boolean Method_4_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_METHOD_4_CF8BA38996D09531_OFFSET))(this);
		}
	};
}
