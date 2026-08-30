#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOCAMERAANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC3080)

inline static constexpr unsigned int MonoCameraAnchor_TypeDefinitionIndex = 48025;

class MonoCameraAnchor : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCAMERAANCHOR__CTOR_OFFSET))(this);
	}
};
