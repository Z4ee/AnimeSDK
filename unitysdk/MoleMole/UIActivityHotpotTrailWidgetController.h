#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_759F9F5E10B92499;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_CLOSESELF_OFFSET UNITYSDK_OFFSET(0x16121CB0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16121D70)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16121E00)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x161221C0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x161219E0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16121D00)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x16122240)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETHIGHORLOW_OFFSET UNITYSDK_OFFSET(0x161220D0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x16122350)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16122400)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x161224A0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16122530)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x161225D0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16122660)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x161226F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotTrailWidgetController_TypeDefinitionIndex = 57205;

	class UIActivityHotpotTrailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_759F9F5E10B92499* _view; // 0x2C0
		::System::String* animKey; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void CloseSelf(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_CLOSESELF_OFFSET))(this, args);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHighOrLow(::System::Boolean highOrLow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETHIGHORLOW_OFFSET))(this, highOrLow);
		}

		::System::Void Sample(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET))(this, ratio);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET))(this, width);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
