#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_06ECA6EE85840866;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140FFB20)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140FFB90)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x140FFD90)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x140FFEA0)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x140FFC50)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140FFF60)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x140FFF70)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14100010)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x141000B0)
#define MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x14100150)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRolePanelRowWidgetController_TypeDefinitionIndex = 45208;

	class UIZenkovRolePanelRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_06ECA6EE85840866* get__viewModel()
		{
			return ((::Class_3_06ECA6EE85840866*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnSetGlobalData(::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET))(this, globalData);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, globalData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnSetGlobalData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEPANELROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET))(this, P0);
		}
	};
}
