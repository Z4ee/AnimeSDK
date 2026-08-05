#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x112EA900)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 82138;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isAutoOpen; // 0x28
		::System::Int32 selectQuestID; // 0x2C
		::Enum_3_7B044D15E4826ADC showActivityType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
