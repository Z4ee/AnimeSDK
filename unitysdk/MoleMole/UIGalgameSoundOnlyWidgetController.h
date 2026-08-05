#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_29;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1880CF90)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1880D080)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1880D110)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1880CFB0)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1880D010)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1880CFA0)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880D190)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1880D1F0)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1880D280)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1880D310)
#define MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1880D3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameSoundOnlyWidgetController_TypeDefinitionIndex = 65305;

	class UIGalgameSoundOnlyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NeedCache_k__BackingField; // 0x2C0
		::Class_2_60638234271CCDB8_29* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMESOUNDONLYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
