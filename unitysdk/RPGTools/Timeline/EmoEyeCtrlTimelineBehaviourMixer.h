#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoEyeCtrl; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD0078B0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xD008300)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD008490)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlTimelineBehaviourMixer_TypeDefinitionIndex = 45405;

	class EmoEyeCtrlTimelineBehaviourMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::Client::EmoEyeCtrl* EyeCtrl; // 0x10
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* EyeCtrlOffsetDataCache; // 0x18
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _EyeCtrlOffsetData; // 0x20
		::RPGTools::Timeline::EmoEyeCtrlShakeData* _ResultShakeData; // 0x28
		::RPGTools::Timeline::EmoEyeCtrlShakeData* _TmpShakeData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
