#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERDISABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A66C930)
#define AKTRIGGERDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66C990)

inline static constexpr unsigned int AkTriggerDisable_TypeDefinitionIndex = 40518;

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
