#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/PropertyMetadata.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define LITJSON_OBJECTMETADATA_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x96EE00)
#define LITJSON_OBJECTMETADATA_GET_ISDICTIONARY_OFFSET UNITYSDK_OFFSET(0x3E5670)
#define LITJSON_OBJECTMETADATA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define LITJSON_OBJECTMETADATA_SET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define LITJSON_OBJECTMETADATA_SET_ISDICTIONARY_OFFSET UNITYSDK_OFFSET(0x5C9410)
#define LITJSON_OBJECTMETADATA_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x446DB0)

namespace LitJson
{
	inline static constexpr unsigned int ObjectMetadata_TypeDefinitionIndex = 8196;

	struct alignas(8) ObjectMetadata
	{
		::System::Type* element_type; // 0x10
		::System::Boolean is_dictionary; // 0x18
		::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::PropertyMetadata>* properties; // 0x20

		::System::Type* get_ElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_ElementType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_SET_ELEMENTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDictionary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_GET_ISDICTIONARY_OFFSET))(this);
		}

		::System::Void set_IsDictionary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_SET_ISDICTIONARY_OFFSET))(this, value);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::PropertyMetadata>* get_Properties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::PropertyMetadata>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void set_Properties(::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::PropertyMetadata>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::PropertyMetadata>*))((::PBYTE)hIl2Cpp + LITJSON_OBJECTMETADATA_SET_PROPERTIES_OFFSET))(this, value);
		}
	};
}
