#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_569;

#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x195F4340)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTaskWidgetController_Context_TypeDefinitionIndex = 84356;

	class UIGeneralBattleQuickTaskWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_569* challengeConfig; // 0x28
		::System::Int32 levelAbilityId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
