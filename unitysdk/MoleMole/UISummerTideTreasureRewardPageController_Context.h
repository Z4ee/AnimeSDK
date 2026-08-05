#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASUREREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F540)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureRewardPageController_Context_TypeDefinitionIndex = 65618;

	class UISummerTideTreasureRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
