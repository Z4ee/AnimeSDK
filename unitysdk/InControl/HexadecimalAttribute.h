#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define INCONTROL_HEXADECIMALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAD5C0)

namespace InControl
{
	inline static constexpr unsigned int HexadecimalAttribute_TypeDefinitionIndex = 37878;

	class HexadecimalAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_HEXADECIMALATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
