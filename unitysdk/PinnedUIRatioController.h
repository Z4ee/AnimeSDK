#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PINNEDUIRATIOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC39AFD0)

inline static constexpr unsigned int PinnedUIRatioController_TypeDefinitionIndex = 47583;

class PinnedUIRatioController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINNEDUIRATIOCONTROLLER__CTOR_OFFSET))(this);
	}
};
