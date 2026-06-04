#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSLATEGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA84FD30)

inline static constexpr unsigned int MonoSlateGenerator_TypeDefinitionIndex = 44797;

class MonoSlateGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSLATEGENERATOR__CTOR_OFFSET))(this);
	}
};
