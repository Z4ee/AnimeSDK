#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOWORLDLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A33690)

inline static constexpr unsigned int MonoWorldLevelUpConfig_TypeDefinitionIndex = 78498;

class MonoWorldLevelUpConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single WaitBeforeClose; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOWORLDLEVELUPCONFIG__CTOR_OFFSET))(this);
	}
};
