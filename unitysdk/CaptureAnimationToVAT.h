#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CAPTUREANIMATIONTOVAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFC0C0)

inline static constexpr unsigned int CaptureAnimationToVAT_TypeDefinitionIndex = 27034;

class CaptureAnimationToVAT : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPTUREANIMATIONTOVAT__CTOR_OFFSET))(this);
	}
};
