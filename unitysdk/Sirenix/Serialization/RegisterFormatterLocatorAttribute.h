#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_GET_FORMATTERLOCATORTYPE_OFFSET UNITYSDK_OFFSET(0x1E834C10)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E834C30)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_SET_FORMATTERLOCATORTYPE_OFFSET UNITYSDK_OFFSET(0x1E834C20)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E834C40)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E834C50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int RegisterFormatterLocatorAttribute_TypeDefinitionIndex = 7527;

	class RegisterFormatterLocatorAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _FormatterLocatorType_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* formatterLocatorType, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE__CTOR_OFFSET))(this, formatterLocatorType, priority);
		}

		::System::Type* get_FormatterLocatorType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_GET_FORMATTERLOCATORTYPE_OFFSET))(this);
		}

		::System::Void set_FormatterLocatorType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_SET_FORMATTERLOCATORTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERLOCATORATTRIBUTE_SET_PRIORITY_OFFSET))(this, value);
		}
	};
}
