#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ConstructorHandling.h"
#include "unitysdk/Newtonsoft/Json/DateFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/DateParseHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatParseHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/JsonSerializer.h"
#include "unitysdk/Newtonsoft/Json/MetadataPropertyHandling.h"
#include "unitysdk/Newtonsoft/Json/MissingMemberHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/PreserveReferencesHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"
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
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x1E2B63F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7020)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x1E2B6EC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1E2B69C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1E2B6E60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6960)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E2B6A20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2B6600)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x1E2B6570)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1E2B6DA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6B00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B6D40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6BC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6B60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B65A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1E2B6510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6C20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6C80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1E2B6AA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1E2B6E00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B68A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B66C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6720)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B67E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6780)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2B6450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1E2B64B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1E2B6900)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7070)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x1E2B6420)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B70C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1E2B69F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1E2B6E90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6990)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E2B6A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2B6630)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1E2B6DD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6B30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B6D70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6BF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6B90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B65D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1E2B6540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6CB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1E2B6AD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1E2B6E30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B68D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6690)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B66F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6750)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B67B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1E2B6480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6D10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1E2B64E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1E2B6930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E2B6870)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B6F80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6EE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerProxy_TypeDefinitionIndex = 7143;

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

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCERESOLVER_OFFSET))(this);
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

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_EQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return ((::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET))(this);
		}

		::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling()
		{
			return ((::Newtonsoft::Json::DefaultValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
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

		::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling()
		{
			return ((::Newtonsoft::Json::MissingMemberHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MISSINGMEMBERHANDLING_OFFSET))(this);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::NullValueHandling get_NullValueHandling()
		{
			return ((::Newtonsoft::Json::NullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_NULLVALUEHANDLING_OFFSET))(this);
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

		::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling()
		{
			return ((::Newtonsoft::Json::PreserveReferencesHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_PRESERVEREFERENCESHANDLING_OFFSET))(this);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEHANDLING_OFFSET))(this);
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

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat()
		{
			return ((::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling()
		{
			return ((::Newtonsoft::Json::ConstructorHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONSTRUCTORHANDLING_OFFSET))(this);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ConstructorHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return ((::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_BINDER_OFFSET))(this);
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

		::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling()
		{
			return ((::Newtonsoft::Json::DateFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATETIMEZONEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateParseHandling get_DateParseHandling()
		{
			return ((::Newtonsoft::Json::DateParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling()
		{
			return ((::Newtonsoft::Json::FloatFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling()
		{
			return ((::Newtonsoft::Json::FloatParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling()
		{
			return ((::Newtonsoft::Json::StringEscapeHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_STRINGESCAPEHANDLING_OFFSET))(this);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_STRINGESCAPEHANDLING_OFFSET))(this, value);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATSTRING_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CULTURE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_MaxDepth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MAXDEPTH_OFFSET))(this);
		}

		::System::Void set_MaxDepth(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MAXDEPTH_OFFSET))(this, value);
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
