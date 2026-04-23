#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66D870)

inline static constexpr unsigned int AkTriggerMouseDown_TypeDefinitionIndex = 40524;

class AkTriggerMouseDown : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN__CTOR_OFFSET))(this);
	}
};
