#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define COLORWHEELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1907C8A0)

inline static constexpr unsigned int ColorWheelAttribute_TypeDefinitionIndex = 29527;

class ColorWheelAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORWHEELATTRIBUTE__CTOR_OFFSET))(this);
	}
};
