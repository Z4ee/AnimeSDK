#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIACTIVITYBIGCATITEMSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192D2770)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatItemSelectRowWidgetController_Context_TypeDefinitionIndex = 75176;

	class UIActivityBigCatItemSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemData; // 0x28
		::System::Int32 RewardCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATITEMSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
