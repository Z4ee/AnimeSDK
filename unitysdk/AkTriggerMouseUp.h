#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEUP_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1E781300)
#define AKTRIGGERMOUSEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E781320)

inline static constexpr unsigned int AkTriggerMouseUp_TypeDefinitionIndex = 33194;

class AkTriggerMouseUp : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP__CTOR_OFFSET))(this);
	}

	::System::Void OnMouseUp()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP_ONMOUSEUP_OFFSET))(this);
	}
};
