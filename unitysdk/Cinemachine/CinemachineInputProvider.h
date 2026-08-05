#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F849C80)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_TypeDefinitionIndex = 34801;

	class CinemachineInputProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
