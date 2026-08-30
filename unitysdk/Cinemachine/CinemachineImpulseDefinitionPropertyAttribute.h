#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C63AD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinitionPropertyAttribute_TypeDefinitionIndex = 38568;

	class CinemachineImpulseDefinitionPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
