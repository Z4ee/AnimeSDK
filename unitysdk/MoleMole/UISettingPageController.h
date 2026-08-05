#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_129;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITabBtn03RowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISETTINGPAGECONTROLLER_CALSETTINGTYPEBYIDX_OFFSET UNITYSDK_OFFSET(0x1518E5F0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_CLEARNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1518D1A0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_CREATECONTENTAREABYTABTYPE_OFFSET UNITYSDK_OFFSET(0x1518E6A0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x1518DD10)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1518CA60)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1518CA50)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_HASCLOSED_OFFSET UNITYSDK_OFFSET(0x1518DDA0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1518CC30)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1518CA70)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1518EC40)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1518DCB0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONRESETBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1518E830)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1518D0F0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1518CB00)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1518D350)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1518D530)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_SWITCHCONTENTAREA_OFFSET UNITYSDK_OFFSET(0x1518DDE0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1518EE00)
#define MOLEMOLE_UISETTINGPAGECONTROLLER__INITVIEW_B__12_1_OFFSET UNITYSDK_OFFSET(0x1518EED0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER__INITVIEW_B__12_2_OFFSET UNITYSDK_OFFSET(0x1518EFA0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER__ONRESETBTNCLICKED_B__17_0_OFFSET UNITYSDK_OFFSET(0x1518F0A0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1518F170)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1518F210)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1518F240)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1518F2D0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1518F200)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1518F2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageController_TypeDefinitionIndex = 58388;

	class UISettingPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_129* _view; // 0x318
		::MoleMole::ESystemSettingType _curSystemSettingType; // 0x320
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::UIBaseController*>* _contentAreaWidgetDict; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowWidgetController*>* _tabWidgetList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* _outLevelSettingList; // 0x338
		::System::Collections::Generic::HashSet_1<::MoleMole::ESystemSettingType>* _clickedSettingTypeList; // 0x340
		::System::Boolean _isPlatformChanged; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		static ::System::Boolean HasClosed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_HASCLOSED_OFFSET))();
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SwitchContentArea(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_SWITCHCONTENTAREA_OFFSET))(this, idx);
		}

		::System::Void ClearNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_CLEARNOTIFICATION_OFFSET))(this);
		}

		::MoleMole::UIBaseController* CreateContentAreaByTabType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_CREATECONTENTAREABYTABTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType CalSettingTypeByIdx(::System::Int32 idx)
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_CALSETTINGTYPEBYIDX_OFFSET))(this, idx);
		}

		::System::Void OnResetBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONRESETBTNCLICKED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void _InitView_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER__INITVIEW_B__12_1_OFFSET))(this);
		}

		::System::Void _InitView_b__12_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER__INITVIEW_B__12_2_OFFSET))(this);
		}

		::System::Void _OnResetBtnClicked_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER__ONRESETBTNCLICKED_B__17_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
