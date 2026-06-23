#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIHadalZone_RewardV2_PopWindowController_HadalRewardData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_C6E5760570AAB360;
class Class_3_025FF4981524A424_164;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_RewardRowV2_WidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x167040B0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16702C10)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16703BC0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16704510)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16703C50)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16702C20)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16702D40)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CREATEROWLAYERREWARD_OFFSET UNITYSDK_OFFSET(0x16704410)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CREATEROWLAYERTITLE_OFFSET UNITYSDK_OFFSET(0x16704360)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16704C00)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GAMEPADITEMSUBMIT_OFFSET UNITYSDK_OFFSET(0x16704920)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GAMEPADSELECTNAVLISTITEM_OFFSET UNITYSDK_OFFSET(0x167045F0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GETCURGAMEPADSELECTROW_OFFSET UNITYSDK_OFFSET(0x16704980)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__INITGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x167041B0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONEKEYGETREWARD_OFFSET UNITYSDK_OFFSET(0x16703CC0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONSCROLLEND_OFFSET UNITYSDK_OFFSET(0x16704320)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONSCROLL_OFFSET UNITYSDK_OFFSET(0x167042B0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x16704C70)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONUIOPEN_B__5_1_OFFSET UNITYSDK_OFFSET(0x16704C80)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__UPDATEONEKEYSTATUS_OFFSET UNITYSDK_OFFSET(0x16703840)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__UPDATEREWARDS_OFFSET UNITYSDK_OFFSET(0x16702F50)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16704E30)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16704EC0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16704EF0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16704F00)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16704F10)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___CREATEROWLAYERREWARD_B__16_0_OFFSET UNITYSDK_OFFSET(0x16704E20)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___ONEKEYGETREWARD_B__9_0_OFFSET UNITYSDK_OFFSET(0x16704C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV2_PopWindowController_TypeDefinitionIndex = 81899;

	class UIHadalZone_RewardV2_PopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 GROUP_TOTAL_ITEM_COUNT = 0x4; // 0x0
		// static const ::System::Int32 GROUP_REAL_ITEM_COUNT = 0x3; // 0x0
		::Class_2_C6E5760570AAB360* _view; // 0x318
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_RewardV2_PopWindowController_HadalRewardData>* listData; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateOneKeyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__UPDATEONEKEYSTATUS_OFFSET))(this);
		}

		::System::Void _OneKeyGetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONEKEYGETREWARD_OFFSET))(this);
		}

		::System::Void _UpdateRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__UPDATEREWARDS_OFFSET))(this);
		}

		::System::Void _OnScroll(::MonoUITableScrollV2_MoveContext v, ::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONSCROLL_OFFSET))(this, v, f);
		}

		::System::Void _OnScrollEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONSCROLLEND_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _CreateRowLayerTitle(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CREATEROWLAYERTITLE_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* _CreateRowLayerReward(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__CREATEROWLAYERREWARD_OFFSET))(this, controlReference);
		}

		::System::Int32 GetTemplateIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_GETTEMPLATEINDEX_OFFSET))(this, dataIndex);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void _GamepadSelectNavListItem(::MoleMole::InputLogicEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GAMEPADSELECTNAVLISTITEM_OFFSET))(this, type);
		}

		::System::Void _GamepadItemSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GAMEPADITEMSUBMIT_OFFSET))(this);
		}

		::MoleMole::UIHadalZone_RewardRowV2_WidgetController* _GetCurGamePadSelectRow()
		{
			return ((::MoleMole::UIHadalZone_RewardRowV2_WidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__GETCURGAMEPADSELECTROW_OFFSET))(this);
		}

		::System::Void _InitGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__INITGAMEPADSELECT_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER__ONUIOPEN_B__5_1_OFFSET))(this);
		}

		::System::Void __OneKeyGetReward_b__9_0(::Class_3_025FF4981524A424_164* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_164*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___ONEKEYGETREWARD_B__9_0_OFFSET))(this, rsp);
		}

		::System::Void __CreateRowLayerReward_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___CREATEROWLAYERREWARD_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
