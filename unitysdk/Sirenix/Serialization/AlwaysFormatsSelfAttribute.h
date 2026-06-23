#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_ALWAYSFORMATSSELFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F5A70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int AlwaysFormatsSelfAttribute_TypeDefinitionIndex = 7492;

	class AlwaysFormatsSelfAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ALWAYSFORMATSSELFATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
