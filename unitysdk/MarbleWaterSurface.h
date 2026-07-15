#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MARBLEWATERSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x186F19E0)

inline static constexpr unsigned int MarbleWaterSurface_TypeDefinitionIndex = 45354;

class MarbleWaterSurface : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLEWATERSURFACE__CTOR_OFFSET))(this);
	}
};
