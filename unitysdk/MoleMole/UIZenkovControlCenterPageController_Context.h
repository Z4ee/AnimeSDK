#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_912CABDA75E684D1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVCONTROLCENTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10F13290)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovControlCenterPageController_Context_TypeDefinitionIndex = 79402;

	class UIZenkovControlCenterPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_912CABDA75E684D1 InitBuildingType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCONTROLCENTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
