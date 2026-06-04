#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEPIXELPERFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14655DA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePixelPerfect_TypeDefinitionIndex = 36809;

	class CinemachinePixelPerfect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIXELPERFECT__CTOR_OFFSET))(this);
		}
	};
}
