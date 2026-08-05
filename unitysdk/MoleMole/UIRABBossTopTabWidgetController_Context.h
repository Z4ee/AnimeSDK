#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7DE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossTopTabWidgetController_Context_TypeDefinitionIndex = 55277;

	class UIRABBossTopTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossChallengeId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
