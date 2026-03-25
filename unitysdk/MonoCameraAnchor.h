#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOCAMERAANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x88BC630)

inline static constexpr unsigned int MonoCameraAnchor_TypeDefinitionIndex = 38426;

class MonoCameraAnchor : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCAMERAANCHOR__CTOR_OFFSET))(this);
	}
};
