#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOINTERACTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA7620)

inline static constexpr unsigned int MonoInteractParam_TypeDefinitionIndex = 71187;

class MonoInteractParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single MaxWidth; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTPARAM__CTOR_OFFSET))(this);
	}
};
