#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1198F8F0)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisStatePropertyAttribute_TypeDefinitionIndex = 30864;

	class AxisStatePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
