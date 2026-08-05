#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContractType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace Newtonsoft::Json::Serialization { class SerializationCallback; }
namespace Newtonsoft::Json::Serialization { class SerializationErrorCallback; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F553300)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F5549C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1F552A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1F552940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F554A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1F554A40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1F552A80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F552A40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F552AA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F552D70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F552B30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F553380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERRORCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F552CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1F554430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F552BC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F553910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F552C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F553EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1F552920)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F555690)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F555370)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONERROR_OFFSET UNITYSDK_OFFSET(0x1F5557B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F555050)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F554D30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1F552A70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1F552950)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F554A70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1F554A50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1F552A90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F552A50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F553000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F553610)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1F5546C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1F553BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1F554130)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1F552930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F554A80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContract_TypeDefinitionIndex = 7128;

	class JsonContract : public ::System::Object
	{
	public:
		::System::Type* _UnderlyingType_k__BackingField; // 0x10
		::System::Func_1<::System::Object*>* _DefaultCreator_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializedCallbacks; // 0x20
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializingCallbacks; // 0x28
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializingCallbacks; // 0x30
		::System::Type* NonNullableUnderlyingType; // 0x38
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializedCallbacks; // 0x40
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x48
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* _onErrorCallbacks; // 0x50
		::Newtonsoft::Json::JsonConverter* _InternalConverter_k__BackingField; // 0x58
		::System::Type* _createdType; // 0x60
		::System::Boolean IsSealed; // 0x68
		::System::Nullable_1<::System::Boolean> _IsReference_k__BackingField; // 0x69
		::System::Boolean IsEnum; // 0x6B
		::System::Boolean IsNullable; // 0x6C
		::System::Boolean IsReadOnlyOrFixedSize; // 0x6D
		::System::Boolean _DefaultCreatorNonPublic_k__BackingField; // 0x6E
		::System::Boolean IsInstantiable; // 0x6F
		::System::Boolean IsConvertable; // 0x70
		::Newtonsoft::Json::ReadType InternalReadType; // 0x74
		::Newtonsoft::Json::Serialization::JsonContractType ContractType; // 0x78

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::System::Type* get_UnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_UNDERLYINGTYPE_OFFSET))(this);
		}

		::System::Void set_UnderlyingType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_UNDERLYINGTYPE_OFFSET))(this, value);
		}

		::System::Type* get_CreatedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CREATEDTYPE_OFFSET))(this);
		}

		::System::Void set_CreatedType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CREATEDTYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_IsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ISREFERENCE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_Converter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CONVERTER_OFFSET))(this);
		}

		::System::Void set_Converter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CONVERTER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_InternalConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_INTERNALCONVERTER_OFFSET))(this);
		}

		::System::Void set_InternalConverter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_INTERNALCONVERTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializedCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZEDCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializingCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZINGCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializedCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZEDCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializingCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZINGCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* get_OnErrorCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERRORCALLBACKS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_OnDeserialized()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void set_OnDeserialized(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZED_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnDeserializing()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZING_OFFSET))(this);
		}

		::System::Void set_OnDeserializing(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZING_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnSerialized()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZED_OFFSET))(this);
		}

		::System::Void set_OnSerialized(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZED_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnSerializing()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZING_OFFSET))(this);
		}

		::System::Void set_OnSerializing(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZING_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnError()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERROR_OFFSET))(this);
		}

		::System::Void set_OnError(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONERROR_OFFSET))(this, value);
		}

		::System::Func_1<::System::Object*>* get_DefaultCreator()
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATOR_OFFSET))(this);
		}

		::System::Void set_DefaultCreator(::System::Func_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_DefaultCreatorNonPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATORNONPUBLIC_OFFSET))(this);
		}

		::System::Void set_DefaultCreatorNonPublic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATORNONPUBLIC_OFFSET))(this, value);
		}

		::System::Void InvokeOnSerializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZING_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnSerialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZED_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnDeserializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZING_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnDeserialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZED_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnError(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONERROR_OFFSET))(this, o, context, errorContext);
		}

		static ::Newtonsoft::Json::Serialization::SerializationCallback* CreateSerializationCallback(::System::Reflection::MethodInfo* callbackMethodInfo)
		{
			return ((::Newtonsoft::Json::Serialization::SerializationCallback*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONCALLBACK_OFFSET))(callbackMethodInfo);
		}

		static ::Newtonsoft::Json::Serialization::SerializationErrorCallback* CreateSerializationErrorCallback(::System::Reflection::MethodInfo* callbackMethodInfo)
		{
			return ((::Newtonsoft::Json::Serialization::SerializationErrorCallback*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONERRORCALLBACK_OFFSET))(callbackMethodInfo);
		}
	};
}
