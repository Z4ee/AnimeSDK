#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERDISABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2A33F0)
#define AKTRIGGERDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A3410)

inline static constexpr unsigned int AkTriggerDisable_TypeDefinitionIndex = 31634;

class AkTriggerDisable : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE_ONDISABLE_OFFSET))(this);
	}
};
