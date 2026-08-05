#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E220A574EC6EAAF3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovDetailMissionRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1BF70)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1BFE0)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A1C080)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11A1C140)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1C2C0)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1C2D0)
#define MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11A1C370)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDetailMissionRowWidgetController_TypeDefinitionIndex = 65258;

	class UIZenkovDetailMissionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_E220A574EC6EAAF3* get__viewModel()
		{
			return ((::Class_2_E220A574EC6EAAF3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovDetailMissionRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovDetailMissionRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
