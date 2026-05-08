#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPCOMBATREADINESSPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15784940)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopCombatReadinessPageController_Context_TypeDefinitionIndex = 52216;

	class UICoopCombatReadinessPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCOMBATREADINESSPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
