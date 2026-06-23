#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1829288F4F4A624D;
class Class_2_7B15B3118FE590CD_4;
class Class_2_7B15B3118FE590CD_4_Class_2_C4F5657DA992F4EE;
class Class_2_A98F487E59440D0B;
class Class_2_ACF3AD21D9602888;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerChatPlayContext; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0x15782550)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_FADEOUTCHATANDHIDE_OFFSET UNITYSDK_OFFSET(0x15781F40)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GENERATORTEXPLAYANIM_OFFSET UNITYSDK_OFFSET(0x15781D90)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1577EB90)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1577EC10)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCLICKDETAILBTNCALLBACK_OFFSET UNITYSDK_OFFSET(0x15781540)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCLICKOPTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x15781360)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCONTINUEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15781850)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1577EF80)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1577F0C0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1577F150)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1577F010)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1577EC90)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1577EF10)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_PLAYTEXTWITHLABEL_OFFSET UNITYSDK_OFFSET(0x15781BE0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_PLAYTEXT_OFFSET UNITYSDK_OFFSET(0x15781290)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REFRESHOPTIONS_OFFSET UNITYSDK_OFFSET(0x1577F430)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET UNITYSDK_OFFSET(0x15780780)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REPLACETEXT_OFFSET UNITYSDK_OFFSET(0x15781FD0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_STARTPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x1577F690)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x157806D0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157826F0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__REPLACETEXT_B__29_0_OFFSET UNITYSDK_OFFSET(0x15782890)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__REPLACETEXT_B__29_1_OFFSET UNITYSDK_OFFSET(0x15782C40)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15782C80)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15782D10)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15782DA0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15782E40)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15782ED0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15782F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerChatPlayWidgetController_TypeDefinitionIndex = 43542;

	class UIQuestionsAnswerChatPlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7B15B3118FE590CD_4* _view; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* galTalkRealTextDic; // 0x2C8
		::System::Boolean _correctOption; // 0x2D0
		::Class_1_1829288F4F4A624D* storyPlayRecord; // 0x2D8
		::DG::Tweening::Tween* _textColorTween; // 0x2E0
		::System::Collections::Generic::List_1<::System::Int32>* _textColorFormatIndex; // 0x2E8
		::System::Text::StringBuilder* _stringBuilder; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerChatPlayContext* get_Context()
		{
			return ((::MoleMole::UIQuestionsAnswerChatPlayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GET_CONTEXT_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerPageController* get_parentController()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshOption(::System::Int32 i, ::Class_2_7B15B3118FE590CD_4_Class_2_C4F5657DA992F4EE* view)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_7B15B3118FE590CD_4_Class_2_C4F5657DA992F4EE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET))(this, i, view);
		}

		::System::Void RefreshOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REFRESHOPTIONS_OFFSET))(this);
		}

		::System::Void StartPlayText(::System::String* textKey, ::System::String* nameString, ::System::String* exText, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_STARTPLAYTEXT_OFFSET))(this, textKey, nameString, exText, fade);
		}

		::System::Void OnClickOptionCallback(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCLICKOPTIONCALLBACK_OFFSET))(this, index);
		}

		::System::Void OnClickDetailBtnCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCLICKDETAILBTNCALLBACK_OFFSET))(this);
		}

		::System::Void OnContinueBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_ONCONTINUEBTNCLICKED_OFFSET))(this);
		}

		::System::Void PlayText(::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay, ::System::Int32 recordIndex, ::Class_2_ACF3AD21D9602888* seqPlayable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_PLAYTEXT_OFFSET))(this, playText, speed, realText, delay, recordIndex, seqPlayable);
		}

		::System::Void PlayTextWithLabel(::UnityEngine::UI::Text* label, ::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay, ::System::Int32 recordIndex, ::Class_2_ACF3AD21D9602888* seqPlayable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_PLAYTEXTWITHLABEL_OFFSET))(this, label, playText, speed, realText, delay, recordIndex, seqPlayable);
		}

		::Class_2_A98F487E59440D0B* GeneratorTexplayAnim(::UnityEngine::UI::Text* label, ::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay)
		{
			return ((::Class_2_A98F487E59440D0B*(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_GENERATORTEXPLAYANIM_OFFSET))(this, label, playText, speed, realText, delay);
		}

		::Cysharp::Threading::Tasks::UniTask FadeOutChatAndHide()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_FADEOUTCHATANDHIDE_OFFSET))(this);
		}

		::System::Void ReplaceText(::System::String* text, ::System::String* newName, ::System::String* exText, ::System::Collections::Generic::List_1<::System::String*>* options, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_REPLACETEXT_OFFSET))(this, text, newName, exText, options, playAnim);
		}

		::System::Void CorrectOption(::System::Collections::Generic::List_1<::System::Int32>* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_CORRECTOPTION_OFFSET))(this, index);
		}

		::System::Void _ReplaceText_b__29_0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__REPLACETEXT_B__29_0_OFFSET))(this, value);
		}

		::System::Void _ReplaceText_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__REPLACETEXT_B__29_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
