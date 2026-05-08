#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_ODINNEWSKIPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5169B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int OdinNewSkipTypeAttribute_TypeDefinitionIndex = 7462;

	class OdinNewSkipTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ODINNEWSKIPTYPEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
