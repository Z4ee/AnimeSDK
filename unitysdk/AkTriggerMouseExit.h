#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B8A80)

inline static constexpr unsigned int AkTriggerMouseExit_TypeDefinitionIndex = 41353;

class AkTriggerMouseExit : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT__CTOR_OFFSET))(this);
	}
};
