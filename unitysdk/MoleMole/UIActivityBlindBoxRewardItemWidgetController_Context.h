#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBLINDBOXREWARDITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF37F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxRewardItemWidgetController_Context_TypeDefinitionIndex = 69024;

	class UIActivityBlindBoxRewardItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemNum; // 0x28
		::System::Boolean Taken; // 0x2C
		::System::Boolean HideItemNum; // 0x2D
		::System::Int32 ItemId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXREWARDITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
