#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EmoEyeCtrl; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE843D10)
#define RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE843DA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlTimelineBehaviour_TypeDefinitionIndex = 48568;

	class EmoEyeCtrlTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single Duration; // 0x10
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* EyeCtrlOffsetData; // 0x18
		::RPGTools::Timeline::EmoEyeCtrlShakeData* ShakeData; // 0x20
		::System::Single NormalizedTime; // 0x28
		::RPG::Client::EmoEyeCtrl* EyeCtrl; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
