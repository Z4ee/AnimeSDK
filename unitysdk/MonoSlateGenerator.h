#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSLATEGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x88BEA60)

inline static constexpr unsigned int MonoSlateGenerator_TypeDefinitionIndex = 38367;

class MonoSlateGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSLATEGENERATOR__CTOR_OFFSET))(this);
	}
};
