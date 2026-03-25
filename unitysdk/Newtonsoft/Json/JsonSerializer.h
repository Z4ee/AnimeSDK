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
#include "unitysdk/Newtonsoft/Json/MetadataPropertyHandling.h"
#include "unitysdk/Newtonsoft/Json/MissingMemberHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/PreserveReferencesHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonConverterCollection; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class ErrorEventArgs; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x164447E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET UNITYSDK_OFFSET(0x16445110)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x1643F7E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x16445890)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x164450D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x164450A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x164465A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1642D890)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_1_OFFSET UNITYSDK_OFFSET(0x16447480)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET UNITYSDK_OFFSET(0x16447470)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x16447420)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x16444F80)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x16444F20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x16444EB0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x16444E70)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x16444F40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x16444DF0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x16444D00)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x164449C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET UNITYSDK_OFFSET(0x1643FF40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET UNITYSDK_OFFSET(0x16447610)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16445AC0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET UNITYSDK_OFFSET(0x16445AB0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x16444860)
#define NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET UNITYSDK_OFFSET(0x16446310)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x164468D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1642FC50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1642F190)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x16445E10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x16444950)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x16444FA0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x16444D80)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x16444F30)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x16444EC0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x16444C90)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x164449E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x16444F60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x16444E00)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x16444BB0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x16444C20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x16444D10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x16444AD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x16444B40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x164448E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x164449D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x16444A60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x164449F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x16444FB0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializer_TypeDefinitionIndex = 8222;

	class JsonSerializer : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::StreamingContext _context; // 0x10
		::Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver; // 0x20
		::System::String* _dateFormatString; // 0x28
		::Newtonsoft::Json::JsonConverterCollection* _converters; // 0x30
		::System::Collections::IEqualityComparer* _equalityComparer; // 0x38
		::Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter; // 0x40
		::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x48
		::System::Globalization::CultureInfo* _culture; // 0x50
		::System::Runtime::Serialization::SerializationBinder* _binder; // 0x58
		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error; // 0x60
		::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0x68
		::System::Nullable_1<::System::Int32> _maxDepth; // 0x70
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _typeNameAssemblyFormat; // 0x78
		::Newtonsoft::Json::MissingMemberHandling _missingMemberHandling; // 0x7C
		::Newtonsoft::Json::ObjectCreationHandling _objectCreationHandling; // 0x80
		::Newtonsoft::Json::NullValueHandling _nullValueHandling; // 0x84
		::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0x88
		::Newtonsoft::Json::MetadataPropertyHandling _metadataPropertyHandling; // 0x90
		::Newtonsoft::Json::ReferenceLoopHandling _referenceLoopHandling; // 0x94
		::Newtonsoft::Json::TypeNameHandling _typeNameHandling; // 0x98
		::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting; // 0x9C
		::Newtonsoft::Json::ConstructorHandling _constructorHandling; // 0xA4
		::Newtonsoft::Json::DefaultValueHandling _defaultValueHandling; // 0xA8
		::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0xAC
		::System::Boolean _dateFormatStringSet; // 0xB4
		::System::Nullable_1<::System::Boolean> _checkAdditionalContent; // 0xB5
		::System::Boolean _maxDepthSet; // 0xB7
		::Newtonsoft::Json::PreserveReferencesHandling _preserveReferencesHandling; // 0xB8
		::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0xBC
		::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0xC4
		::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET))(this, value);
		}

		::System::Void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET))(this, value);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IReferenceResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET))(this, value);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return ((::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET))(this);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ITraceWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET))(this, value);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET))(this, value);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, value);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, value);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET))(this, value);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ObjectCreationHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET))(this, value);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ConstructorHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling()
		{
			return ((::Newtonsoft::Json::MetadataPropertyHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET))(this);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MetadataPropertyHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return ((::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET))(this);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IContractResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::StreamingContext get_Context()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET))(this, value);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET))(this);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET))(this, value);
		}

		::System::Boolean IsCheckAdditionalContentSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET))(this);
		}

		static ::Newtonsoft::Json::JsonSerializer* Create()
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET))();
		}

		static ::Newtonsoft::Json::JsonSerializer* Create_1(::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_1_OFFSET))(settings);
		}

		static ::Newtonsoft::Json::JsonSerializer* CreateDefault()
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET))();
		}

		static ::Newtonsoft::Json::JsonSerializer* CreateDefault_1(::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_1_OFFSET))(settings);
		}

		static ::System::Void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET))(serializer, settings);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET))(this, reader, target);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET))(this, reader, target);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(this, reader, objectType);
		}

		::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET))(this, reader, objectType);
		}

		::System::Void SetupReader(::Newtonsoft::Json::JsonReader* reader, ::System::Globalization::CultureInfo*& previousCulture, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& previousDateTimeZoneHandling, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& previousDateParseHandling, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& previousFloatParseHandling, ::System::Nullable_1<::System::Int32>& previousMaxDepth, ::System::String*& previousDateFormatString)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*&, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>&, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>&, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>&, ::System::Nullable_1<::System::Int32>&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET))(this, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
		}

		::System::Void ResetReader(::Newtonsoft::Json::JsonReader* reader, ::System::Globalization::CultureInfo* previousCulture, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> previousDateTimeZoneHandling, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> previousDateParseHandling, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> previousFloatParseHandling, ::System::Nullable_1<::System::Int32> previousMaxDepth, ::System::String* previousDateFormatString)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>, ::System::Nullable_1<::System::Int32>, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET))(this, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(this, jsonWriter, value, objectType);
		}

		::System::Void Serialize_1(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET))(this, jsonWriter, value);
		}

		::System::Void SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET))(this, jsonWriter, value, objectType);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type* type)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET))(this, type);
		}

		static ::Newtonsoft::Json::JsonConverter* GetMatchingConverter_1(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* converters, ::System::Type* objectType)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_1_OFFSET))(converters, objectType);
		}

		::System::Void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ErrorEventArgs*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET))(this, e);
		}
	};
}
