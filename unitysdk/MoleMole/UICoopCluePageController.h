#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_C28CEB2A4B26C9A7.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E64AC454BBA9F160;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }

#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18AA8010)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AA8020)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AA8090)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18AA8130)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x18AA8230)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x18AA8300)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA8350)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AA8360)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18AA8400)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopCluePageController_TypeDefinitionIndex = 44970;

	class UICoopCluePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_E64AC454BBA9F160* get__viewModel()
		{
			return ((::Class_2_E64AC454BBA9F160*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void RegisterEvent(::Enum_3_C28CEB2A4B26C9A7 eventType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C28CEB2A4B26C9A7, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET))(this, eventType, callback);
		}

		::System::Void UnregisterEvent(::Enum_3_C28CEB2A4B26C9A7 eventType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C28CEB2A4B26C9A7))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET))(this, eventType);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
