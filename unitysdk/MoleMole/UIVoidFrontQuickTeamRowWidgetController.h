#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5C21881CAA9AD0CE;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0B7E0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0B850)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONSELECTROLEEVENT_OFFSET UNITYSDK_OFFSET(0x15B0BAA0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x15B0B910)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0B9E0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0BB40)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0BBA0)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x15B0BC40)
#define MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0BCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontQuickTeamRowWidgetController_TypeDefinitionIndex = 49052;

	class UIVoidFrontQuickTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5C21881CAA9AD0CE* get__viewModel()
		{
			return ((::Class_2_5C21881CAA9AD0CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, globalData);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSelectRoleEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER_ONSELECTROLEEVENT_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTQUICKTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
