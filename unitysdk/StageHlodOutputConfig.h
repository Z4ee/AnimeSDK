#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define STAGEHLODOUTPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED2C40)

inline static constexpr unsigned int StageHlodOutputConfig_TypeDefinitionIndex = 45772;

class StageHlodOutputConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHLODOUTPUTCONFIG__CTOR_OFFSET))(this);
	}
};
