#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x119C9AD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePipeline_TypeDefinitionIndex = 30788;

	class CinemachinePipeline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIPELINE__CTOR_OFFSET))(this);
		}
	};
}
