#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEGRDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17468EB0)

inline static constexpr unsigned int PvsStageGrdHandle_TypeDefinitionIndex = 45610;

class PvsStageGrdHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEGRDHANDLE__CTOR_OFFSET))(this);
	}
};
