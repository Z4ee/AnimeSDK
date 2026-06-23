#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEBLENDDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEB60)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinitionPropertyAttribute_TypeDefinitionIndex = 34120;

	class CinemachineBlendDefinitionPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITIONPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
