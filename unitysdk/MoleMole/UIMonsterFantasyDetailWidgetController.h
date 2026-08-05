#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_24;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E08690)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E08720)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E085C0)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E08620)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_SETTITLEANDDESC_OFFSET UNITYSDK_OFFSET(0x17E087A0)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E08840)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E088A0)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E08930)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E089C0)
#define MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E08A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyDetailWidgetController_TypeDefinitionIndex = 91241;

	class UIMonsterFantasyDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_24* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTitleAndDesc(::System::String* title, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER_SETTITLEANDDESC_OFFSET))(this, title, desc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
