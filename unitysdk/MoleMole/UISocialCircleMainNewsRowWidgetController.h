#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_20;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10ED3DF0)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10ED3EC0)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10ED3F70)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10ED3E60)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED3FD0)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10ED3FE0)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10ED4080)
#define MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10ED4120)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainNewsRowWidgetController_TypeDefinitionIndex = 81030;

	class UISocialCircleMainNewsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_20* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINNEWSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
