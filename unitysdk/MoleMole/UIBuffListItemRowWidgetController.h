#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1DE31F486C9C83AD;
class Class_2_27C81EA3CFB263AC_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x19A91BC0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x19A91EB0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A91DA0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A91FE0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A91E30)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A91BD0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A91C30)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_SETMASK_OFFSET UNITYSDK_OFFSET(0x19A91F70)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A92830)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A92840)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A928D0)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A92970)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A92A00)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A92A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuffListItemRowWidgetController_TypeDefinitionIndex = 61634;

	class UIBuffListItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_27C81EA3CFB263AC_1* _view; // 0x2F0
		::Class_2_1DE31F486C9C83AD* towerModel; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_27C81EA3CFB263AC_1* get_View()
		{
			return ((::Class_2_27C81EA3CFB263AC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void SetMask(::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_SETMASK_OFFSET))(this, on);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
