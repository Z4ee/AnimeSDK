#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_EMITTEDFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7070)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EmittedFormatterAttribute_TypeDefinitionIndex = 7325;

	class EmittedFormatterAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_EMITTEDFORMATTERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
