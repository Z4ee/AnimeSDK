#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/RPGTools/Timeline/PlaySimpleTalkClip_UseTextOptionEnum.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPGTools::Timeline { class MouthInfo; }
namespace RPGTools::Timeline { class PlaySimpleTalkBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB817C0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB81A50)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB81780)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_METHOD_4_FCE3E84D14491ED7_OFFSET UNITYSDK_OFFSET(0xAB81A10)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB81A60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkClip_TypeDefinitionIndex = 39063;

	class PlaySimpleTalkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x18
		::System::Boolean ShowMouthAssetCheck; // 0x20
		::RPGTools::Timeline::PlaySimpleTalkClip_UseTextOptionEnum UseTextOption; // 0x24
		::RPG::GameCore::SimpleTalkInfo* Config; // 0x28
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x30
		::System::Boolean BlackMask; // 0x38
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x3C
		::System::Boolean NeedFadeBlackMask; // 0x40
		::System::Single BlackMaskFadeDuration; // 0x44
		::System::Boolean ProtectByVoice; // 0x48
		::System::Boolean ForceToNextOnProtectEnd; // 0x49
		::System::Boolean HaveProtectTime; // 0x4A
		::System::String* UniqueName; // 0x50
		::System::Boolean Use3DVoice; // 0x58
		::System::Boolean UseDiscussionMouthTalk; // 0x59
		::RPGTools::Timeline::PlaySimpleTalkBehaviour* template_; // 0x60
		::RPGTools::Timeline::MouthInfo* MouthInfo; // 0x68
		::System::Single Duration; // 0x70
		::System::Boolean AutoEnd; // 0x74
		::RPGTools::Timeline::PlaySimpleTalkBehaviour* _BehaviourRef; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SimpleTalkInfo* Method_4_FCE3E84D14491ED7()
		{
			return ((::RPG::GameCore::SimpleTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_METHOD_4_FCE3E84D14491ED7_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
