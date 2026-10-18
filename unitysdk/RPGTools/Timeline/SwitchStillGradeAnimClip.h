#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE93D6D0)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE93D6C0)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_METHOD_4_77644CD028DB868F_OFFSET UNITYSDK_OFFSET(0xE93D320)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE93D860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchStillGradeAnimClip_TypeDefinitionIndex = 48369;

	class SwitchStillGradeAnimClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* StillGradeAnimID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_4_77644CD028DB868F()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_METHOD_4_77644CD028DB868F_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
