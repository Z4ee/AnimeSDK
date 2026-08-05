#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_4ADD0419C7E71A92;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x160DC400)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x160DABC0)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160DA950)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET UNITYSDK_OFFSET(0x160DBF50)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET UNITYSDK_OFFSET(0x160DC290)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x160DC350)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160DAD10)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160DA9E0)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_OPENDROPDOWNSELECT_OFFSET UNITYSDK_OFFSET(0x160DB2B0)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x160DB150)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x160DAD90)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x160DAF40)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160DC450)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONDROPDOWNCHANGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x160DC6B0)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0x160DC5D0)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET UNITYSDK_OFFSET(0x160DC640)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160DC880)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160DC910)
#define MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160DC7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingEnumWidgetController_TypeDefinitionIndex = 66648;

	class UISettingEnumWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4ADD0419C7E71A92* _view; // 0x2C0
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropdownSelect; // 0x2C8
		::System::Collections::Generic::List_1<::Struct_2_037D21AC29ED1130>* dropList; // 0x2D0
		::System::Boolean _isSettingOnUIDisable; // 0x2D8
		::MoleMole::ESystemSettingType _settingType; // 0x2DC
		::Enum_3_7FA27888FA17A22A _settingContentType; // 0x2E0
		::System::Int32 _hintVersion; // 0x2E4
		::System::Int32 _parentLayer; // 0x2E8
		::System::Boolean _isFromLoginPage; // 0x2EC
		::System::Int32 maxHeight; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _dropDownIndexMap; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OpenDropdownSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_OPENDROPDOWNSELECT_OFFSET))(this);
		}

		::System::Void OnDropDownChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void OnDynamicTipsClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET))(this);
		}

		::System::Void OnSettingOnUIDisableStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSettingOnUIDisableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET))(this);
		}

		::Class_2_4ADD0419C7E71A92* GetView()
		{
			return ((::Class_2_4ADD0419C7E71A92*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__2_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET))(this, args);
		}

		::System::Void _OnDropDownChange_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER__ONDROPDOWNCHANGE_B__10_0_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENUMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
