#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SETTRANSFORMONSTART_START_OFFSET UNITYSDK_OFFSET(0xE968AA0)
#define SETTRANSFORMONSTART__CTOR_OFFSET UNITYSDK_OFFSET(0xE968B20)

inline static constexpr unsigned int SetTransformOnStart_TypeDefinitionIndex = 47593;

class SetTransformOnStart : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTRANSFORMONSTART__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTRANSFORMONSTART_START_OFFSET))(this);
	}
};
