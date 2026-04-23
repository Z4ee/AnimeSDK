#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PARTICLESYSTEMPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8BC00)

inline static constexpr unsigned int ParticleSystemPanel_TypeDefinitionIndex = 44069;

class ParticleSystemPanel : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMPANEL__CTOR_OFFSET))(this);
	}
};
