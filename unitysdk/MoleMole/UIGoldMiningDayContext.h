#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9196D09A7539E4F5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGOLDMININGDAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C8DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayContext_TypeDefinitionIndex = 84142;

	class UIGoldMiningDayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_9196D09A7539E4F5 oepnType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
