#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_572;
class Class_1_0FA8F14599316CF9;

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_Context_TypeDefinitionIndex = 59346;

	class UIGeneralRoleSelectListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0FA8F14599316CF9* TeamRowContext; // 0x28
		::Class_0_16E4307DCC419505_572* DataSource; // 0x30
		::System::Boolean ShowPreset; // 0x38
		::System::Boolean EnableSpecial; // 0x39
		::System::Boolean ShowBuddy; // 0x3A
		::Enum_3_AEB18F409410ABC4 InitialMode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
