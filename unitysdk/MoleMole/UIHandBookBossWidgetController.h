#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5D048BBBEAD733B3;
class Class_2_208CC9941471731A_917;
class Class_2_3B0594C973D57E5F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18419AA0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1841A720)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18419440)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18419B30)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18418920)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18418D80)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHBOSSREWARD_OFFSET UNITYSDK_OFFSET(0x18419BB0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x18419000)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x18419620)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1841A770)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1841A850)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x1841A870)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1841A890)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1841A920)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1841A9C0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1841AA50)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1841AAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossWidgetController_TypeDefinitionIndex = 57344;

	class UIHandBookBossWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_208CC9941471731A_917* _entry; // 0x2C0
		::Class_2_3B0594C973D57E5F* _view; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_5D048BBBEAD733B3*>* _bossItems; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, _);
		}

		::System::Void RefreshRewardBuffView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET))(this);
		}

		::System::Void RefreshBossReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHBOSSREWARD_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
