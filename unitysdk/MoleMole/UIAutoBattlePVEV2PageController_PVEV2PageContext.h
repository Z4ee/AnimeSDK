#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_PVEV2PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19773A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController_PVEV2PageContext_TypeDefinitionIndex = 81479;

	class UIAutoBattlePVEV2PageController_PVEV2PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_PVEV2PAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
