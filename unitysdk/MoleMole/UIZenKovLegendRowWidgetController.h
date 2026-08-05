#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_87D5B7B52F934DAE;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E53F00)
#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E53F70)
#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E54010)
#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E541E0)
#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E541F0)
#define MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E54290)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenKovLegendRowWidgetController_TypeDefinitionIndex = 74058;

	class UIZenKovLegendRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_87D5B7B52F934DAE* get__viewModel()
		{
			return ((::Class_2_87D5B7B52F934DAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
