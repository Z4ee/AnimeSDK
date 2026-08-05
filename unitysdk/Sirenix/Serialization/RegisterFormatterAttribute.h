#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F91CC90)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1F91CCB0)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F91CCA0)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1F91CCC0)
#define SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F91CCD0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int RegisterFormatterAttribute_TypeDefinitionIndex = 7530;

	class RegisterFormatterAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _FormatterType_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* formatterType, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE__CTOR_OFFSET))(this, formatterType, priority);
		}

		::System::Type* get_FormatterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET))(this);
		}

		::System::Void set_FormatterType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERFORMATTERATTRIBUTE_SET_PRIORITY_OFFSET))(this, value);
		}
	};
}
