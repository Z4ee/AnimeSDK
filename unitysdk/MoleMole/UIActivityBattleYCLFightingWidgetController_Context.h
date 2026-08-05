#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E5210)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLFightingWidgetController_Context_TypeDefinitionIndex = 89031;

	class UIActivityBattleYCLFightingWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 activityBattleType; // 0x28
		::System::Int32 activityID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
