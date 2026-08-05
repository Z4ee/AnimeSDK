#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160F31F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingBuffDescWidgetController_Context_TypeDefinitionIndex = 70203;

	class UISummerTideTreasureSellingBuffDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickMask; // 0x28
		::System::Int32 BuffConfigId; // 0x30
		::System::Int32 Count; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
