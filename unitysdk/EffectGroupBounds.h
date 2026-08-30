#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EFFECTGROUPBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x10674B30)

inline static constexpr unsigned int EffectGroupBounds_TypeDefinitionIndex = 47752;

class EffectGroupBounds : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTGROUPBOUNDS__CTOR_OFFSET))(this);
	}
};
