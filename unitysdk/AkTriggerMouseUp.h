#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C32380)

inline static constexpr unsigned int AkTriggerMouseUp_TypeDefinitionIndex = 34708;

class AkTriggerMouseUp : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP__CTOR_OFFSET))(this);
	}
};
