#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define AKTERMINATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6639F0)

inline static constexpr unsigned int AkTerminator_TypeDefinitionIndex = 40513;

class AkTerminator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTERMINATOR__CTOR_OFFSET))(this);
	}
};
