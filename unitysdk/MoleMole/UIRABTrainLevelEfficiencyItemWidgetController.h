#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D6A7F864B88B42DF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABTrainLevelEfficiencyItemWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789DE40)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789DEB0)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1789DF50)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1789E010)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1789E200)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789E210)
#define MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1789E2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainLevelEfficiencyItemWidgetController_TypeDefinitionIndex = 84011;

	class UIRABTrainLevelEfficiencyItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D6A7F864B88B42DF* get__viewModel()
		{
			return ((::Class_2_D6A7F864B88B42DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIRABTrainLevelEfficiencyItemWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABTrainLevelEfficiencyItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELEFFICIENCYITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
