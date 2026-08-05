#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A60660)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingPageController_Context_TypeDefinitionIndex = 44293;

	class UISummerTideTreasureSellingPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_B4AA4B9F04BE3CFD WorldHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
