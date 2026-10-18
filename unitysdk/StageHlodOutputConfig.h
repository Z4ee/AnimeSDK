#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define STAGEHLODOUTPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE998300)

inline static constexpr unsigned int StageHlodOutputConfig_TypeDefinitionIndex = 47564;

class StageHlodOutputConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHLODOUTPUTCONFIG__CTOR_OFFSET))(this);
	}
};
