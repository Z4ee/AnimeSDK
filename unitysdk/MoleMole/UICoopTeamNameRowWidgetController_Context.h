#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_3_21B05F71874D603A;

#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT_GET_BRIEFINFO_OFFSET UNITYSDK_OFFSET(0x180428C0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180429A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeamNameRowWidgetController_Context_TypeDefinitionIndex = 89500;

	class UICoopTeamNameRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* _briefInfo; // 0x28
		::Class_3_21B05F71874D603A* FightInfo; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_1_BE6BF7909AD9D940* get_briefInfo()
		{
			return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT_GET_BRIEFINFO_OFFSET))(this);
		}
	};
}
