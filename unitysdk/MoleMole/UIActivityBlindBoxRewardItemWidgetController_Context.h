#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBLINDBOXREWARDITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F28900)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxRewardItemWidgetController_Context_TypeDefinitionIndex = 68237;

	class UIActivityBlindBoxRewardItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean Taken; // 0x28
		::System::Boolean HideItemNum; // 0x29
		::System::Int32 ItemNum; // 0x2C
		::System::Int32 ItemId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXREWARDITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
