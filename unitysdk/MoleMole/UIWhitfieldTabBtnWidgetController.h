#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3C98DD366DC01ECE;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0BD70)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0BEB0)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x15B0C1A0)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15B0C050)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B0BF70)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0BDE0)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0C260)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0C270)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x15B0C310)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15B0C3A0)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B0C430)
#define MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0C4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWhitfieldTabBtnWidgetController_TypeDefinitionIndex = 80656;

	class UIWhitfieldTabBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3C98DD366DC01ECE* get__viewModel()
		{
			return ((::Class_2_3C98DD366DC01ECE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
