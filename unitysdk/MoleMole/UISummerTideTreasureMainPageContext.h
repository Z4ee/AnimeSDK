#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureMainPageContext_TypeDefinitionIndex = 74948;

	class UISummerTideTreasureMainPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ReturnMainCityAfterSell; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
