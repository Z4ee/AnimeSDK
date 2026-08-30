#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DYNAMICSCALEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12216680)

inline static constexpr unsigned int DynamicScaleObject_TypeDefinitionIndex = 47801;

class DynamicScaleObject : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICSCALEOBJECT__CTOR_OFFSET))(this);
	}
};
