#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOETHEREYESINTERACTCOLLIDERIGNORE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C3BF0)

inline static constexpr unsigned int MonoEtherEyesInteractColliderIgnore_TypeDefinitionIndex = 80798;

class MonoEtherEyesInteractColliderIgnore : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESINTERACTCOLLIDERIGNORE__CTOR_OFFSET))(this);
	}
};
