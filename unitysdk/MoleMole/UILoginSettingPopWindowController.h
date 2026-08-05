#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_864B40477E229EA3;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITabBtn03RowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_CALSETTINGTYPEBYIDX_OFFSET UNITYSDK_OFFSET(0x1862FCF0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_CREATECONTENTAREABYTABTYPE_OFFSET UNITYSDK_OFFSET(0x1862FDA0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1862E780)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1862E770)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1862E7E0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1862EAF0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1862F2B0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1862EBF0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONRESETBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1862F470)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONSETLANGUAGEVOICE_OFFSET UNITYSDK_OFFSET(0x1862FEE0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1862EB80)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1862E790)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1862EA80)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1862EC40)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_SWITCHCONTENTAREA_OFFSET UNITYSDK_OFFSET(0x1862F880)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18630160)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER__ONRESETBTNCLICKED_B__13_0_OFFSET UNITYSDK_OFFSET(0x18630170)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18630240)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x186302D0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18630300)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18630390)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186303A0)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186303B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginSettingPopWindowController_TypeDefinitionIndex = 86258;

	class UILoginSettingPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_864B40477E229EA3* _view; // 0x318
		::MoleMole::ESystemSettingType _curSystemSettingType; // 0x320
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::UIBaseController*>* _contentAreaWidgetDict; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowWidgetController*>* _tabWidgetList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* _loginSettingList; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnResetBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONRESETBTNCLICKED_OFFSET))(this);
		}

		::System::Void SwitchContentArea(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_SWITCHCONTENTAREA_OFFSET))(this, idx);
		}

		::MoleMole::UIBaseController* CreateContentAreaByTabType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_CREATECONTENTAREABYTABTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType CalSettingTypeByIdx(::System::Int32 idx)
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_CALSETTINGTYPEBYIDX_OFFSET))(this, idx);
		}

		::System::Void OnSetLanguageVoice(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER_ONSETLANGUAGEVOICE_OFFSET))(this, args);
		}

		::System::Void _OnResetBtnClicked_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER__ONRESETBTNCLICKED_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
