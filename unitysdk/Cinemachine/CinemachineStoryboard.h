#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFBE0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_TypeDefinitionIndex = 34046;

	class CinemachineStoryboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET))(this);
		}
	};
}
