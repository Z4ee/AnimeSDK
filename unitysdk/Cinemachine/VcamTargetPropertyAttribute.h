#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_VCAMTARGETPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21E6C0)

namespace Cinemachine
{
	inline static constexpr unsigned int VcamTargetPropertyAttribute_TypeDefinitionIndex = 37669;

	class VcamTargetPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_VCAMTARGETPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
