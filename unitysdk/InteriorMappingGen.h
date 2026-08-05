#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define INTERIORMAPPINGGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF1920)

inline static constexpr unsigned int InteriorMappingGen_TypeDefinitionIndex = 35300;

class InteriorMappingGen : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPINGGEN__CTOR_OFFSET))(this);
	}
};
