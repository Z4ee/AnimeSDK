#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DE7300695EC5A9A2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3B9880F69C7CE2BB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1523A1F0)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1523A280)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1523A120)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1523A180)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1523A450)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1523A9D0)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1523AA30)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1523AAC0)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1523AB50)
#define MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1523ABE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBannerEntryWidgetController_TypeDefinitionIndex = 70586;

	class UIBannerEntryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3B9880F69C7CE2BB* _view; // 0x2C0
		::System::Int32 curSeason; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 id, ::Enum_3_DE7300695EC5A9A2 type, ::System::Int32 questid, ::System::Int32 topicid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_DE7300695EC5A9A2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, id, type, questid, topicid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANNERENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
