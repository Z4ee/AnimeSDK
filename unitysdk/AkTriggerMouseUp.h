#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEUP_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1C43F8C0)
#define AKTRIGGERMOUSEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43F8E0)

inline static constexpr unsigned int AkTriggerMouseUp_TypeDefinitionIndex = 31643;

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
