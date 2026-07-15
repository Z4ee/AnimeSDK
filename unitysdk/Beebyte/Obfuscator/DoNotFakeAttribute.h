#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_DONOTFAKEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD98CD0)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int DoNotFakeAttribute_TypeDefinitionIndex = 45257;

	class DoNotFakeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_DONOTFAKEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
