#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_D2F9C9EC7859C427.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_928A3C549784FC97.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_C5FDB00B12827EE9;
class Class_2_79F6D62CE30E3F8E_84;
namespace MoleMole { class BangbooBaseWidget; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBangbooDevelopDialogContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15AC0640)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15AC0630)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x15AC24B0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0x15AC2F00)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x15AC2E60)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AC0BA0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x15AC1900)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONLEVELUPRSP_OFFSET UNITYSDK_OFFSET(0x15AC1D90)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AC0EE0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AC1A90)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AC0650)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_RESETCONTEXT_OFFSET UNITYSDK_OFFSET(0x15AC1640)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x15AC2400)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETATTRIBUTEUI_OFFSET UNITYSDK_OFFSET(0x15AC2560)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETSTARUPORTOPLIMITATT_OFFSET UNITYSDK_OFFSET(0x15AC2A70)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x15AC1EF0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETUPGRADESTATE_OFFSET UNITYSDK_OFFSET(0x15AC2E00)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET UNITYSDK_OFFSET(0x15AC1C80)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x15AC11F0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC2FF0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER__SHOWBACKITEMLISTDIALOG_B__12_0_OFFSET UNITYSDK_OFFSET(0x15AC30E0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AC31A0)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AC3230)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AC3240)
#define MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AC3250)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDevelopPopWindowController_TypeDefinitionIndex = 57240;

	class UIBangbooDevelopPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_84* _view; // 0x310
		::MoleMole::UIWidgetController* _curSubController; // 0x318
		::MoleMole::UIBangbooDevelopDialogContext* _context; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::BangbooBaseWidget*>* _subControllers; // 0x328
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _curPropertyItemViews; // 0x330
		::Struct_2_928A3C549784FC97 currentUpgradeAniState; // 0x338
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* backItemList; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::ScrollViewItemWidgetController*>* starAttributes; // 0x348
		::System::Int32 _consumeItemID; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ResetContext(::MoleMole::UIBangbooDevelopDialogContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangbooDevelopDialogContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_RESETCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLevelUpRsp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONLEVELUPRSP_OFFSET))(this, args);
		}

		::System::Void ShowBackItemListDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SHOWBACKITEMLISTDIALOG_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void LeftBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_LEFTBTNCALL_OFFSET))(this);
		}

		::System::Void SetAttributeUI(::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>* before, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>* after, ::Enum_3_D2F9C9EC7859C427 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::Enum_3_D2F9C9EC7859C427))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETATTRIBUTEUI_OFFSET))(this, before, after, type);
		}

		::System::Void SetUpgradeState(::Enum_3_D2F9C9EC7859C427 type, ::System::Boolean isPlayAni)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D2F9C9EC7859C427, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETUPGRADESTATE_OFFSET))(this, type, isPlayAni);
		}

		::System::Void SetStarUpOrTopLimitAtt(::Enum_3_D2F9C9EC7859C427 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D2F9C9EC7859C427))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETSTARUPORTOPLIMITATT_OFFSET))(this, type);
		}

		::System::Void SetTitle(::System::Int32 subType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET))(this, subType);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void _ShowBackItemListDialog_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER__SHOWBACKITEMLISTDIALOG_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
