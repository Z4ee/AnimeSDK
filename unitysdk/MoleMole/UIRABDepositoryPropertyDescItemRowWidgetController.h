#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_298695C5EB0244B2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABDepositoryPropertyDescItemRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D38AA0)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D38B10)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D38BB0)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17D38C70)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38DF0)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D38E00)
#define MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D38EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryPropertyDescItemRowWidgetController_TypeDefinitionIndex = 70601;

	class UIRABDepositoryPropertyDescItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_298695C5EB0244B2* get__viewModel()
		{
			return ((::Class_2_298695C5EB0244B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIRABDepositoryPropertyDescItemRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABDepositoryPropertyDescItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYPROPERTYDESCITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
