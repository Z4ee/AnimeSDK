#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E121AB78369DCE9A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureSellingBuffRowWidgetController_Item_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16779F50)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16779FC0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1677A060)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1677A120)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1677A2A0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1677A2B0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1677A350)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingBuffRowWidgetController_Item_TypeDefinitionIndex = 52684;

	class UISummerTideTreasureSellingBuffRowWidgetController_Item : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM__CTOR_OFFSET))(this);
		}

		::Class_2_E121AB78369DCE9A* get__viewModel()
		{
			return ((::Class_2_E121AB78369DCE9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController_Item_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController_Item_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_ITEM___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
