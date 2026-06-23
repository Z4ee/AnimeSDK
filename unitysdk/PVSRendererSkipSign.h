#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSRENDERERSKIPSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9180)

inline static constexpr unsigned int PVSRendererSkipSign_TypeDefinitionIndex = 59037;

class PVSRendererSkipSign : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSRENDERERSKIPSIGN__CTOR_OFFSET))(this);
	}
};
