#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDB200)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 69434;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A865FEC42C70DCB5 showActivityType; // 0x28
		::System::Boolean isAutoOpen; // 0x2C
		::System::Int32 selectQuestID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
