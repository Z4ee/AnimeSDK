#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"

#define MOLEMOLE_UISUMMERTIDESELECTORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1889F190)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSelectOrderWidgetController_Context_TypeDefinitionIndex = 66320;

	class UISummerTideSelectOrderWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_B4AA4B9F04BE3CFD WorldHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELECTORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
