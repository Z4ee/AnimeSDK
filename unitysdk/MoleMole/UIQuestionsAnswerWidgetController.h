#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A39E1B51756BF41;
class Class_2_7B15B3118FE590CD_17;
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

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0x1560ACC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0x1560B3A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0x1560BF70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0x1560BBB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_BEFORESTAGENPC_OFFSET UNITYSDK_OFFSET(0x15608330)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0x1560A8F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_CORRECTOPTION_OFFSET UNITYSDK_OFFSET(0x1560AB40)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXADDHP_OFFSET UNITYSDK_OFFSET(0x1560AC60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_EXSCORE_OFFSET UNITYSDK_OFFSET(0x1560AC00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0x15609940)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CANCEL_OFFSET UNITYSDK_OFFSET(0x15607E60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CHECKCHATFINISH_OFFSET UNITYSDK_OFFSET(0x15608560)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCARDITEMROWWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15606540)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_CREATEUIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15606600)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ENABLECHEETBUTTON_OFFSET UNITYSDK_OFFSET(0x156066F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_FADEOUTEMOJI_OFFSET UNITYSDK_OFFSET(0x1560D8A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15606780)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x156067E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETENDBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x15608220)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETFAILBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x156081B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETHPCOLOR_OFFSET UNITYSDK_OFFSET(0x15608780)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GETSTARTBLACKTEXT_OFFSET UNITYSDK_OFFSET(0x156068E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_ENDING_OFFSET UNITYSDK_OFFSET(0x15606A00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15606960)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_GET_PLAYING_OFFSET UNITYSDK_OFFSET(0x156069E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEEMOJI_OFFSET UNITYSDK_OFFSET(0x1560D840)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_HIDEFAIRY_OFFSET UNITYSDK_OFFSET(0x15607420)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_INITBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x15608B90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ISBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x1560D980)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_LOADSCOREIMAGE_OFFSET UNITYSDK_OFFSET(0x156096B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_NARRATORPREDICATE_OFFSET UNITYSDK_OFFSET(0x1560DED0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_OBBACKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1560C490)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHATFINISH_OFFSET UNITYSDK_OFFSET(0x156085B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCHEATSHEETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1560C6B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCLICKNARRATORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1560C440)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156070C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15607150)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONRESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1560C5A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15607050)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15607480)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156076A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15606A20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15606FE0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_PREPARESTARTGAME_OFFSET UNITYSDK_OFFSET(0x156080D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x1560A380)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_REFRESHBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x1560A550)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x1560A770)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_RESETBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x1560A810)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x156092E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETHP_OFFSET UNITYSDK_OFFSET(0x15608880)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXHP_OFFSET UNITYSDK_OFFSET(0x15608610)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x156095F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x1560DA70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SETSCORETEXT_OFFSET UNITYSDK_OFFSET(0x156093A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_ENDING_OFFSET UNITYSDK_OFFSET(0x15606A10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SET_PLAYING_OFFSET UNITYSDK_OFFSET(0x156069F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0x1560D300)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWERRORFAIRY_OFFSET UNITYSDK_OFFSET(0x1560CEC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_SHOWFAIRY_OFFSET UNITYSDK_OFFSET(0x1560C330)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x156082A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_STARTSCOREDOTWEEN_OFFSET UNITYSDK_OFFSET(0x1560C880)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYACTIVEBUFF_OFFSET UNITYSDK_OFFSET(0x15609AB0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYNEXTNPC_OFFSET UNITYSDK_OFFSET(0x156083E0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_TRYTRIGGERBUFF_OFFSET UNITYSDK_OFFSET(0x15609750)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATEEMOJIPOS_OFFSET UNITYSDK_OFFSET(0x15607A90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15607740)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENCLICK_OFFSET UNITYSDK_OFFSET(0x1560DD90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITBLACKSCREENFADEOUT_OFFSET UNITYSDK_OFFSET(0x1560DE30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCHAT_OFFSET UNITYSDK_OFFSET(0x156084C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITCLICKCONTINUEBTN_OFFSET UNITYSDK_OFFSET(0x1560D260)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREENTEXT_OFFSET UNITYSDK_OFFSET(0x1560DCF0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER_WAITPLAYBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x1560D9D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15606250)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_0_OFFSET UNITYSDK_OFFSET(0x1560E0D0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__OBBACKCALLBACK_B__87_1_OFFSET UNITYSDK_OFFSET(0x1560E310)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_0_OFFSET UNITYSDK_OFFSET(0x1560E430)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__ONRESTARTCALLBACK_B__88_1_OFFSET UNITYSDK_OFFSET(0x1560E670)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETCURRENTSCORE_B__67_0_OFFSET UNITYSDK_OFFSET(0x1560DF20)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__SETMAXSCORE_B__68_0_OFFSET UNITYSDK_OFFSET(0x1560E050)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1560E7A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1560E830)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1560E8C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1560E960)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1560E970)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1560EA00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1560EA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController_TypeDefinitionIndex = 61861;

	class UIQuestionsAnswerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7B15B3118FE590CD_17* _view; // 0x2C0
		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* _chatPlayWidget; // 0x2C8
		::System::Boolean _chating; // 0x2D0
		::System::Int32 _selectIndex; // 0x2D4
		::Class_2_EC5A7AD641CF932C* _model; // 0x2D8
		::Class_2_D87A2A277909F333* _gameModel; // 0x2E0
		::System::Threading::CancellationTokenSource* _cancellationToken; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIQuestionsAnswerCardItemRowWidgetController*>* _skillWidgets; // 0x2F0
		::MoleMole::UIGeneralNewsBubbleWidgetController* _fairyWidget; // 0x2F8
		::System::Int32 _currentStageId; // 0x300
		::System::Int32 CurrentHp; // 0x304
		::System::Boolean _playing; // 0x308
		::System::Boolean _ending; // 0x309
		::DG::Tweening::Tween* _tween; // 0x310
		::Il2CppArray<::System::String*>* NumImagePath; // 0x318
		::System::Single _timer; // 0x320
		::System::Single _totalTime; // 0x324
		::System::Int32 _currentScore; // 0x328
		::System::Boolean _waitAnswering; // 0x32C
		::System::Single _exRage; // 0x330
		::System::Int32 _exAddHp; // 0x334
		::System::Int32 _exReduceHp; // 0x338
		::System::Boolean _blackscreen; // 0x33C
		::Il2CppArray<::System::Boolean>* _buffState; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* _buffIdList; // 0x348
		::Il2CppArray<::System::Int32>* _buffCount; // 0x350
		::UnityEngine::Vector3 _defaultEmojiPos; // 0x358
		::System::String* _soundLastState; // 0x368
		::System::UInt32 _currentVoicePendingId; // 0x370

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
