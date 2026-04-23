#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EFFECTGROUPBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0xF2F3650)

inline static constexpr unsigned int EffectGroupBounds_TypeDefinitionIndex = 44083;

class EffectGroupBounds : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTGROUPBOUNDS__CTOR_OFFSET))(this);
	}
};
