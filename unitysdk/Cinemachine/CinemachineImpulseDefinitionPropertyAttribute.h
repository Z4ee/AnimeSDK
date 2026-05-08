#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32DCD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinitionPropertyAttribute_TypeDefinitionIndex = 32623;

	class CinemachineImpulseDefinitionPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
