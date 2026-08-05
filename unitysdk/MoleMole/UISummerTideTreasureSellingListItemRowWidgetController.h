#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C227CE3FE7C3ACB5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureSellingListItemRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET_DATAVALUE_OFFSET UNITYSDK_OFFSET(0x15F8B890)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F8B9D0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F8BA40)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F8BAE0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15F8BE80)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8BF30)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F8BF40)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F8BFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingListItemRowWidgetController_TypeDefinitionIndex = 44622;

	class UISummerTideTreasureSellingListItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* get_DataValue()
		{
			return ((::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET_DATAVALUE_OFFSET))(this);
		}

		::Class_2_C227CE3FE7C3ACB5* get__viewModel()
		{
			return ((::Class_2_C227CE3FE7C3ACB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
