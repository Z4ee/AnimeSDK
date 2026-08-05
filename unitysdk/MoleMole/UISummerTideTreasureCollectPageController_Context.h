#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13032DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCollectPageController_Context_TypeDefinitionIndex = 86124;

	class UISummerTideTreasureCollectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DefaultCollectionId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
