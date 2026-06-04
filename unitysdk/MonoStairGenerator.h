#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSTAIRGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA84FD40)

inline static constexpr unsigned int MonoStairGenerator_TypeDefinitionIndex = 44798;

class MonoStairGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSTAIRGENERATOR__CTOR_OFFSET))(this);
	}
};
