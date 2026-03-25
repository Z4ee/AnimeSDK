#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C32360)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 34706;

class AkTriggerMouseEnter : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER__CTOR_OFFSET))(this);
	}
};
