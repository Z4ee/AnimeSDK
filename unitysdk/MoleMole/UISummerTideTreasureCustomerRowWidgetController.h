#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D524607F1688FDC8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureCustomerRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15130DB0)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15130E20)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15130EC0)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15130F80)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15131100)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15131110)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151311B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCustomerRowWidgetController_TypeDefinitionIndex = 84783;

	class UISummerTideTreasureCustomerRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D524607F1688FDC8* get__viewModel()
		{
			return ((::Class_2_D524607F1688FDC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISummerTideTreasureCustomerRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureCustomerRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
