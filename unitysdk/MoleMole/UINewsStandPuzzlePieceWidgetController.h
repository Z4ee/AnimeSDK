#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_569219A648BABC87;
class Class_2_EF0B7B770198FEB2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x19886AC0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_COPYFROM_OFFSET UNITYSDK_OFFSET(0x19887370)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_CANDRAG_OFFSET UNITYSDK_OFFSET(0x19887CA0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x19887640)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x19885A00)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_ISCORRECT_OFFSET UNITYSDK_OFFSET(0x19886B80)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x198859F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_POS_OFFSET UNITYSDK_OFFSET(0x19887650)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x19887AF0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x198877F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19886530)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19887DF0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x198868F0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19886860)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONSWAP_OFFSET UNITYSDK_OFFSET(0x19887190)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19885E80)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198865C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19885A20)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19885E10)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONWIN_OFFSET UNITYSDK_OFFSET(0x19886EA0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_PLAYDRAGANIM_OFFSET UNITYSDK_OFFSET(0x19887670)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_RESETANIM_OFFSET UNITYSDK_OFFSET(0x19886F70)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x19887700)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x19885F20)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SET_POS_OFFSET UNITYSDK_OFFSET(0x19887660)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SWAP_1_OFFSET UNITYSDK_OFFSET(0x19887310)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SWAP_OFFSET UNITYSDK_OFFSET(0x19887040)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLECONSOLESELECTIMG_OFFSET UNITYSDK_OFFSET(0x19886C40)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLECONSOLESELECTSHOW_OFFSET UNITYSDK_OFFSET(0x19887470)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLEHOVER_OFFSET UNITYSDK_OFFSET(0x19887400)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19887F10)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONSWAP_B__36_0_OFFSET UNITYSDK_OFFSET(0x198880E0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x19887F70)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x19887F80)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19888120)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x198881B0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19888240)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19888250)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x198882E0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19888370)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzlePieceWidgetController_TypeDefinitionIndex = 57913;

	class UINewsStandPuzzlePieceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_569219A648BABC87* _view; // 0x2C0
		::MoleMole::MonoGamepadSelectable* _selectable; // 0x2C8
		::System::ValueTuple_2<::System::Int32, ::System::Int32> _Pos_k__BackingField; // 0x2D0
		::Class_2_EF0B7B770198FEB2* _data; // 0x2D8
		::UnityEngine::GameObject* curSelect; // 0x2E0
		::Foundation::AssetPath _currentFullImagePathForUV; // 0x2E8
		::System::Int32 _currentPuzzleSize; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger* get_EventTrigger()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_EVENTTRIGGER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetData(::Class_2_EF0B7B770198FEB2* data, ::System::ValueTuple_2<::System::Int32, ::System::Int32> pos, ::System::Boolean isWin, ::Foundation::AssetPath fullImagePath, ::System::Int32 puzzleSize)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EF0B7B770198FEB2*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Boolean, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SETDATA_OFFSET))(this, data, pos, isWin, fullImagePath, puzzleSize);
		}

		::System::Void OnWin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONWIN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		static ::System::Void Swap(::MoleMole::UINewsStandPuzzlePieceWidgetController* a, ::MoleMole::UINewsStandPuzzlePieceWidgetController* b, ::System::Boolean needAnim)
		{
			return ((::System::Void(*)(::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SWAP_OFFSET))(a, b, needAnim);
		}

		::System::Void Swap_1(::MoleMole::UINewsStandPuzzlePieceWidgetController* other, ::System::Boolean needAnim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SWAP_1_OFFSET))(this, other, needAnim);
		}

		::System::Void CopyFrom(::MoleMole::UINewsStandPuzzlePieceWidgetController* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_COPYFROM_OFFSET))(this, other);
		}

		::System::Void ToggleHover(::System::Boolean isHover)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLEHOVER_OFFSET))(this, isHover);
		}

		::System::Void ToggleConsoleSelectImg(::System::Boolean isMoving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLECONSOLESELECTIMG_OFFSET))(this, isMoving);
		}

		::System::Void ToggleConsoleSelectShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_TOGGLECONSOLESELECTSHOW_OFFSET))(this, isShow);
		}

		::Class_2_EF0B7B770198FEB2* get_Data()
		{
			return ((::Class_2_EF0B7B770198FEB2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_DATA_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> get_Pos()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::ValueTuple_2<::System::Int32, ::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_SET_POS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCorrect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_ISCORRECT_OFFSET))(this);
		}

		::System::Void PlayDragAnim(::System::Boolean isDragIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_PLAYDRAGANIM_OFFSET))(this, isDragIn);
		}

		::System::Void ResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_RESETANIM_OFFSET))(this);
		}

		::System::Void ResetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_RESETSELECTSTATE_OFFSET))(this);
		}

		::System::Void OnSwap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONSWAP_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_ONENDDRAG_OFFSET))(this, eventData, worldPoint);
		}

		::System::Boolean get_CanDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER_GET_CANDRAG_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__6_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONUIINIT_B__6_1_OFFSET))(this);
		}

		::System::Void _OnSwap_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER__ONSWAP_B__36_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPIECEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
