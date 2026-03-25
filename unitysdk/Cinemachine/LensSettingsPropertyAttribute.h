#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_LENSSETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x119D8D70)

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettingsPropertyAttribute_TypeDefinitionIndex = 30866;

	class LensSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGSPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
