#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_22C3916CA7EB557F;
class Class_2_70329613AC36F6ED;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16739080)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16738980)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x167390D0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16738FB0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16738A90)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16738A10)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167386B0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16738910)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_UPDATERED_OFFSET UNITYSDK_OFFSET(0x16738C80)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16739140)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x16739150)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x167391F0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x167392F0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16739300)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x16739390)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16739420)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167394B0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16739550)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167395E0)
#define MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16739670)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiGroupTabWidgetController_TypeDefinitionIndex = 66803;

	class UINyakichiGroupTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_70329613AC36F6ED* _view; // 0x2F0
		::Class_1_22C3916CA7EB557F* mData; // 0x2F8
		::MoleMole::UIGeneralPopUpHintWidgetController* hint; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void UpdateRed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_UPDATERED_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, arg);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIGROUPTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
