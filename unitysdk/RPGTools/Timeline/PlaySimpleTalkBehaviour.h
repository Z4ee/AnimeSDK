#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B09F370)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B09EB10)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B09F500)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B09EA30)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09F680)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkBehaviour_TypeDefinitionIndex = 48682;

	class PlaySimpleTalkBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::SimpleTalkInfo* ConfigRef; // 0x10
		::RPG::GameCore::SimpleTalkStyle* StyleRef; // 0x18
		::System::Boolean KeepDisplay; // 0x20
		::System::Single Duration; // 0x24
		::System::Boolean BlackMask; // 0x28
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x2C
		::System::Boolean NeedFadeBlackMask; // 0x30
		::System::Single BlackMaskFadeDuration; // 0x34
		::System::Boolean ProtectByVoice; // 0x38
		::System::Boolean ForceToNextOnProtectEnd; // 0x39
		::System::Boolean AutoEnd; // 0x3A
		::System::String* UniqueName; // 0x40
		::System::Boolean Use3DVoice; // 0x48
		::System::Boolean UseDiscussionMouthTalk; // 0x49
		::RPG::Client::MonoEmoAnimMouthShapeLayerController* _MonoEmoAnimMouthShapeLayerController; // 0x50
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x58
		::RPG::Client::MonoEmoPlayableGraph* _MonoEmoPlayableGraph; // 0x60
		::RPG::Client::MonoEmoBlendShapesController* _MonoEmoBlendShapesController; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}
	};
}
