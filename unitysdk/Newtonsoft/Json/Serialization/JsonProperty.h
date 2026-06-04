#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class IAttributeProvider; }
namespace Newtonsoft::Json::Serialization { class IValueProvider; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Predicate_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x18857990)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x188578D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x18857830)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1884C7F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x18857AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18857970)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET UNITYSDK_OFFSET(0x18857910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x188579F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x18857B30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x18857B50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x18857B90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857B70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x188578F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x18857850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x188577A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x188577C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x188578C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET UNITYSDK_OFFSET(0x18857930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x18857140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x18857B00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18857AD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x18857AB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x18857870)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x18857890)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x18857950)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET UNITYSDK_OFFSET(0x188578B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x188578E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x18857840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1884C810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x18857AF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18857980)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET UNITYSDK_OFFSET(0x18857920)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x18857A00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x18857B40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x18857B60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x18857BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x18857900)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x18857860)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x188577B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1884C740)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1884C120)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET UNITYSDK_OFFSET(0x18857940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x18857A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x18857B10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x18857AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x18857AA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x18857880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x188578A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x18857960)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18857B20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x18857BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1884C110)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonProperty_TypeDefinitionIndex = 9380;

	class JsonProperty : public ::System::Object
	{
	public:
		::System::Object* _defaultValue; // 0x10
		::Newtonsoft::Json::Serialization::JsonContract* _PropertyContract_k__BackingField; // 0x18
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0x20
		::System::Action_2<::System::Object*, ::System::Object*>* _SetIsSpecified_k__BackingField; // 0x28
		::System::Type* _propertyType; // 0x30
		::System::String* _UnderlyingName_k__BackingField; // 0x38
		::System::Predicate_1<::System::Object*>* _ShouldSerialize_k__BackingField; // 0x40
		::System::Type* _DeclaringType_k__BackingField; // 0x48
		::System::Predicate_1<::System::Object*>* _ShouldDeserialize_k__BackingField; // 0x50
		::Newtonsoft::Json::Serialization::IAttributeProvider* _AttributeProvider_k__BackingField; // 0x58
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x60
		::Newtonsoft::Json::JsonConverter* _MemberConverter_k__BackingField; // 0x68
		::System::Predicate_1<::System::Object*>* _GetIsSpecified_k__BackingField; // 0x70
		::System::String* _propertyName; // 0x78
		::Newtonsoft::Json::Serialization::IValueProvider* _ValueProvider_k__BackingField; // 0x80
		::System::Boolean _Writable_k__BackingField; // 0x88
		::System::Nullable_1<::System::Boolean> _ItemIsReference_k__BackingField; // 0x89
		::System::Boolean _HasMemberAttribute_k__BackingField; // 0x8B
		::System::Boolean _skipPropertyNameEscape; // 0x8C
		::System::Nullable_1<::System::Boolean> _IsReference_k__BackingField; // 0x8D
		::System::Boolean _hasGeneratedDefaultValue; // 0x8F
		::System::Boolean _hasExplicitDefaultValue; // 0x90
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField; // 0x94
		::System::Boolean _Ignored_k__BackingField; // 0x9C
		::System::Boolean _Readable_k__BackingField; // 0x9D
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _ObjectCreationHandling_k__BackingField; // 0xA0
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _TypeNameHandling_k__BackingField; // 0xA8
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ReferenceLoopHandling_k__BackingField; // 0xB0
		::System::Nullable_1<::System::Int32> _Order_k__BackingField; // 0xB8
		::System::Nullable_1<::Newtonsoft::Json::Required> _required; // 0xC0
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField; // 0xC8
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _NullValueHandling_k__BackingField; // 0xD0
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _DefaultValueHandling_k__BackingField; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_PropertyContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET))(this);
		}

		::System::Void set_PropertyContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET))(this, a1);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void set_DeclaringType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_Order()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET))(this, a1);
		}

		::System::String* get_UnderlyingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET))(this);
		}

		::System::Void set_UnderlyingName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* get_ValueProvider()
		{
			return ((::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET))(this);
		}

		::System::Void set_ValueProvider(::Newtonsoft::Json::Serialization::IValueProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IValueProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET))(this, a1);
		}

		::System::Void set_AttributeProvider(::Newtonsoft::Json::Serialization::IAttributeProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IAttributeProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET))(this, a1);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonConverter* get_Converter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET))(this);
		}

		::System::Void set_Converter(::Newtonsoft::Json::JsonConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonConverter* get_MemberConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET))(this);
		}

		::System::Void set_MemberConverter(::Newtonsoft::Json::JsonConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET))(this, a1);
		}

		::System::Boolean get_Ignored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET))(this);
		}

		::System::Void set_Ignored(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET))(this, a1);
		}

		::System::Boolean get_Readable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET))(this);
		}

		::System::Void set_Readable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_Writable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET))(this);
		}

		::System::Void set_Writable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMemberAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_HasMemberAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetResolvedDefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Required get_Required()
		{
			return ((::Newtonsoft::Json::Required(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> get_IsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> get_NullValueHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> get_DefaultValueHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_DefaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> get_ObjectCreationHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_TypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_TypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET))(this, a1);
		}

		::System::Predicate_1<::System::Object*>* get_ShouldSerialize()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET))(this);
		}

		::System::Void set_ShouldSerialize(::System::Predicate_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET))(this, a1);
		}

		::System::Predicate_1<::System::Object*>* get_ShouldDeserialize()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET))(this);
		}

		::System::Predicate_1<::System::Object*>* get_GetIsSpecified()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET))(this);
		}

		::System::Void set_GetIsSpecified(::System::Predicate_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET))(this, a1);
		}

		::System::Action_2<::System::Object*, ::System::Object*>* get_SetIsSpecified()
		{
			return ((::System::Action_2<::System::Object*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET))(this);
		}

		::System::Void set_SetIsSpecified(::System::Action_2<::System::Object*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET))(this);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_ItemIsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, a1);
		}

		::System::Void WritePropertyName(::Newtonsoft::Json::JsonWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET))(this, a1);
		}
	};
}
