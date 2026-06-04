#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL_GET_FEVERMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xB4C3C80)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL_SET_FEVERMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xB4C3C90)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C3FD0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__ENSUREINITIALIZEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB4C3CF0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0xB4C3ED0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL___ENSUREINITIALIZEINTERACTION_B__10_0_OFFSET UNITYSDK_OFFSET(0xB4C3FE0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL___ENSUREINITIALIZEINTERACTION_B__10_1_OFFSET UNITYSDK_OFFSET(0xB4C3FF0)

namespace RPG::Client::Challenge::Story
{
	inline static constexpr unsigned int ChallengeStoryFeverMazeBuffIconControl_TypeDefinitionIndex = 74285;

	class ChallengeStoryFeverMazeBuffIconControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x18
		::UnityEngine::RectTransform* _NodeClickArea; // 0x20
		::RPG::Client::MonoClickOutsideDetect* _ClickOutsideDetect; // 0x28
		::UnityEngine::RectTransform* _NodePopup; // 0x30
		::RPG::Client::LocalizedText* _TextName; // 0x38
		::RPG::Client::LocalizedText* _TextDesc; // 0x40
		::System::Boolean _IsInteractionInitialized; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FeverMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL_GET_FEVERMAZEBUFFID_OFFSET))(this);
		}

		::System::Void set_FeverMazeBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL_SET_FEVERMAZEBUFFID_OFFSET))(this, a1);
		}

		::System::Void _EnsureInitializeInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__ENSUREINITIALIZEINTERACTION_OFFSET))(this);
		}

		::System::Void _RefreshContent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL__REFRESHCONTENT_OFFSET))(this, a1);
		}

		::System::Void __EnsureInitializeInteraction_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL___ENSUREINITIALIZEINTERACTION_B__10_0_OFFSET))(this);
		}

		::System::Void __EnsureInitializeInteraction_b__10_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONCONTROL___ENSUREINITIALIZEINTERACTION_B__10_1_OFFSET))(this, a1);
		}
	};
}
