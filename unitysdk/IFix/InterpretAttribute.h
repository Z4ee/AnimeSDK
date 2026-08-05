#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_INTERPRETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09C4B0)

namespace IFix
{
	inline static constexpr unsigned int InterpretAttribute_TypeDefinitionIndex = 6912;

	class InterpretAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_INTERPRETATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
