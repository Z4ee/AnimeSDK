#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE906B10)
#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE906B90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int YCorrectionEnableBehaviour_TypeDefinitionIndex = 48871;

	class YCorrectionEnableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::RPG::GameCore::GameWorld* _GameWorld; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
