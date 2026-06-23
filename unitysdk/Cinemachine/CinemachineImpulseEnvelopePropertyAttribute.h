#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSEENVELOPEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E41F7E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseEnvelopePropertyAttribute_TypeDefinitionIndex = 34179;

	class CinemachineImpulseEnvelopePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEENVELOPEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
