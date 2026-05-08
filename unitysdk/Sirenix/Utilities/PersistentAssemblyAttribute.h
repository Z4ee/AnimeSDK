#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_UTILITIES_PERSISTENTASSEMBLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD92C0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int PersistentAssemblyAttribute_TypeDefinitionIndex = 6459;

	class PersistentAssemblyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PERSISTENTASSEMBLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
