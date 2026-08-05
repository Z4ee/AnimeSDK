#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E84F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController_Context_TypeDefinitionIndex = 93473;

	class UIBallGameIconCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6F28FFD006F2B451* world; // 0x28
		::System::Boolean FromOptions; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
