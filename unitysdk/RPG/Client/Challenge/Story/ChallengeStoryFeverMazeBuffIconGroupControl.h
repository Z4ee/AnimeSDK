#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::Client::Challenge::Story { class ChallengeStoryFeverMazeBuffIconGroupControl_BuffBinder; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_GETFIRSTSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0xB4C4490)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_GET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0xB4C4000)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0xB4C4530)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_SET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0xB4C4010)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C4850)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__ENSUREINITIALIZEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB4C40B0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0xB4C4430)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__REFRESHCHECKSTATE_OFFSET UNITYSDK_OFFSET(0xB4C4770)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0xB4C45B0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL___ENSUREINITIALIZEINTERACTION_B__15_0_OFFSET UNITYSDK_OFFSET(0xB4C48A0)
#define RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL___ENSUREINITIALIZEINTERACTION_B__15_1_OFFSET UNITYSDK_OFFSET(0xB4C4920)

namespace RPG::Client::Challenge::Story
{
	inline static constexpr unsigned int ChallengeStoryFeverMazeBuffIconGroupControl_TypeDefinitionIndex = 74286;

	class ChallengeStoryFeverMazeBuffIconGroupControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Challenge::Story::ChallengeStoryFeverMazeBuffIconGroupControl_BuffBinder*>* _Buffs; // 0x18
		::RPG::Client::MonoClickOutsideDetect* _ClickOutsideDetect; // 0x20
		::UnityEngine::RectTransform* _NodePopup; // 0x28
		::RPG::Client::LocalizedText* _TextName; // 0x30
		::RPG::Client::LocalizedText* _TextDesc; // 0x38
		::RPG::UINavigation::UINavigationArea* _NavArea; // 0x40
		::RPG::UINavigation::UINavigationZone* _NavZone; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _FeverMazeBuffIDs; // 0x50
		::System::Boolean _IsInteractionInitialized; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_FeverMazeBuffIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_GET_FEVERMAZEBUFFIDS_OFFSET))(this);
		}

		::System::Void set_FeverMazeBuffIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_SET_FEVERMAZEBUFFIDS_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_GETFIRSTSELECTEDOBJECT_OFFSET))(this);
		}

		::System::Void HidePopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL_HIDEPOPUP_OFFSET))(this);
		}

		::System::Void _EnsureInitializeInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__ENSUREINITIALIZEINTERACTION_OFFSET))(this);
		}

		::System::Void _ShowPopup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__SHOWPOPUP_OFFSET))(this, a1);
		}

		::System::Void _HidePopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__HIDEPOPUP_OFFSET))(this);
		}

		::System::Void _RefreshCheckState(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL__REFRESHCHECKSTATE_OFFSET))(this, a1);
		}

		::System::Void __EnsureInitializeInteraction_b__15_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL___ENSUREINITIALIZEINTERACTION_B__15_0_OFFSET))(this, a1);
		}

		::System::Void __EnsureInitializeInteraction_b__15_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_STORY_CHALLENGESTORYFEVERMAZEBUFFICONGROUPCONTROL___ENSUREINITIALIZEINTERACTION_B__15_1_OFFSET))(this, a1);
		}
	};
}
