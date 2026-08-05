#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_0A0B50D6899733CD;
class Class_2_79AE422BA06F6D26_149;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18630440)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18630A50)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x186306A0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18630BB0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186304D0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18630630)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x18630F20)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x18631800)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18630760)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18630950)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_SETGOTSTATE_OFFSET UNITYSDK_OFFSET(0x18630C10)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x18630AA0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186323C0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x186323D0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x18632520)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x18632850)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18632A50)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18632AE0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18632B70)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18632C10)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18632CA0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18632D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailWidgetController_TypeDefinitionIndex = 55425;

	class UIMailWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_149* _view; // 0x2F0
		::Class_1_0A0B50D6899733CD* mail; // 0x2F8
		::System::UInt32 uid; // 0x300
		::MoleMole::UIGeneralPopUpHintWidgetController* _hint; // 0x308
		::MoleMole::UIGeneralNewHintWidgetController* _new; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetGotState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_SETGOTSTATE_OFFSET))(this, state);
		}

		::System::Void RefreshView(::Class_1_0A0B50D6899733CD* mail)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A0B50D6899733CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, mail);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this);
		}

		::System::Void RefreshView_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, state);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
