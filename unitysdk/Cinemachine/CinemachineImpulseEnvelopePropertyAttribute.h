#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSEENVELOPEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F84DED0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseEnvelopePropertyAttribute_TypeDefinitionIndex = 34815;

	class CinemachineImpulseEnvelopePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEENVELOPEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
