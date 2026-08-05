#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64650)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingLTRowWidgetController_Context_TypeDefinitionIndex = 85487;

	class UISummerTideTreasureSellingLTRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_B4AA4B9F04BE3CFD WorldHandle; // 0x28
		::Foundation::ViewObject::ViewObjectHandle Order; // 0x38
		::Enum_3_2C704E2262533CBD AttributeName; // 0x48
		::System::Int32 NeedCount; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
