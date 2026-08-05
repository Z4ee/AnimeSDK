#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_778269C04A91AE39;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovProfessionRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E6ED90)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E6EE00)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E6EEA0)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12E6EF60)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x12E6F0E0)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6F1A0)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12E6F1B0)
#define MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E6F250)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovProfessionRowWidgetController_TypeDefinitionIndex = 90797;

	class UIZenkovProfessionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_778269C04A91AE39* get__viewModel()
		{
			return ((::Class_2_778269C04A91AE39*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovProfessionRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovProfessionRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPROFESSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
