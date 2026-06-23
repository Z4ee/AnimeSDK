#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define AKTERMINATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C2F30)

inline static constexpr unsigned int AkTerminator_TypeDefinitionIndex = 33180;

class AkTerminator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTERMINATOR__CTOR_OFFSET))(this);
	}
};
