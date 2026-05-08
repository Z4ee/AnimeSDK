#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_F5BDF2292E685614;
class Class_2_00E0F6A4450214AA_4;
namespace MoleMole { class UIActivitySearchObjectContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_GET_SCANNERTARGETMAP_OFFSET UNITYSDK_OFFSET(0x152D6FD0)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D7090)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D7120)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152D6E10)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152D6E70)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x152D6EE0)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152D71A0)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D7200)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D7290)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152D7320)
#define MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152D73B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySearchObjectWidgetController_TypeDefinitionIndex = 48523;

	class UIActivitySearchObjectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_00E0F6A4450214AA_4* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetData(::MoleMole::UIActivitySearchObjectContext* activitySearchObjectContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivitySearchObjectContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_SETDATA_OFFSET))(this, activitySearchObjectContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_F5BDF2292E685614* get_scannerTargetMap()
		{
			return ((::Class_1_F5BDF2292E685614*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER_GET_SCANNERTARGETMAP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSEARCHOBJECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
