#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1DFDCDF18D17A125;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13030D00)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13030DD0)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x13031060)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13030E90)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13030D70)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13031220)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13031230)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x130312D0)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13031360)
#define MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13031400)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventRewardTabWidgetController_TypeDefinitionIndex = 68475;

	class UISummerEventRewardTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1DFDCDF18D17A125* get__viewModel()
		{
			return ((::Class_2_1DFDCDF18D17A125*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTREWARDTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
