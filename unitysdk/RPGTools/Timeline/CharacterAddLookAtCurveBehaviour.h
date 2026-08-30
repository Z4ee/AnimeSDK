#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterAddLookAtCurveData; }

#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE827630)
#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8278E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterAddLookAtCurveBehaviour_TypeDefinitionIndex = 48429;

	class CharacterAddLookAtCurveBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterAddLookAtCurveData* Config; // 0x20
		::RPG::Client::CharacterMonoAvatar* _CharacterMonoAvatar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
