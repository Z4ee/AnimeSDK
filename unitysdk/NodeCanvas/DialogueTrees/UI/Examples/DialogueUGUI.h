#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::DialogueTrees { class MultipleChoiceRequestInfo; }
namespace NodeCanvas::DialogueTrees { class SubtitlesRequestInfo; }
namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI_SubtitleDelays; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1BC5C580)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BC5CE40)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_DELAYPRINT_OFFSET UNITYSDK_OFFSET(0x1BC5C5D0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BC5CE90)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_GET_LOCALSOURCE_OFFSET UNITYSDK_OFFSET(0x1BC5B530)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_INTERNAL_ONSUBTITLESREQUESTINFO_OFFSET UNITYSDK_OFFSET(0x1BC5C390)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUEFINISHED_OFFSET UNITYSDK_OFFSET(0x1BC5BFE0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUEPAUSED_OFFSET UNITYSDK_OFFSET(0x1BC5BF70)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUESTARTED_OFFSET UNITYSDK_OFFSET(0x1BC5BF60)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC5BA70)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC5B6A0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONMULTIPLECHOICEREQUEST_OFFSET UNITYSDK_OFFSET(0x1BC5C620)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONSUBTITLESREQUEST_OFFSET UNITYSDK_OFFSET(0x1BC5C2D0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_PLAYTYPESOUND_OFFSET UNITYSDK_OFFSET(0x1BC5C3E0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_SETMASSALPHA_OFFSET UNITYSDK_OFFSET(0x1BC5D140)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_START_OFFSET UNITYSDK_OFFSET(0x1BC5BE40)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D2C0)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI_TypeDefinitionIndex = 30807;

	class DialogueUGUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean skipOnInput; // 0x18
		::System::Boolean waitForInput; // 0x19
		::UnityEngine::RectTransform* subtitlesGroup; // 0x20
		::UnityEngine::UI::Text* actorSpeech; // 0x28
		::UnityEngine::UI::Text* actorName; // 0x30
		::UnityEngine::UI::Image* actorPortrait; // 0x38
		::UnityEngine::RectTransform* waitInputIndicator; // 0x40
		::NodeCanvas::DialogueTrees::UI::Examples::DialogueUGUI_SubtitleDelays* subtitleDelays; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* typingSounds; // 0x50
		::UnityEngine::RectTransform* optionsGroup; // 0x58
		::UnityEngine::UI::Button* optionButton; // 0x60
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Button*, ::System::Int32>* cachedButtons; // 0x68
		::UnityEngine::Vector2 originalSubsPosition; // 0x70
		::System::Boolean isWaitingChoice; // 0x78
		::UnityEngine::AudioSource* _localSource; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__CTOR_OFFSET))(this);
		}

		::UnityEngine::AudioSource* get_localSource()
		{
			return ((::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_GET_LOCALSOURCE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_START_OFFSET))(this);
		}

		::System::Void OnDialogueStarted(::NodeCanvas::DialogueTrees::DialogueTree* dlg)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUESTARTED_OFFSET))(this, dlg);
		}

		::System::Void OnDialoguePaused(::NodeCanvas::DialogueTrees::DialogueTree* dlg)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUEPAUSED_OFFSET))(this, dlg);
		}

		::System::Void OnDialogueFinished(::NodeCanvas::DialogueTrees::DialogueTree* dlg)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONDIALOGUEFINISHED_OFFSET))(this, dlg);
		}

		::System::Void OnSubtitlesRequest(::NodeCanvas::DialogueTrees::SubtitlesRequestInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONSUBTITLESREQUEST_OFFSET))(this, info);
		}

		::System::Collections::IEnumerator* Internal_OnSubtitlesRequestInfo(::NodeCanvas::DialogueTrees::SubtitlesRequestInfo* info)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_INTERNAL_ONSUBTITLESREQUESTINFO_OFFSET))(this, info);
		}

		::System::Void PlayTypeSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_PLAYTYPESOUND_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CheckInput(::System::Action* Do)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_CHECKINPUT_OFFSET))(this, Do);
		}

		::System::Collections::IEnumerator* DelayPrint(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_DELAYPRINT_OFFSET))(this, time);
		}

		::System::Void OnMultipleChoiceRequest(::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_ONMULTIPLECHOICEREQUEST_OFFSET))(this, info);
		}

		::System::Collections::IEnumerator* CountDown(::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_COUNTDOWN_OFFSET))(this, info);
		}

		::System::Void Finalize(::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_FINALIZE_OFFSET))(this, info, index);
		}

		::System::Void SetMassAlpha(::UnityEngine::RectTransform* root, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_SETMASSALPHA_OFFSET))(this, root, alpha);
		}
	};
}
