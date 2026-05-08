#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISummerLevelRankItemWidgetController.h"

#define MOLEMOLE_UISUMMERSHOOTINGLEVELRANKITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1379D810)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerShootingLevelRankItemWidgetController_TypeDefinitionIndex = 47258;

	class UISummerShootingLevelRankItemWidgetController : public ::MoleMole::UISummerLevelRankItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTINGLEVELRANKITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
