#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1725BB60)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisStatePropertyAttribute_TypeDefinitionIndex = 37666;

	class AxisStatePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
