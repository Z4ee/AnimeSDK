#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ConstructorHandling.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/JsonSerializer.h"
#include "unitysdk/Newtonsoft/Json/MetadataPropertyHandling.h"
#include "unitysdk/Newtonsoft/Json/MissingMemberHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/PreserveReferencesHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonConverterCollection; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class ErrorEventArgs; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalBase; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalWriter; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x164925B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16492B10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x16477830)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x16492AB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x164929D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x16492730)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x164926D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x16492A50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x164928E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x164927F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x16492640)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16492B60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x164925E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16492BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x164929A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x16492AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x16492970)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x16492A10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x16492760)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x16492700)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x164926A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x16492A80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x16492910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x16492790)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x164927C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x16492820)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x16492880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x16492850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x16492610)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x16492670)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x16492940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x164928B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1648CD10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x16481B80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerProxy_TypeDefinitionIndex = 8343;

	class JsonSerializerProxy : public ::Newtonsoft::Json::JsonSerializer
	{
	public:
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _serializerReader; // 0xD8
		::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* _serializerWriter; // 0xE0
		::Newtonsoft::Json::JsonSerializer* _serializer; // 0xE8

		::System::Void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* serializerReader)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_OFFSET))(this, serializerReader);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* serializerWriter)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_1_OFFSET))(this, serializerWriter);
		}

		::System::Void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_ADD_ERROR_OFFSET))(this, value);
		}

		::System::Void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_REMOVE_ERROR_OFFSET))(this, value);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IReferenceResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCERESOLVER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return ((::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TRACEWRITER_OFFSET))(this);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ITraceWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TRACEWRITER_OFFSET))(this, value);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return ((::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET))(this);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DEFAULTVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTRACTRESOLVER_OFFSET))(this);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IContractResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTRACTRESOLVER_OFFSET))(this, value);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET))(this, value);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ObjectCreationHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_OBJECTCREATIONHANDLING_OFFSET))(this, value);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, value);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling()
		{
			return ((::Newtonsoft::Json::MetadataPropertyHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_METADATAPROPERTYHANDLING_OFFSET))(this);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MetadataPropertyHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_METADATAPROPERTYHANDLING_OFFSET))(this, value);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, value);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ConstructorHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET))(this, value);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_BINDER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::StreamingContext get_Context()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTEXT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FORMATTING_OFFSET))(this, value);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CHECKADDITIONALCONTENT_OFFSET))(this);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CHECKADDITIONALCONTENT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* GetInternalSerializer()
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GETINTERNALSERIALIZER_OFFSET))(this);
		}

		::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_DESERIALIZEINTERNAL_OFFSET))(this, reader, objectType);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_POPULATEINTERNAL_OFFSET))(this, reader, target);
		}

		::System::Void SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* rootType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SERIALIZEINTERNAL_OFFSET))(this, jsonWriter, value, rootType);
		}
	};
}
