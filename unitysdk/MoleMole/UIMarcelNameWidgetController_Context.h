#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMarcelNameWidgetController_Display.h"

#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14843440)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelNameWidgetController_Context_TypeDefinitionIndex = 73026;

	class UIMarcelNameWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 Uid; // 0x28
		::System::UInt32 TargetID; // 0x2C
		::MoleMole::UIMarcelNameWidgetController_Display Display; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
