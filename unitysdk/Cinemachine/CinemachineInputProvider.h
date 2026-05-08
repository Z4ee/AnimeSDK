#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F5590)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_TypeDefinitionIndex = 32614;

	class CinemachineInputProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
