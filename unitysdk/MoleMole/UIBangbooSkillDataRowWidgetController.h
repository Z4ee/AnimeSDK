#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_52D7D0A9B3EFD5B8_2;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176D4E60)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176D4EF0)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0x176D4F70)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D5020)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176D5080)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176D5110)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooSkillDataRowWidgetController_TypeDefinitionIndex = 54134;

	class UIBangbooSkillDataRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_52D7D0A9B3EFD5B8_2* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetInfo(::System::String* des, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_SETINFO_OFFSET))(this, des, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
