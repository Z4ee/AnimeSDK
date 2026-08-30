#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define AKSPATIALAUDIODEBUGDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C5530)

inline static constexpr unsigned int AkSpatialAudioDebugDraw_TypeDefinitionIndex = 43759;

class AkSpatialAudioDebugDraw : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIODEBUGDRAW__CTOR_OFFSET))(this);
	}
};
