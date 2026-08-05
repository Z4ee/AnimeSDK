#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_DF9CFE700444A572;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureSellPrepareRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x119F98C0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x119F9930)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x119F99D0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x119F9A90)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x119F9C10)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x119F9C20)
#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x119F9CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellPrepareRowWidgetController_TypeDefinitionIndex = 63056;

	class UISummerTideTreasureSellPrepareRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DF9CFE700444A572* get__viewModel()
		{
			return ((::Class_2_DF9CFE700444A572*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISummerTideTreasureSellPrepareRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellPrepareRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
