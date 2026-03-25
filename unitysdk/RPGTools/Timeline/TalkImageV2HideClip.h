#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABACC40)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABACC30)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_METHOD_4_32F5E8B0F86B286F_OFFSET UNITYSDK_OFFSET(0xABACE00)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_METHOD_4_E4AE005360690BC3_OFFSET UNITYSDK_OFFSET(0xABACE80)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABACF00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2HideClip_TypeDefinitionIndex = 39205;

	class TalkImageV2HideClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* PanelType; // 0x18
		::System::Single FadeSpeed; // 0x20
		::System::Single FadeTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_4_32F5E8B0F86B286F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_METHOD_4_32F5E8B0F86B286F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* Method_4_E4AE005360690BC3()
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDECLIP_METHOD_4_E4AE005360690BC3_OFFSET))(this);
		}
	};
}
