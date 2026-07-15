#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERDISABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B6E4C10)
#define AKTRIGGERDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E4C70)

inline static constexpr unsigned int AkTriggerDisable_TypeDefinitionIndex = 42160;

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
