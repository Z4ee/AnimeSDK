#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_BUFFBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F3FF0)

namespace RPG::Client::Challenge::Story
{
	inline static constexpr unsigned int ChallengeStoryFeverMazeBuffIconGroupControl_BuffBinder_TypeDefinitionIndex = 80309;

	class ChallengeStoryFeverMazeBuffIconGroupControl_BuffBinder : public ::System::Object
	{
	public:
		::RPG::Client::AnimatorButton* BtnRoot; // 0x10
		::UnityEngine::RectTransform* NodeClickArea; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_BUFFBINDER__CTOR_OFFSET))(this);
		}
	};
}
