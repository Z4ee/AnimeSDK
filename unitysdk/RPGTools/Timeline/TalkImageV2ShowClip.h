#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19F53290)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19F53280)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_32F5E8B0F86B286F_OFFSET UNITYSDK_OFFSET(0x19F533F0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_79A0DD953C362A58_OFFSET UNITYSDK_OFFSET(0x19F53470)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_E4AE005360690BC3_OFFSET UNITYSDK_OFFSET(0x19F534F0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F53570)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2ShowClip_TypeDefinitionIndex = 46603;

	class TalkImageV2ShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* PanelType; // 0x18
		::System::Single FadeSpeed; // 0x20
		::System::Single FadeTime; // 0x24
		::System::Boolean IsPlayerInvolved; // 0x28
		::System::String* ImagePath; // 0x30
		::System::String* MaleImagePath; // 0x38
		::System::String* FemaleImagePath; // 0x40
		::System::String* MaterialPath; // 0x48
		::System::Boolean IsCustomAspect; // 0x50
		::UnityEngine::Vector2 CustomAspect; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_4_32F5E8B0F86B286F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_32F5E8B0F86B286F_OFFSET))(this);
		}

		::System::Boolean Method_4_79A0DD953C362A58(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_79A0DD953C362A58_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* Method_4_E4AE005360690BC3()
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_METHOD_4_E4AE005360690BC3_OFFSET))(this);
		}
	};
}
