#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC47B60)

inline static constexpr unsigned int AkTriggerEnable_TypeDefinitionIndex = 33822;

class AkTriggerEnable : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERENABLE__CTOR_OFFSET))(this);
	}
};
