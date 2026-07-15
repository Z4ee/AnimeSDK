#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSECHANNELPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1728A2D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseChannelPropertyAttribute_TypeDefinitionIndex = 37715;

	class CinemachineImpulseChannelPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSECHANNELPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
