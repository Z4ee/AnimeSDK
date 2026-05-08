#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEPIXELPERFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF738A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePixelPerfect_TypeDefinitionIndex = 32488;

	class CinemachinePixelPerfect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIXELPERFECT__CTOR_OFFSET))(this);
		}
	};
}
