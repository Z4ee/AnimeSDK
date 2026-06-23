#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_689;
class Class_2_28BDF4B69EE93815;
class Class_3_D7522358EDC47E3C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINewsStandPuzzleGameContext; }
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17879610)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x1787E1C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GENFINISHREQ_OFFSET UNITYSDK_OFFSET(0x1787B890)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CHAPTERS_OFFSET UNITYSDK_OFFSET(0x17876DE0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x17876D40)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_ISCURCHAPTERCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1787BFE0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0x17876DF0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCHAPTERVIEW_OFFSET UNITYSDK_OFFSET(0x1787DF80)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCURCHAPTERPIECES_OFFSET UNITYSDK_OFFSET(0x1787C710)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x17877B60)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1787A460)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCONSOLEMOVING_OFFSET UNITYSDK_OFFSET(0x1787A0C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17878220)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1787A830)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1787AEB0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x178784D0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17878CF0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17878F00)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x178782B0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x178771C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17878C70)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17876EB0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17877150)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHROWONWIN_OFFSET UNITYSDK_OFFSET(0x1787E760)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x1787DFE0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_RESETCHAPTERCACHE_OFFSET UNITYSDK_OFFSET(0x1787C160)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x17879C40)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISHONCLOSE_OFFSET UNITYSDK_OFFSET(0x1787B490)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISH_OFFSET UNITYSDK_OFFSET(0x1787B710)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SETTOPTABINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x178772C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_STOPSELECTFORCONSOLE_OFFSET UNITYSDK_OFFSET(0x17878D80)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SWAPPIECES_OFFSET UNITYSDK_OFFSET(0x1787A140)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLECHAPTER_OFFSET UNITYSDK_OFFSET(0x1787E420)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLEPREVIEW_OFFSET UNITYSDK_OFFSET(0x17878A20)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1787E830)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_0_OFFSET UNITYSDK_OFFSET(0x1787E890)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_1_OFFSET UNITYSDK_OFFSET(0x1787E8A0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_2_OFFSET UNITYSDK_OFFSET(0x1787E8B0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_3_OFFSET UNITYSDK_OFFSET(0x1787E8C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_4_OFFSET UNITYSDK_OFFSET(0x1787E990)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1787EBC0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1787EC50)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1787ECE0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1787ED10)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1787EDA0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1787EE30)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1787EED0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1787EF60)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1787EFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController_TypeDefinitionIndex = 52452;

	class UINewsStandPuzzleGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_28BDF4B69EE93815* _view; // 0x2C0
		::MoleMole::UINewsStandPuzzleGameContext* _context; // 0x2C8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_689*>* chapters; // 0x2D0
		::System::Int32 currentChapterIdx; // 0x2D8
		::System::Int32 currentSize; // 0x2DC
		::System::Collections::Generic::List_1<::MoleMole::UINewsStandPuzzlePieceWidgetController*>* pieceWidgets; // 0x2E0
		::System::Int32 curSelectedPiece; // 0x2E8
		::Il2CppArray<::System::Int64>* startTime; // 0x2F0
		::Il2CppArray<::System::Int64>* duration; // 0x2F8
		::Il2CppArray<::System::Int32>* moveCount; // 0x300
		::Il2CppArray<::System::Int32>* previewCount; // 0x308
		::System::Boolean isPreviewing; // 0x310
		::System::Boolean _isDragging; // 0x311
		::MoleMole::UINewsStandPuzzlePieceWidgetController* dragPiece; // 0x318
		::MoleMole::UINewsStandPuzzlePieceWidgetController* hoverPiece; // 0x320
		::Foundation::Coroutine::CoroutineHandle _dragCoroutine; // 0x328
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* curShuffles; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentChapter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CURRENTCHAPTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_689*>* get_Chapters()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_689*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_CHAPTERS_OFFSET))(this);
		}

		::UnityEngine::Color get_PressedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_PRESSEDCOLOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean StopSelectForConsole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_STOPSELECTFORCONSOLE_OFFSET))(this);
		}

		::System::Void SelectWidget(::System::Int32 r, ::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SELECTWIDGET_OFFSET))(this, r, c);
		}

		::System::Void OnBeginDrag(::MoleMole::UINewsStandPuzzlePieceWidgetController* cur, ::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET))(this, cur, eventData, worldPoint);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONDRAG_OFFSET))(this, eventData, delta);
		}

		::System::Void OnEndDrag(::MoleMole::UINewsStandPuzzlePieceWidgetController* start, ::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONENDDRAG_OFFSET))(this, start, eventData, worldPoint);
		}

		::System::Void SendFinishOnClose(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISHONCLOSE_OFFSET))(this, cb);
		}

		::System::Void SendFinish(::System::Action* cb, ::System::Action* errorCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SENDFINISH_OFFSET))(this, cb, errorCb);
		}

		::System::Boolean get_IsCurChapterComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GET_ISCURCHAPTERCOMPLETE_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void ResetChapterCache(::System::Int32 chapterId, ::System::Boolean isResetBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_RESETCHAPTERCACHE_OFFSET))(this, chapterId, isResetBtn);
		}

		::System::Void InitCurChapterPieces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCURCHAPTERPIECES_OFFSET))(this);
		}

		::System::Void InitChapterView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_INITCHAPTERVIEW_OFFSET))(this);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void SetTopTabInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SETTOPTABINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void RefreshTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHTAB_OFFSET))(this);
		}

		::System::Void ToggleChapter(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLECHAPTER_OFFSET))(this, idx);
		}

		::System::Void SwapPieces(::System::Int32 r1, ::System::Int32 c1, ::System::Int32 r2, ::System::Int32 c2, ::System::Boolean needAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_SWAPPIECES_OFFSET))(this, r1, c1, r2, c2, needAnim);
		}

		::System::Void CheckComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_CHECKCOMPLETE_OFFSET))(this);
		}

		::System::Void RefreshRowOnWin(::System::Int32 row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_REFRESHROWONWIN_OFFSET))(this, row);
		}

		::System::Void TogglePreview(::System::Boolean isPreview)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_TOGGLEPREVIEW_OFFSET))(this, isPreview);
		}

		::Class_3_D7522358EDC47E3C* GenFinishReq()
		{
			return ((::Class_3_D7522358EDC47E3C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_GENFINISHREQ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* OnConsoleMoving()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER_ONCONSOLEMOVING_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__25_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_0_OFFSET))(this, idx);
		}

		::System::Void _OnUIInit_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__25_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__25_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__25_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER__ONUIINIT_B__25_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
