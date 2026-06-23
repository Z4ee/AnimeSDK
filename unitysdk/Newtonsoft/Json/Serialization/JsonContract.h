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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E131070)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E132730)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1E1307D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E1306B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1E1327D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1E1327B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E1307F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E1307B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E130810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E130AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E1308A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E1310F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERRORCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E130A50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1E1321A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E130930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E131680)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E1309C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E131C10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1E130690)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E133430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E133100)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONERROR_OFFSET UNITYSDK_OFFSET(0x1E133550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E132DD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E132AA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1E1307E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E1306C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1E1327E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1E1327C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E130800)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E1307C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E130D70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E131380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1E132430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1E131910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1E131EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1E1306A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1327F0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContract_TypeDefinitionIndex = 7124;

	class JsonContract : public ::System::Object
	{
	public:
		::System::Type* _createdType; // 0x10
		::System::Type* NonNullableUnderlyingType; // 0x18
		::System::Type* _UnderlyingType_k__BackingField; // 0x20
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializingCallbacks; // 0x28
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x30
		::System::Func_1<::System::Object*>* _DefaultCreator_k__BackingField; // 0x38
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializingCallbacks; // 0x40
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializedCallbacks; // 0x48
		::Newtonsoft::Json::JsonConverter* _InternalConverter_k__BackingField; // 0x50
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* _onErrorCallbacks; // 0x58
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializedCallbacks; // 0x60
		::System::Boolean IsNullable; // 0x68
		::System::Boolean IsSealed; // 0x69
		::System::Boolean IsConvertable; // 0x6A
		::System::Boolean _DefaultCreatorNonPublic_k__BackingField; // 0x6B
		::Newtonsoft::Json::Serialization::JsonContractType ContractType; // 0x6C
		::Newtonsoft::Json::ReadType InternalReadType; // 0x70
		::System::Boolean IsReadOnlyOrFixedSize; // 0x74
		::System::Boolean IsEnum; // 0x75
		::System::Boolean IsInstantiable; // 0x76
		::System::Nullable_1<::System::Boolean> _IsReference_k__BackingField; // 0x77

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
