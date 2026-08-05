#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterFantasyResultRowWidgetController_RowData.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_754022533D501C3E_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18676520)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186765B0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18676450)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186764B0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18676630)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18676790)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186767F0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18676880)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18676910)
#define MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186769A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyResultRowWidgetController_TypeDefinitionIndex = 84293;

	class UIMonsterFantasyResultRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData rowData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rowData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
