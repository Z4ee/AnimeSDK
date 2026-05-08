#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_EMITTEDASSEMBLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87E920)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EmittedAssemblyAttribute_TypeDefinitionIndex = 7371;

	class EmittedAssemblyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_EMITTEDASSEMBLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
