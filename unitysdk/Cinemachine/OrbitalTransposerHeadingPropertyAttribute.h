#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_ORBITALTRANSPOSERHEADINGPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x119D92F0)

namespace Cinemachine
{
	inline static constexpr unsigned int OrbitalTransposerHeadingPropertyAttribute_TypeDefinitionIndex = 30865;

	class OrbitalTransposerHeadingPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ORBITALTRANSPOSERHEADINGPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
