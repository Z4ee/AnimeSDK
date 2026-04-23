#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NOISESETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA75F0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettingsPropertyAttribute_TypeDefinitionIndex = 36592;

	class NoiseSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
