#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_241;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17559BB0)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x17559D60)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17559CC0)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17558D80)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17559C40)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17558A30)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17559DF0)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x17559E00)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17559E60)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x17559EF0)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17559F80)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1755A010)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1755A0B0)
#define MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1755A140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyTabWidgetController_TypeDefinitionIndex = 70278;

	class UIMonsterFantasyTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_241* _view; // 0x2F0
		::System::Action_1<::System::Int32>* OnSelect; // 0x2F8
		::System::Int32 _index; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
