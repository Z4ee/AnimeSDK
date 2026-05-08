#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A39E1B51756BF41;
class Class_2_7B15B3118FE590CD_2;
class Class_2_D87A2A277909F333;
class Class_2_EC5A7AD641CF932C;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerCardItemRowWidgetController; }
namespace MoleMole { class UIQuestionsAnswerChatPlayContext; }
namespace MoleMole { class UIQuestionsAnswerChatPlayWidgetController; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0x13DFF130)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0x13DFF810)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0x13E003F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0x13E00030)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_BEFORESTAGENPC_OFFSET UNITYSDK_OFFSET(0x13DFC7A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0x13DFED60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0x13DFEFB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0x13DFF0D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0x13DFF070)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0x13DFDDB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANCEL_OFFSET UNITYSDK_OFFSET(0x13DFC2D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CHECKCHATFINISH_OFFSET UNITYSDK_OFFSET(0x13DFC9D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCARDITEMROWWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13DFA9B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13DFAA70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ENABLECHEETBUTTON_OFFSET UNITYSDK_OFFSET(0x13DFAB60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_FADEOUTEMOJI_OFFSET UNITYSDK_OFFSET(0x13E01CC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x13DFABF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x13DFAC50)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETENDBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x13DFC690)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETFAILBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x13DFC620)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETHPCOLOR_OFFSET UNITYSDK_OFFSET(0x13DFCBF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETSTARTBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x13DFAD50)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_ENDING_OFFSET UNITYSDK_OFFSET(0x13DFAE70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13DFADD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PLAYING_OFFSET UNITYSDK_OFFSET(0x13DFAE50)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEEMOJI_OFFSET UNITYSDK_OFFSET(0x13E01C60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEFAIRY_OFFSET UNITYSDK_OFFSET(0x13DFB890)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_INITBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x13DFD000)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ISBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x13E01DB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_LOADSCOREIMAGE_OFFSET UNITYSDK_OFFSET(0x13DFDB20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_NARRATORPREDICATE_OFFSET UNITYSDK_OFFSET(0x13E022F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_OBBACKCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E00910)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHATFINISH_OFFSET UNITYSDK_OFFSET(0x13DFCA20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHEATSHEETCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E00B30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCLICKNARRATORCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E008C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13DFB530)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13DFB5C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONRESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13E00A20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13DFB4C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13DFB8F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13DFBB10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13DFAE90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13DFB450)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_PREPARESTARTGAME_OFFSET UNITYSDK_OFFSET(0x13DFC540)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x13DFE7F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x13DFE9C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x13DFEBE0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x13DFEC80)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x13DFD750)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETHP_OFFSET UNITYSDK_OFFSET(0x13DFCCF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXHP_OFFSET UNITYSDK_OFFSET(0x13DFCA80)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x13DFDA60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x13E01E90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETSCORETEXT_OFFSET UNITYSDK_OFFSET(0x13DFD810)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_ENDING_OFFSET UNITYSDK_OFFSET(0x13DFAE80)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_PLAYING_OFFSET UNITYSDK_OFFSET(0x13DFAE60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0x13E01720)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWERRORFAIRY_OFFSET UNITYSDK_OFFSET(0x13E012F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWFAIRY_OFFSET UNITYSDK_OFFSET(0x13E007B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x13DFC710)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTSCOREDOTWEEN_OFFSET UNITYSDK_OFFSET(0x13E00CB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0x13DFDF20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYNEXTNPC_OFFSET UNITYSDK_OFFSET(0x13DFC840)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYTRIGGERBUFF_OFFSET UNITYSDK_OFFSET(0x13DFDBC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATEEMOJIPOS_OFFSET UNITYSDK_OFFSET(0x13DFBF00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13DFBBB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENCLICK_OFFSET UNITYSDK_OFFSET(0x13E021B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENFADEOUT_OFFSET UNITYSDK_OFFSET(0x13E02250)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCHAT_OFFSET UNITYSDK_OFFSET(0x13DFC920)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCLICKCONTINUEBTN_OFFSET UNITYSDK_OFFSET(0x13E01690)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREENTEXT_OFFSET UNITYSDK_OFFSET(0x13E02100)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x13E01E00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFA6C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_0_OFFSET UNITYSDK_OFFSET(0x13E024E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_1_OFFSET UNITYSDK_OFFSET(0x13E02730)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_0_OFFSET UNITYSDK_OFFSET(0x13E02850)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_1_OFFSET UNITYSDK_OFFSET(0x13E02AA0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETCURRENTSCORE_B__67_0_OFFSET UNITYSDK_OFFSET(0x13E02340)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETMAXSCORE_B__68_0_OFFSET UNITYSDK_OFFSET(0x13E02460)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E02BD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13E02C60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13E02CF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13E02D90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E02DA0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E02E30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E02EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController_TypeDefinitionIndex = 74564;

	class UIQuestionsAnswerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7B15B3118FE590CD_2* _view; // 0x2B8
		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* _chatPlayWidget; // 0x2C0
		::System::Boolean _chating; // 0x2C8
		::System::Int32 _selectIndex; // 0x2CC
		::Class_2_EC5A7AD641CF932C* _model; // 0x2D0
		::Class_2_D87A2A277909F333* _gameModel; // 0x2D8
		::System::Threading::CancellationTokenSource* _cancellationToken; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*>* _skillWidgets; // 0x2E8
		::MoleMole::UIGeneralNewsBubbleWidgetController* _fairyWidget; // 0x2F0
		::System::Int32 _currentStageId; // 0x2F8
		::System::Int32 CurrentHp; // 0x2FC
		::System::Boolean _playing; // 0x300
		::System::Boolean _ending; // 0x301
		::DG::Tweening::Tween* _tween; // 0x308
		::Il2CppArray<::System::String*>* NumImagePath; // 0x310
		::System::Single _timer; // 0x318
		::System::Single _totalTime; // 0x31C
		::System::Int32 _currentScore; // 0x320
		::System::Boolean _waitAnswering; // 0x324
		::System::Single _exRage; // 0x328
		::System::Int32 _exAddHp; // 0x32C
		::System::Int32 _exReduceHp; // 0x330
		::System::Boolean _blackscreen; // 0x334
		::Il2CppArray<::System::Boolean>* _buffState; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* _buffIdList; // 0x340
		::Il2CppArray<::System::Int32>* _buffCount; // 0x348
		::UnityEngine::Vector3 _defaultEmojiPos; // 0x350
		::System::String* _soundLastState; // 0x360
		::System::UInt32 _currentVoicePendingId; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerPageController* get_parentController()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET))(this);
		}

		::System::Boolean get_Playing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PLAYING_OFFSET))(this);
		}

		::System::Void set_Playing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_PLAYING_OFFSET))(this, value);
		}

		::System::Boolean get_Ending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_ENDING_OFFSET))(this);
		}

		::System::Void set_Ending(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_ENDING_OFFSET))(this, value);
		}

		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* CreateUIQuestionsAnswerChatPlayWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerChatPlayWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerCardItemRowWidgetController* CreateUIQuestionsAnswerCardItemRowWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCARDITEMROWWIDGETCONTROLLER_OFFSET))(this);
		}

		::System::Boolean EnableCheetButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ENABLECHEETBUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Cancel(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANCEL_OFFSET))(this, callback);
		}

		::Cysharp::Threading::Tasks::UniTask PrepareStartGame(::System::Int32 stageId)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_PREPARESTARTGAME_OFFSET))(this, stageId);
		}

		::System::String* GetStartBlackText(::System::Int32 stageType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETSTARTBLACKTEXT_OFFSET))(this, stageType);
		}

		::System::String* GetFailBlackText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETFAILBLACKTEXT_OFFSET))(this);
		}

		::System::String* GetEndBlackText(::System::Int32 stageType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETENDBLACKTEXT_OFFSET))(this, stageType);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartGame(::System::Int32 stageId, ::System::Boolean restart)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTGAME_OFFSET))(this, stageId, restart);
		}

		::Cysharp::Threading::Tasks::UniTask BeforeStageNpc(::System::Int32 index)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_BEFORESTAGENPC_OFFSET))(this, index);
		}

		::Cysharp::Threading::Tasks::UniTask TryNextNpc(::System::Boolean skipScreen, ::System::Boolean firstNpc)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYNEXTNPC_OFFSET))(this, skipScreen, firstNpc);
		}

		::Cysharp::Threading::Tasks::UniTask WaitChat(::MoleMole::UIQuestionsAnswerChatPlayContext* context)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCHAT_OFFSET))(this, context);
		}

		::System::Boolean CheckChatFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CHECKCHATFINISH_OFFSET))(this);
		}

		::System::Void OnChatFinish(::MoleMole::UIQuestionsAnswerChatPlayContext* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuestionsAnswerChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHATFINISH_OFFSET))(this, obj);
		}

		::System::Void SetMaxHp(::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXHP_OFFSET))(this, max);
		}

		::UnityEngine::Color GetHpColor(::System::Int32 hp)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETHPCOLOR_OFFSET))(this, hp);
		}

		::System::Void SetHp(::System::Int32 hp, ::System::Boolean upanim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETHP_OFFSET))(this, hp, upanim);
		}

		::MoleMole::UIQuestionsAnswerCardItemRowWidgetController* GetBuffView(::System::Int32 buffIndex)
		{
			return ((::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFVIEW_OFFSET))(this, buffIndex);
		}

		::System::Int32 GetBuffTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFTOTALCOUNT_OFFSET))(this);
		}

		::System::Void InitBuffState(::System::Int32 stageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_INITBUFFSTATE_OFFSET))(this, stageId);
		}

		::System::Void SetCurrentScore(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETCURRENTSCORE_OFFSET))(this, score);
		}

		::System::Void SetMaxScore(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXSCORE_OFFSET))(this, score);
		}

		::System::Void LoadScoreImage(::Class_2_1A39E1B51756BF41* image, ::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_LOADSCOREIMAGE_OFFSET))(this, image, score);
		}

		::System::Void SetScoreText(::System::Collections::IList* array, ::System::Int32 value, ::System::Action_2<::System::Int32, ::System::Int32>* setFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETSCORETEXT_OFFSET))(this, array, value, setFunc);
		}

		::System::Void TryTriggerBuff(::System::Int32 buffIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYTRIGGERBUFF_OFFSET))(this, buffIndex);
		}

		::System::Void RefreshBuffLeftCount(::System::Int32 buffIndex, ::System::Boolean isAdd, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFLEFTCOUNT_OFFSET))(this, buffIndex, isAdd, anim);
		}

		::System::Void ResetBuffLeftCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFLEFTCOUNT_OFFSET))(this);
		}

		::System::Void ResetBuffState(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFSTATE_OFFSET))(this, anim);
		}

		::System::Void RefreshBuffState(::System::Int32 buffIndex, ::System::Boolean active, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET))(this, buffIndex, active, anim);
		}

		::System::Boolean CanActiveBuff(::System::Int32 buffIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_OFFSET))(this, buffIndex);
		}

		::System::Void TryActiveBuff(::System::Int32 buffIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYACTIVEBUFF_OFFSET))(this, buffIndex);
		}

		::System::Boolean CanActiveBuff_ConvertText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CONVERTTEXT_OFFSET))(this);
		}

		::System::Void ActiveBuff_ConvertText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CONVERTTEXT_OFFSET))(this);
		}

		::System::Boolean CanActiveBuff_CorrectOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CORRECTOPTION_OFFSET))(this);
		}

		::System::Void ActiveBuff_CorrectOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CORRECTOPTION_OFFSET))(this);
		}

		::System::Boolean CanActiveBuff_ExScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXSCORE_OFFSET))(this);
		}

		::System::Void ActiveBuff_ExScore(::System::Single exRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXSCORE_OFFSET))(this, exRate);
		}

		::System::Boolean CanActiveBuff_ExAddHp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXADDHP_OFFSET))(this);
		}

		::System::Void ActiveBuff_ExAddHp(::System::Int32 addHp, ::System::Int32 reduceHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXADDHP_OFFSET))(this, addHp, reduceHp);
		}

		::System::Void OnClickNarratorCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCLICKNARRATORCALLBACK_OFFSET))(this);
		}

		::System::Void ObBackCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_OBBACKCALLBACK_OFFSET))(this);
		}

		::System::Void OnRestartCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONRESTARTCALLBACK_OFFSET))(this);
		}

		::System::Void OnCheatSheetCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHEATSHEETCALLBACK_OFFSET))(this);
		}

		::System::Void StartScoreDoTween(::System::Int32 oldScore, ::System::Int32 target, ::System::Int32 doubleScoreFirstTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTSCOREDOTWEEN_OFFSET))(this, oldScore, target, doubleScoreFirstTarget);
		}

		::System::Void ShowFairy(::System::Int32 fairyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWFAIRY_OFFSET))(this, fairyId);
		}

		::System::Void ShowErrorFairy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWERRORFAIRY_OFFSET))(this);
		}

		::System::Void HideFairy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEFAIRY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitClickContinueBtn()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCLICKCONTINUEBTN_OFFSET))(this);
		}

		::System::Void ShowEmoji(::System::Int32 npcTag, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWEMOJI_OFFSET))(this, npcTag, path);
		}

		::System::Void FadeOutEmoji()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_FADEOUTEMOJI_OFFSET))(this);
		}

		::System::Void HideEmoji()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEEMOJI_OFFSET))(this);
		}

		::System::Void UpdateEmojiPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATEEMOJIPOS_OFFSET))(this);
		}

		::System::Boolean IsBlackScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ISBLACKSCREEN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitPlayBlackScreen()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREEN_OFFSET))(this);
		}

		::System::Void SetPlayBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETPLAYBLACKSCREEN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitPlayBlackScreenText(::System::String* textKey)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREENTEXT_OFFSET))(this, textKey);
		}

		::Cysharp::Threading::Tasks::UniTask WaitBlackscreenClick()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENCLICK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitBlackscreenFadeOut()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENFADEOUT_OFFSET))(this);
		}

		::System::Boolean NarratorPredicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_NARRATORPREDICATE_OFFSET))(this);
		}

		::System::Void _SetCurrentScore_b__67_0(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETCURRENTSCORE_B__67_0_OFFSET))(this, index, value);
		}

		::System::Void _SetMaxScore_b__68_0(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETMAXSCORE_B__68_0_OFFSET))(this, index, value);
		}

		::System::Void _ObBackCallback_b__87_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_0_OFFSET))(this);
		}

		::System::Void _ObBackCallback_b__87_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_1_OFFSET))(this);
		}

		::System::Void _OnRestartCallback_b__88_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_0_OFFSET))(this);
		}

		::System::Void _OnRestartCallback_b__88_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
