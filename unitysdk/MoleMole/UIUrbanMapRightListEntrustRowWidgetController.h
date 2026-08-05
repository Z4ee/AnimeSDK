#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3E80FFA2373431C2;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D77F80)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D77FF0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D78300)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D78090)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D784C0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D784D0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D78570)
#define MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D78600)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListEntrustRowWidgetController_TypeDefinitionIndex = 41622;

	class UIUrbanMapRightListEntrustRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3E80FFA2373431C2* get__viewModel()
		{
			return ((::Class_2_3E80FFA2373431C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTENTRUSTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
