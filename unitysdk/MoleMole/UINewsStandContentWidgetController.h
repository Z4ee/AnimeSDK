#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_949134FE88CA671F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStyleWidgetController; }

#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_CREATESTYLEWIDGETNEW_OFFSET UNITYSDK_OFFSET(0x15F0AD40)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ENABLEFOCUS_OFFSET UNITYSDK_OFFSET(0x15F0B150)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F0AFE0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F0B070)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F0AB50)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x15F0B0F0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0B1B0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F0B210)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F0B2A0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F0B330)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandContentWidgetController_TypeDefinitionIndex = 51712;

	class UINewsStandContentWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_949134FE88CA671F* _view; // 0x2C0
		::MoleMole::UINewsStyleWidgetController* _styleWidget; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDetailWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET))(this);
		}

		::System::Void EnableFocus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ENABLEFOCUS_OFFSET))(this, enable);
		}

		::MoleMole::UINewsStyleWidgetController* CreateStyleWidgetNew(::System::Int32 style)
		{
			return ((::MoleMole::UINewsStyleWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_CREATESTYLEWIDGETNEW_OFFSET))(this, style);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
