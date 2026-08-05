#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3688AEE03FC427B3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1FC0AF00)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1FC0AF90)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1FC0AE10)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1FC0AE80)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1FC0B020)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1FC0B090)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0B3D0)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1FC0B430)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1FC0B4C0)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1FC0B550)
#define MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1FC0B5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpPropDataShotRowWidgetController_TypeDefinitionIndex = 94783;

	class UICpPropDataShotRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3688AEE03FC427B3* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void UpdateData(::System::String* name, ::System::String* icon, ::System::String* valueStr, ::System::String* desc, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER_UPDATEDATA_OFFSET))(this, name, icon, valueStr, desc, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPPROPDATASHOTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
