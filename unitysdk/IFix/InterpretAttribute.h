#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_INTERPRETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7AD590)

namespace IFix
{
	inline static constexpr unsigned int InterpretAttribute_TypeDefinitionIndex = 6776;

	class InterpretAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_INTERPRETATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
