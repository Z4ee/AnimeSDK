#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A03C9A14CD8D41B5_4;
class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_986953AB48EA4317;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1932A7C0)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1932A8E0)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1932A850)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1932A680)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1932A940)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1932A950)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1932A9E0)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1932AA80)
#define MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1932AB10)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaReportTypeWidgetController_TypeDefinitionIndex = 49579;

	class UICinemaReportTypeWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_986953AB48EA4317* _view; // 0x2F0
		::Class_1_A03C9A14CD8D41B5_4* itemData; // 0x2F8
		::Class_1_E5C5FCDBF5C3BDAC* progressHandler; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
