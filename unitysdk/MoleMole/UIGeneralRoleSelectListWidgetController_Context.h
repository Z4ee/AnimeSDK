#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_204;
class Class_1_C77B56388E6C9599;

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x155B9F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_Context_TypeDefinitionIndex = 40137;

	class UIGeneralRoleSelectListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_204* DataSource; // 0x28
		::Class_1_C77B56388E6C9599* TeamRowContext; // 0x30
		::Enum_3_AEB18F409410ABC4 InitialMode; // 0x38
		::System::Boolean EnableSpecial; // 0x3C
		::System::Boolean ShowBuddy; // 0x3D
		::System::Boolean ShowPreset; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
