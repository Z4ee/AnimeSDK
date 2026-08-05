#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_5_4B10204F20C4D73A_1;

#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA6680)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultPopWindowController_Context_TypeDefinitionIndex = 64194;

	class UIZenkovResultPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_5_4B10204F20C4D73A_1* GameContext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
