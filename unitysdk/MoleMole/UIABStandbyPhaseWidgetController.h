#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_21B962BB0A8CF0AA;
class Class_2_80486DA64C1484CD;
class Class_2_B4378B46E0020E85;
class Class_2_BCDF317F3D19390B;
class Class_2_C7387D40D4120A48_3;
class Class_2_C7387D40D4120A48_3_Class_2_890D3CC7D5F393B4;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIABInLevelShopWidgetController; }
namespace MoleMole { class UIABInLevelTipsWidgetController; }
namespace MoleMole { class UIABPlayerItemMoveScript; }
namespace MoleMole { class UIABStandbySlotItemWidgetController; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x18DFAC90)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x18DFC050)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_DRAGSTANDBYSLOT_OFFSET UNITYSDK_OFFSET(0x18DFC640)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETPLAYERITEMMOVESCRIPT_OFFSET UNITYSDK_OFFSET(0x18DF97D0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x18DFE0F0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BACKBTN_OFFSET UNITYSDK_OFFSET(0x18DF9B50)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x18DF9B30)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_DRAGPIECE_OFFSET UNITYSDK_OFFSET(0x18DF9B10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_ISSHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0x18DFEFC0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_LOCALGROUP_OFFSET UNITYSDK_OFFSET(0x18DF9B80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_RIGHTINFOROOT_OFFSET UNITYSDK_OFFSET(0x18DFE200)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOPWIDGET_OFFSET UNITYSDK_OFFSET(0x18DF8670)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOWSTARTBTN_OFFSET UNITYSDK_OFFSET(0x18DFA8C0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_HOVERONSTANDBYCTRL_OFFSET UNITYSDK_OFFSET(0x18DFC880)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ISINSELLAREA_OFFSET UNITYSDK_OFFSET(0x18DFBBE0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18DFF720)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONBANGBOOREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x18DFCC10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCHILDGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18DFE970)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18DF9920)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONLEVELBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18DFDA80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSERVERSORT_OFFSET UNITYSDK_OFFSET(0x18DF9340)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x18DFD1E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTARTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18DFCD30)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18DF99E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18DF8680)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18DF8FF0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_OPENCURPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x18DFEC30)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHRIGHTAREA_OFFSET UNITYSDK_OFFSET(0x18DFE220)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHSTATPANEL_OFFSET UNITYSDK_OFFSET(0x18DFF0E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SAVEFINALBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x18DFD490)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETLEVELBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18DFA630)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSELLPRICE_OFFSET UNITYSDK_OFFSET(0x18DFBDA0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSLIDER_OFFSET UNITYSDK_OFFSET(0x18DFDF90)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SET_DRAGPIECE_OFFSET UNITYSDK_OFFSET(0x18DF9B20)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TICKSTAT_OFFSET UNITYSDK_OFFSET(0x18DFF340)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEBOTTOM_OFFSET UNITYSDK_OFFSET(0x18DF9BB0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERFOCUS_OFFSET UNITYSDK_OFFSET(0x18DFEBC0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x18DFBEC0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESELLAREA_OFFSET UNITYSDK_OFFSET(0x18DFB8F0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_1_OFFSET UNITYSDK_OFFSET(0x18DFDB70)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_OFFSET UNITYSDK_OFFSET(0x18DFC1C0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TWEENSLIDER_OFFSET UNITYSDK_OFFSET(0x18DFDDB0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFFB70)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONBANGBOOREACHLIMIT_B__52_0_OFFSET UNITYSDK_OFFSET(0x18E00010)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONSTARTBTNCLICK_B__56_0_OFFSET UNITYSDK_OFFSET(0x18E00140)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONUIOPEN_B__27_0_OFFSET UNITYSDK_OFFSET(0x18DFFD60)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__OPENCURPLAYERINFO_B__69_0_OFFSET UNITYSDK_OFFSET(0x18E00160)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TOGGLESELLAREA_B__44_0_OFFSET UNITYSDK_OFFSET(0x18DFFF80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TWEENSLIDER_B__60_0_OFFSET UNITYSDK_OFFSET(0x18E00150)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E001E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E00270)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E00300)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E00390)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbyPhaseWidgetController_TypeDefinitionIndex = 45248;

	class UIABStandbyPhaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C7387D40D4120A48_3* _view; // 0x2C0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2C8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2D0
		::MoleMole::UIABInLevelShopWidgetController* _shopWidgetController; // 0x2D8
		::MoleMole::UIABInLevelTipsWidgetController* _errorTips; // 0x2E0
		::MoleMole::UIBangBooAutoBattleInLevelPageController* _parent; // 0x2E8
		::Class_2_C7387D40D4120A48_3_Class_2_890D3CC7D5F393B4* _lvlBtn; // 0x2F0
		::System::Boolean _isInNewbie1; // 0x2F8
		::System::Int32 _lvlUpPrice; // 0x2FC
		::Foundation::Coroutine::CoroutineHandle _lvlUpHandle; // 0x300
		::Foundation::Coroutine::CoroutineHandle _expUpHandle; // 0x304
		::Foundation::Coroutine::CoroutineHandle _playerRootHandle; // 0x308
		::Foundation::Coroutine::CoroutineHandle _statPanelHandle; // 0x30C
		::Foundation::Coroutine::CoroutineHandle _sellHandle; // 0x310
		::Foundation::Coroutine::CoroutineHandle _startBtnHandle; // 0x314
		::Foundation::Coroutine::CoroutineHandle _goldHandle; // 0x318
		::DG::Tweening::Tween* _expProgressTween; // 0x320
		::System::Double prevGold; // 0x328
		::System::Double prevExp; // 0x330
		::System::String* PROGRESS_FILL; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* playerRootPositions; // 0x340
		::System::Collections::Generic::List_1<::System::UInt32>* PlayerSortList; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIABPlayerItemMoveScript*>* _playerItemMoveScripts; // 0x350
		::MoleMole::MonoGamepadCustomList* _playerList; // 0x358
		::MoleMole::UIABStandbySlotItemWidgetController* _DragPiece_k__BackingField; // 0x360
		::MoleMole::UIABStandbySlotItemWidgetController* _curHovering; // 0x368
		::System::UInt32 _lastPlayerEntityId; // 0x370
		::Class_2_BCDF317F3D19390B* _damageStatViewModel; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UIABPlayerItemMoveScript*>* cache; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIABInLevelShopWidgetController* get_ShopWidget()
		{
			return ((::MoleMole::UIABInLevelShopWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOPWIDGET_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnServerSort(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSERVERSORT_OFFSET))(this, obj);
		}

		::MoleMole::UIABPlayerItemMoveScript* GetPlayerItemMoveScript(::System::UInt32 id)
		{
			return ((::MoleMole::UIABPlayerItemMoveScript*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETPLAYERITEMMOVESCRIPT_OFFSET))(this, id);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIABStandbySlotItemWidgetController* get_DragPiece()
		{
			return ((::MoleMole::UIABStandbySlotItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_DRAGPIECE_OFFSET))(this);
		}

		::System::Void set_DragPiece(::MoleMole::UIABStandbySlotItemWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABStandbySlotItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SET_DRAGPIECE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Bottom()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BOTTOM_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_BackBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BACKBTN_OFFSET))(this);
		}

		::System::UInt32 get_LocalGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_LOCALGROUP_OFFSET))(this);
		}

		::System::Void ToggleBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEBOTTOM_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void ToggleSellArea(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESELLAREA_OFFSET))(this, isShow);
		}

		::System::Boolean IsInSellArea(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ISINSELLAREA_OFFSET))(this, eventData);
		}

		::System::Void SetSellPrice(::System::Int32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSELLPRICE_OFFSET))(this, price);
		}

		::System::Void TogglePlayerInfo(::System::Boolean isShow, ::Class_2_80486DA64C1484CD* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_80486DA64C1484CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERINFO_OFFSET))(this, isShow, data);
		}

		::System::Void CancelSelect(::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_CANCELSELECT_OFFSET))(this, isForce);
		}

		::System::Void ToggleShop(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_OFFSET))(this, active);
		}

		::System::Void DragStandbySlot(::System::Boolean isDrag, ::Class_2_21B962BB0A8CF0AA* slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_21B962BB0A8CF0AA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_DRAGSTANDBYSLOT_OFFSET))(this, isDrag, slot);
		}

		::System::Void HoverOnStandbyCtrl(::System::Boolean isHover, ::MoleMole::UIABStandbySlotItemWidgetController* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIABStandbySlotItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_HOVERONSTANDBYCTRL_OFFSET))(this, isHover, target);
		}

		::System::Void OnBangbooReachLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONBANGBOOREACHLIMIT_OFFSET))(this);
		}

		::System::Boolean get_ShowStartBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOWSTARTBTN_OFFSET))(this);
		}

		::System::Void OnStartBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTARTBTNCLICK_OFFSET))(this);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Void OnLevelBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONLEVELBTNCLICK_OFFSET))(this);
		}

		::System::Void ToggleShop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_1_OFFSET))(this);
		}

		::DG::Tweening::Tween* TweenSlider(::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tween*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TWEENSLIDER_OFFSET))(this, endValue, duration);
		}

		::System::Void SetSlider(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSLIDER_OFFSET))(this, ratio);
		}

		::System::Single GetSliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETSLIDERVALUE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_RightInfoRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_RIGHTINFOROOT_OFFSET))(this);
		}

		::System::Void RefreshRightArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHRIGHTAREA_OFFSET))(this);
		}

		::System::Void OnChildGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCHILDGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void TogglePlayerFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void OpenCurPlayerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_OPENCURPLAYERINFO_OFFSET))(this);
		}

		::System::Boolean get_IsShowDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_ISSHOWDAMAGE_OFFSET))(this);
		}

		::System::Void RefreshStatPanel(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHSTATPANEL_OFFSET))(this, key);
		}

		::System::Void TickStat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TICKSTAT_OFFSET))(this);
		}

		::System::Void SaveFinalBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SAVEFINALBATTLERESULT_OFFSET))(this);
		}

		::System::Void SetLevelBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETLEVELBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__27_0(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONUIOPEN_B__27_0_OFFSET))(this, e);
		}

		::System::Void _ToggleSellArea_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TOGGLESELLAREA_B__44_0_OFFSET))(this);
		}

		::System::Void _OnBangbooReachLimit_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONBANGBOOREACHLIMIT_B__52_0_OFFSET))(this);
		}

		::System::Void _OnStartBtnClick_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONSTARTBTNCLICK_B__56_0_OFFSET))(this);
		}

		::System::Void _TweenSlider_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TWEENSLIDER_B__60_0_OFFSET))(this);
		}

		::System::Boolean _OpenCurPlayerInfo_b__69_0(::MoleMole::ScrollViewItemWidgetController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__OPENCURPLAYERINFO_B__69_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
