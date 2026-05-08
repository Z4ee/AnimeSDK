#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4C6210)
#define SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C6200)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CustomFormatterAttribute_TypeDefinitionIndex = 7364;

	class CustomFormatterAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Priority; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_1_OFFSET))(this, priority);
		}
	};
}
