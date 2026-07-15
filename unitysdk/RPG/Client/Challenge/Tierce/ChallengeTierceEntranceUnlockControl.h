#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_323E41095C5791AB_OFFSET UNITYSDK_OFFSET(0x1AC677C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_6EF49126B84EB647_OFFSET UNITYSDK_OFFSET(0x1AC67770)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_A769C9FD65C21655_OFFSET UNITYSDK_OFFSET(0x1AC67730)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC678D0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceEntranceUnlockControl_TypeDefinitionIndex = 76576;

	class ChallengeTierceEntranceUnlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::ChallengeGroupType Field_5_0; // 0x18
		::UnityEngine::UI::Image* _Image; // 0x20
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x28
		::UnityEngine::Sprite* _SpriteMemory; // 0x30
		::UnityEngine::Sprite* _SpriteStory; // 0x38
		::UnityEngine::Sprite* _SpriteBoss; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType Method_5_A769C9FD65C21655()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_A769C9FD65C21655_OFFSET))(this);
		}

		::System::Void Method_5_6EF49126B84EB647(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_6EF49126B84EB647_OFFSET))(this, a1);
		}

		::System::Void Method_5_323E41095C5791AB(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_METHOD_5_323E41095C5791AB_OFFSET))(this, a1);
		}
	};
}
