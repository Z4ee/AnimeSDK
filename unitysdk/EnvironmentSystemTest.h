#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ENVIRONMENTSYSTEMTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x153A9700)

inline static constexpr unsigned int EnvironmentSystemTest_TypeDefinitionIndex = 47760;

class EnvironmentSystemTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIRONMENTSYSTEMTEST__CTOR_OFFSET))(this);
	}
};
