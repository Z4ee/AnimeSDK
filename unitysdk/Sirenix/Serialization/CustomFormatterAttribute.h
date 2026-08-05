#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD3800)
#define SIRENIX_SERIALIZATION_CUSTOMFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD37F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CustomFormatterAttribute_TypeDefinitionIndex = 7500;

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
