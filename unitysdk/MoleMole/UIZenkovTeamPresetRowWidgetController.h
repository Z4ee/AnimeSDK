#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9CD85962E64D0FD6;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E53240)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E532B0)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E53370)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x11E53480)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E53530)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E53540)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E535E0)
#define MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x11E53680)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTeamPresetRowWidgetController_TypeDefinitionIndex = 71406;

	class UIZenkovTeamPresetRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9CD85962E64D0FD6* get__viewModel()
		{
			return ((::Class_2_9CD85962E64D0FD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSetGlobalData(::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET))(this, globalData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetGlobalData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTEAMPRESETROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET))(this, P0);
		}
	};
}
