#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NAPAXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FFBE0)

namespace Cinemachine
{
	inline static constexpr unsigned int NapAxisStatePropertyAttribute_TypeDefinitionIndex = 32593;

	class NapAxisStatePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
