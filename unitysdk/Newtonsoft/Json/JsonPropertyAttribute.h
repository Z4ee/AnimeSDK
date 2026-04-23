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

#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17A6C540)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x17A6C530)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x17A6C550)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x17A6C560)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A6C580)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6C570)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPropertyAttribute_TypeDefinitionIndex = 8357;

	class JsonPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x18
		::System::Type* _ItemConverterType_k__BackingField; // 0x20
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x28
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0x30
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0x38
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x40
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0x48
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0x50
		::System::Nullable_1<::System::Boolean> _isReference; // 0x58
		::System::Nullable_1<::System::Boolean> _itemIsReference; // 0x5A
		::System::Nullable_1<::System::Int32> _order; // 0x5C
		::System::Nullable_1<::Newtonsoft::Json::Required> _required; // 0x64
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0x6C

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
