#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16440BA0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x16440B90)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x16440BB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x16440BC0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16440BE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16440BD0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPropertyAttribute_TypeDefinitionIndex = 8211;

	class JsonPropertyAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x10
		::System::Type* _ItemConverterType_k__BackingField; // 0x18
		::System::String* _PropertyName_k__BackingField; // 0x20
		::System::Nullable_1<::System::Int32> _order; // 0x28
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x30
		::System::Nullable_1<::System::Boolean> _isReference; // 0x38
		::System::Nullable_1<::System::Boolean> _itemIsReference; // 0x3A
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0x3C
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0x44
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0x4C
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0x54
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0x5C
		::System::Nullable_1<::Newtonsoft::Json::Required> _required; // 0x64
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, propertyName);
		}

		::System::Type* get_ItemConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET))(this, value);
		}
	};
}
