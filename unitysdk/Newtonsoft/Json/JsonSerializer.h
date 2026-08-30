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

#define NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x18140020)
#define NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18140950)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x181393B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x181418C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x18140910)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x181408E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18142890)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1811D680)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_1_OFFSET UNITYSDK_OFFSET(0x18143B50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET UNITYSDK_OFFSET(0x18143B40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x18143AF0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x181407C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x18140760)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x181406F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x181406B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x18140780)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x18140630)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x18140540)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x18140200)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET UNITYSDK_OFFSET(0x18139DC0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET UNITYSDK_OFFSET(0x18143E20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18141B70)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET UNITYSDK_OFFSET(0x18141AE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x181400A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET UNITYSDK_OFFSET(0x18142600)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18142E10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x181212E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1811FE90)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x181420B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x18140190)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x181407E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x181405C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x18140770)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x18140700)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x181404D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x18140220)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x181407A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x18140640)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x181403F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x18140460)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x18140550)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x18140310)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x18140380)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x18140120)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x18140210)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x181402A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x18140230)
#define NEWTONSOFT_JSON_JSONSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x181407F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializer_TypeDefinitionIndex = 9562;

	class JsonSerializer : public ::System::Object
	{
	public:
		::System::String* _dateFormatString; // 0x10
		::Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver; // 0x18
		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error; // 0x20
		::System::Runtime::Serialization::StreamingContext _context; // 0x28
		::System::Runtime::Serialization::SerializationBinder* _binder; // 0x38
		::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x40
		::System::Globalization::CultureInfo* _culture; // 0x48
		::Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter; // 0x50
		::Newtonsoft::Json::JsonConverterCollection* _converters; // 0x58
		::System::Collections::IEqualityComparer* _equalityComparer; // 0x60
		::Newtonsoft::Json::ObjectCreationHandling _objectCreationHandling; // 0x68
		::Newtonsoft::Json::ReferenceLoopHandling _referenceLoopHandling; // 0x6C
		::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0x70
		::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0x78
		::Newtonsoft::Json::ConstructorHandling _constructorHandling; // 0x80
		::Newtonsoft::Json::MissingMemberHandling _missingMemberHandling; // 0x84
		::Newtonsoft::Json::PreserveReferencesHandling _preserveReferencesHandling; // 0x88
		::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting; // 0x8C
		::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0x94
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _typeNameAssemblyFormat; // 0x9C
		::Newtonsoft::Json::MetadataPropertyHandling _metadataPropertyHandling; // 0xA0
		::System::Boolean _maxDepthSet; // 0xA4
		::System::Boolean _dateFormatStringSet; // 0xA5
		::System::Nullable_1<::System::Boolean> _checkAdditionalContent; // 0xA6
		::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0xA8
		::Newtonsoft::Json::TypeNameHandling _typeNameHandling; // 0xB0
		::Newtonsoft::Json::DefaultValueHandling _defaultValueHandling; // 0xB4
		::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0xB8
		::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0xC0
		::System::Nullable_1<::System::Int32> _maxDepth; // 0xC8
		::Newtonsoft::Json::NullValueHandling _nullValueHandling; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET))(this, a1);
		}

		::System::Void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET))(this, a1);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IReferenceResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET))(this, a1);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return ((::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET))(this);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ITraceWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET))(this, a1);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET))(this, a1);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, a1);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ObjectCreationHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET))(this, a1);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ConstructorHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling()
		{
			return ((::Newtonsoft::Json::MetadataPropertyHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET))(this);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MetadataPropertyHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return ((::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET))(this);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IContractResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::StreamingContext get_Context()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET))(this, a1);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET))(this);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean IsCheckAdditionalContentSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET))(this);
		}

		static ::Newtonsoft::Json::JsonSerializer* Create()
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET))();
		}

		static ::Newtonsoft::Json::JsonSerializer* Create_1(::Newtonsoft::Json::JsonSerializerSettings* a1)
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_1_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::JsonSerializer* CreateDefault()
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET))();
		}

		static ::Newtonsoft::Json::JsonSerializer* CreateDefault_1(::Newtonsoft::Json::JsonSerializerSettings* a1)
		{
			return ((::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_1_OFFSET))(a1);
		}

		static ::System::Void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer* a1, ::Newtonsoft::Json::JsonSerializerSettings* a2)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET))(a1, a2);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET))(this, a1, a2);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetupReader(::Newtonsoft::Json::JsonReader* a1, ::System::Globalization::CultureInfo*& a2, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& a3, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& a4, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& a5, ::System::Nullable_1<::System::Int32>& a6, ::System::String*& a7)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*&, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>&, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>&, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>&, ::System::Nullable_1<::System::Int32>&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ResetReader(::Newtonsoft::Json::JsonReader* a1, ::System::Globalization::CultureInfo* a2, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> a3, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> a4, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> a5, ::System::Nullable_1<::System::Int32> a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>, ::System::Nullable_1<::System::Int32>, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Serialize_1(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SerializeInternal(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET))(this, a1);
		}

		static ::Newtonsoft::Json::JsonConverter* GetMatchingConverter_1(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* a1, ::System::Type* a2)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_1_OFFSET))(a1, a2);
		}

		::System::Void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ErrorEventArgs*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET))(this, a1);
		}
	};
}
