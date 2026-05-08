#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUIDOUBLEWEEKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4CB50)

inline static constexpr unsigned int MonoUIDoubleWeekConfig_TypeDefinitionIndex = 78033;

class MonoUIDoubleWeekConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single bingoInterval; // 0x18
	::System::Single gridBingoAnimDelay; // 0x1C
	::System::Single unitBingoAnimDelay; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDOUBLEWEEKCONFIG__CTOR_OFFSET))(this);
	}
};
