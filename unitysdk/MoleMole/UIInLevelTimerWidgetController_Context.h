#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_2140EBF640BC9674.h"

#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6840)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTimerWidgetController_Context_TypeDefinitionIndex = 78937;

	class UIInLevelTimerWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_2140EBF640BC9674 LDdata; // 0x28

		::System::Void _ctor(::Struct_2_2140EBF640BC9674 LDdata)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2140EBF640BC9674))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, LDdata);
		}
	};
}
