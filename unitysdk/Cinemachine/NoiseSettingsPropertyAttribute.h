#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NOISESETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C472D70)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettingsPropertyAttribute_TypeDefinitionIndex = 32573;

	class NoiseSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
