#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x108A5840)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 86284;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectQuestID; // 0x28
		::Enum_3_7AEF4D15E4700EEA showActivityType; // 0x2C
		::System::Boolean isAutoOpen; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
