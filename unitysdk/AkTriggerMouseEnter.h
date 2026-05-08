#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1C4B7B70)
#define AKTRIGGERMOUSEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B7B90)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 31641;

class AkTriggerMouseEnter : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER__CTOR_OFFSET))(this);
	}

	::System::Void OnMouseEnter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER_ONMOUSEENTER_OFFSET))(this);
	}
};
