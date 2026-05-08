#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENESAMPLEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17885230)

inline static constexpr unsigned int SceneSamplePoint_TypeDefinitionIndex = 49303;

class SceneSamplePoint : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESAMPLEPOINT__CTOR_OFFSET))(this);
	}
};
