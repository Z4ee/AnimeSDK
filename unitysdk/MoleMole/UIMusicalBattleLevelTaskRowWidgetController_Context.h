#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15108840)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelTaskRowWidgetController_Context_TypeDefinitionIndex = 38415;

	class UIMusicalBattleLevelTaskRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Int32>* QuestId; // 0x28
		::System::Int32 Index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
