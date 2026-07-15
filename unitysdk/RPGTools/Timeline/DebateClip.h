#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPGTools::Timeline { class MouthInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_DEBATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A36EF0)
#define RPGTOOLS_TIMELINE_DEBATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A36EA0)
#define RPGTOOLS_TIMELINE_DEBATECLIP_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19A36E60)
#define RPGTOOLS_TIMELINE_DEBATECLIP_METHOD_4_FCE3E84D14491ED7_OFFSET UNITYSDK_OFFSET(0x19A36EB0)
#define RPGTOOLS_TIMELINE_DEBATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A37080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DebateClip_TypeDefinitionIndex = 46292;

	class DebateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean ShowMouthAssetCheck; // 0x18
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x20
		::System::String* TestimonyName; // 0x28
		::RPG::GameCore::SimpleTalkInfo* Config; // 0x30
		::System::String* UniqueName; // 0x38
		::System::Boolean UseDiscussionMouthTalk; // 0x40
		::RPGTools::Timeline::MouthInfo* MouthInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::RPG::GameCore::SimpleTalkInfo* Method_4_FCE3E84D14491ED7()
		{
			return ((::RPG::GameCore::SimpleTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_METHOD_4_FCE3E84D14491ED7_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DEBATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
