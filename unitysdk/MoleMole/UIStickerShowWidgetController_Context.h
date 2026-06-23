#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F486D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStickerShowWidgetController_Context_TypeDefinitionIndex = 78446;

	class UIStickerShowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StickerID; // 0x28
		::System::Int32 StickerIndex; // 0x2C
		::System::Boolean DisableOpt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
