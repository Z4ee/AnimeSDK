#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define INCONTROL_HEXADECIMALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B67B60)

namespace InControl
{
	inline static constexpr unsigned int HexadecimalAttribute_TypeDefinitionIndex = 31426;

	class HexadecimalAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_HEXADECIMALATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
