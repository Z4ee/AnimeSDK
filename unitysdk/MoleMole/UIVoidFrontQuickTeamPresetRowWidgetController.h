#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_ADF5B506646BEC9A_1;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE855ED0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE856000)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xE8560C0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONSELECTROLEEVENT_OFFSET UNITYSDK_OFFSET(0xE8561D0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE855F40)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8562C0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE8562D0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xE856370)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE856410)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontQuickTeamPresetRowWidgetController_TypeDefinitionIndex = 59124;

	class UIVoidFrontQuickTeamPresetRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_ADF5B506646BEC9A_1* get__viewModel()
		{
			return ((::Class_2_ADF5B506646BEC9A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSelectRoleEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER_ONSELECTROLEEVENT_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMPRESETROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
