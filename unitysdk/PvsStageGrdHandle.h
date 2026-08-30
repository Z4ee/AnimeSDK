#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEGRDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA99D0)

inline static constexpr unsigned int PvsStageGrdHandle_TypeDefinitionIndex = 47861;

class PvsStageGrdHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEGRDHANDLE__CTOR_OFFSET))(this);
	}
};
