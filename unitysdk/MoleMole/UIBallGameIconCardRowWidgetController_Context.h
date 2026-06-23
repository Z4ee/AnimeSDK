#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E589CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRowWidgetController_Context_TypeDefinitionIndex = 89514;

	class UIBallGameIconCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6F28FFD006F2B451* world; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
