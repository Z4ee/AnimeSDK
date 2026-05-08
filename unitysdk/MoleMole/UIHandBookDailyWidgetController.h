#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_8C2EE9BE6ADE8BB7;
class Class_2_208CC9941471731A_520;
class Class_2_79AE422BA06F6D26_31;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15821A70)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x15821B80)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158213D0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15821B00)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15820750)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15820D00)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x15821040)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x158215B0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15821BD0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x15821CB0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x15821CD0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x15821CF0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET UNITYSDK_OFFSET(0x15821D60)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15821DD0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15821E60)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15821F00)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15821F90)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15822020)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController_TypeDefinitionIndex = 64015;

	class UIHandBookDailyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_208CC9941471731A_520* _entry; // 0x2B8
		::Class_2_79AE422BA06F6D26_31* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_8C2EE9BE6ADE8BB7*>* _bossItems; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, _);
		}

		::System::Void RefreshRewardBuffView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
