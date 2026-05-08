#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Utilities/GlobalConfigAttribute.h"

#define SIRENIX_UTILITIES_SIRENIXGLOBALCONFIGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADBFB0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixGlobalConfigAttribute_TypeDefinitionIndex = 6467;

	class SirenixGlobalConfigAttribute : public ::Sirenix::Utilities::GlobalConfigAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXGLOBALCONFIGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
