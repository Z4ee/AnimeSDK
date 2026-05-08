#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define LITJSON_ARRAYMETADATA_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x8B6290)
#define LITJSON_ARRAYMETADATA_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x3AB220)
#define LITJSON_ARRAYMETADATA_GET_ISLIST_OFFSET UNITYSDK_OFFSET(0x73F270)
#define LITJSON_ARRAYMETADATA_SET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define LITJSON_ARRAYMETADATA_SET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x5783A0)
#define LITJSON_ARRAYMETADATA_SET_ISLIST_OFFSET UNITYSDK_OFFSET(0x94CE60)

namespace LitJson
{
	inline static constexpr unsigned int ArrayMetadata_TypeDefinitionIndex = 8212;

	struct alignas(8) ArrayMetadata
	{
		::System::Type* element_type; // 0x10
		::System::Boolean is_array; // 0x18
		::System::Boolean is_list; // 0x19

		::System::Type* get_ElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_ElementType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_SET_ELEMENTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_GET_ISARRAY_OFFSET))(this);
		}

		::System::Void set_IsArray(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_SET_ISARRAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_GET_ISLIST_OFFSET))(this);
		}

		::System::Void set_IsList(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_ARRAYMETADATA_SET_ISLIST_OFFSET))(this, value);
		}
	};
}
