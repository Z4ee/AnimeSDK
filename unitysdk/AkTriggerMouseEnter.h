#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B8A70)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 41352;

class AkTriggerMouseEnter : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER__CTOR_OFFSET))(this);
	}
};
