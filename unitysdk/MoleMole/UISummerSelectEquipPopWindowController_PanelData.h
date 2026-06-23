#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UISUMMERSELECTEQUIPPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16545990)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectEquipPopWindowController_PanelData_TypeDefinitionIndex = 51459;

	class UISummerSelectEquipPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title2; // 0x28
		::System::String* Title; // 0x30
		::System::Int32 LevelId; // 0x38
		::System::Boolean IsShooting; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTEQUIPPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
