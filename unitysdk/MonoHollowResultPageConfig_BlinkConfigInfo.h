#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoHollowResultPageConfig_BlinkConfig.h"
#include "unitysdk/System/Object.h"

#define MONOHOLLOWRESULTPAGECONFIG_BLINKCONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x114A3CB0)

inline static constexpr unsigned int MonoHollowResultPageConfig_BlinkConfigInfo_TypeDefinitionIndex = 41017;

class MonoHollowResultPageConfig_BlinkConfigInfo : public ::System::Object
{
public:
	::Il2CppArray<::MonoHollowResultPageConfig_BlinkConfig>* BlinkMatrix; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_BLINKCONFIGINFO__CTOR_OFFSET))(this);
	}
};
