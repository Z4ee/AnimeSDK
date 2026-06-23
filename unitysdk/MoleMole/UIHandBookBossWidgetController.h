#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5D048BBBEAD733B3;
class Class_2_208CC9941471731A_940;
class Class_2_3B0594C973D57E5F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1846A350)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1846B140)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18469D00)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1846A3E0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184691E0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18469640)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHBOSSREWARD_OFFSET UNITYSDK_OFFSET(0x1846A460)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x184698C0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0x18469EE0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1846B190)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1846B270)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x1846B290)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1846B2B0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1846B340)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1846B3E0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1846B470)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1846B500)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossWidgetController_TypeDefinitionIndex = 76017;

	class UIHandBookBossWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_208CC9941471731A_940* _entry; // 0x2C0
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
