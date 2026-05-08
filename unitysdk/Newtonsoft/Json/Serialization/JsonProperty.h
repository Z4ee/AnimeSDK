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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB5F5E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ATTRIBUTEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BB5F4A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F4F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BB5F420)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F6E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB5F5B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1BB5F7A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BB5F590)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET UNITYSDK_OFFSET(0x1BB5F530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BB5F6A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F7F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BB5F810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F830)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F6C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F720)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1BB5F440)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BB5F370)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BB5F390)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1BB5F4C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET UNITYSDK_OFFSET(0x1BB5F550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F700)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1BB5F660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1BB5F7C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5F780)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5F760)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F740)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x1BB5F460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BB5F480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x1BB5F570)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BB5F4B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BB5F430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F6F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BB5F5D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1BB5F7B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BB5F5A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET UNITYSDK_OFFSET(0x1BB5F540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BB5F6B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F800)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BB5F820)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F860)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BB5F520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F6D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F730)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1BB5F450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BB5F380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BB5F3A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1BB5F4D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET UNITYSDK_OFFSET(0x1BB5F560)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F710)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1BB5F680)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1BB5F7D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5F790)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5F770)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB5F750)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x1BB5F470)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BB5F490)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x1BB5F580)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BB5F7E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BB5F870)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5F8E0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonProperty_TypeDefinitionIndex = 7002;

	class JsonProperty : public ::System::Object
	{
	public:
		::System::Predicate_1<::System::Object*>* _ShouldDeserialize_k__BackingField; // 0x10
		::Newtonsoft::Json::JsonConverter* _MemberConverter_k__BackingField; // 0x18
		::System::Predicate_1<::System::Object*>* _GetIsSpecified_k__BackingField; // 0x20
		::System::String* _propertyName; // 0x28
		::Newtonsoft::Json::Serialization::IAttributeProvider* _AttributeProvider_k__BackingField; // 0x30
		::System::Predicate_1<::System::Object*>* _ShouldSerialize_k__BackingField; // 0x38
		::Newtonsoft::Json::Serialization::JsonContract* _PropertyContract_k__BackingField; // 0x40
		::System::Action_2<::System::Object*, ::System::Object*>* _SetIsSpecified_k__BackingField; // 0x48
		::Newtonsoft::Json::Serialization::IValueProvider* _ValueProvider_k__BackingField; // 0x50
		::System::Type* _propertyType; // 0x58
		::System::String* _UnderlyingName_k__BackingField; // 0x60
		::System::Object* _defaultValue; // 0x68
		::System::Type* _DeclaringType_k__BackingField; // 0x70
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x78
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0x80
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _NullValueHandling_k__BackingField; // 0x88
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField; // 0x90
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ReferenceLoopHandling_k__BackingField; // 0x98
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _DefaultValueHandling_k__BackingField; // 0xA0
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _TypeNameHandling_k__BackingField; // 0xA8
		::System::Boolean _Ignored_k__BackingField; // 0xB0
		::System::Boolean _Writable_k__BackingField; // 0xB1
		::System::Boolean _hasExplicitDefaultValue; // 0xB2
		::System::Nullable_1<::Newtonsoft::Json::Required> _required; // 0xB4
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _ObjectCreationHandling_k__BackingField; // 0xBC
		::System::Nullable_1<::System::Int32> _Order_k__BackingField; // 0xC4
		::System::Boolean _HasMemberAttribute_k__BackingField; // 0xCC
		::System::Boolean _skipPropertyNameEscape; // 0xCD
		::System::Nullable_1<::System::Boolean> _IsReference_k__BackingField; // 0xCE
		::System::Boolean _hasGeneratedDefaultValue; // 0xD0
		::System::Nullable_1<::System::Boolean> _ItemIsReference_k__BackingField; // 0xD1
		::System::Boolean _Readable_k__BackingField; // 0xD3
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_PropertyContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET))(this);
		}

		::System::Void set_PropertyContract(::Newtonsoft::Json::Serialization::JsonContract* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET))(this, value);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void set_DeclaringType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_Order()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET))(this, value);
		}

		::System::String* get_UnderlyingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET))(this);
		}

		::System::Void set_UnderlyingName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* get_ValueProvider()
		{
			return ((::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET))(this);
		}

		::System::Void set_ValueProvider(::Newtonsoft::Json::Serialization::IValueProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IValueProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::IAttributeProvider* get_AttributeProvider()
		{
			return ((::Newtonsoft::Json::Serialization::IAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ATTRIBUTEPROVIDER_OFFSET))(this);
		}

		::System::Void set_AttributeProvider(::Newtonsoft::Json::Serialization::IAttributeProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IAttributeProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET))(this, value);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_Converter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET))(this);
		}

		::System::Void set_Converter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_MemberConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET))(this);
		}

		::System::Void set_MemberConverter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET))(this, value);
		}

		::System::Boolean get_Ignored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET))(this);
		}

		::System::Void set_Ignored(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET))(this, value);
		}

		::System::Boolean get_Readable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET))(this);
		}

		::System::Void set_Readable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET))(this, value);
		}

		::System::Boolean get_Writable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET))(this);
		}

		::System::Void set_Writable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET))(this, value);
		}

		::System::Boolean get_HasMemberAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_HasMemberAttribute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET))(this, value);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Object* GetResolvedDefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET))(this);
		}

		::Newtonsoft::Json::Required get_Required()
		{
			return ((::Newtonsoft::Json::Required(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET))(this);
		}

		::System::Void set_Required(::Newtonsoft::Json::Required value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Required))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REQUIRED_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_IsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> get_NullValueHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> get_DefaultValueHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_DefaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> get_ObjectCreationHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_TypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_TypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Predicate_1<::System::Object*>* get_ShouldSerialize()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET))(this);
		}

		::System::Void set_ShouldSerialize(::System::Predicate_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET))(this, value);
		}

		::System::Predicate_1<::System::Object*>* get_ShouldDeserialize()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET))(this);
		}

		::System::Void set_ShouldDeserialize(::System::Predicate_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDDESERIALIZE_OFFSET))(this, value);
		}

		::System::Predicate_1<::System::Object*>* get_GetIsSpecified()
		{
			return ((::System::Predicate_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET))(this);
		}

		::System::Void set_GetIsSpecified(::System::Predicate_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET))(this, value);
		}

		::System::Action_2<::System::Object*, ::System::Object*>* get_SetIsSpecified()
		{
			return ((::System::Action_2<::System::Object*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET))(this);
		}

		::System::Void set_SetIsSpecified(::System::Action_2<::System::Object*, ::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET))(this);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_ItemIsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::System::Void WritePropertyName(::Newtonsoft::Json::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET))(this, writer);
		}
	};
}
