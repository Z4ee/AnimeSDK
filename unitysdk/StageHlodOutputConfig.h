#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define STAGEHLODOUTPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD09AEA0)

inline static constexpr unsigned int StageHlodOutputConfig_TypeDefinitionIndex = 44855;

class StageHlodOutputConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHLODOUTPUTCONFIG__CTOR_OFFSET))(this);
	}
};
