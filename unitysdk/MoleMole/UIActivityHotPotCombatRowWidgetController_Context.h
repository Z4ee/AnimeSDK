#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_51BD36EB927EE4CA;

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0FDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatRowWidgetController_Context_TypeDefinitionIndex = 84975;

	class UIActivityHotPotCombatRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_51BD36EB927EE4CA* Data; // 0x28
		::System::Single RankPercent; // 0x30
		::System::Int32 HotpotLevelID; // 0x34
		::System::Int32 BestScore; // 0x38
		::System::Int32 Rank; // 0x3C
		::System::Boolean FirstClick; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
