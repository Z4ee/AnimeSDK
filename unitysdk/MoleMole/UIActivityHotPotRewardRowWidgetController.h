#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_23F38D4E4D720E34;
namespace MoleMole { class UIActivityHotPotRewardRowWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x196F09D0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x196F0A40)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x196F0AE0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x196F0BA0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196F0C50)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x196F0C60)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x196F0D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotRewardRowWidgetController_TypeDefinitionIndex = 78424;

	class UIActivityHotPotRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_23F38D4E4D720E34* get__viewModel()
		{
			return ((::Class_2_23F38D4E4D720E34*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIActivityHotPotRewardRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotRewardRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
