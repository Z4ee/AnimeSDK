#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_163;

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDE7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController_Context_TypeDefinitionIndex = 49750;

	class UICoopLevelRewardRowWidgetController_Context : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_163* Cfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
