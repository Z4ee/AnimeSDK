#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define BGCURVEPCG_POWERLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x181AB630)

inline static constexpr unsigned int BGCurvePCG_PowerLine_TypeDefinitionIndex = 45761;

class BGCurvePCG_PowerLine : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEPCG_POWERLINE__CTOR_OFFSET))(this);
	}
};
