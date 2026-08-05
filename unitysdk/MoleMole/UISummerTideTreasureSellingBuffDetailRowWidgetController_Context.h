#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151AECE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingBuffDetailRowWidgetController_Context_TypeDefinitionIndex = 53172;

	class UISummerTideTreasureSellingBuffDetailRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 BuffConfigId; // 0x28
		::System::Boolean IsSpecial; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
