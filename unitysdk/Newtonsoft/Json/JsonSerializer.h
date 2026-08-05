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
namespace System::IO { class TextReader; }
namespace System::IO { class TextWriter; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x1F54E060)
#define NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F54EF10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x1F54F820)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1F54F6D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F54EEB0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x1F54EE60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F550660)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1F550580)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1F550570)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F550550)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_1_OFFSET UNITYSDK_OFFSET(0x1F5512B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET UNITYSDK_OFFSET(0x1F5512A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1F54E1B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1F54E270)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1F54ECE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E730)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F54E980)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F54E8B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x1F54E830)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1F54EBC0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E9E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1F54EB60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EA60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EA20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E630)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1F54E310)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EAE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EAA0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1F54E9A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1F54EC40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E7B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E530)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E5B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E6B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E430)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E4B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1F54E160)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EB20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1F54E2F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1F54E3B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E330)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET UNITYSDK_OFFSET(0x1F54ED10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET UNITYSDK_OFFSET(0x1F551480)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F54F940)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_1_OFFSET UNITYSDK_OFFSET(0x1F54F930)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET UNITYSDK_OFFSET(0x1F54F850)
#define NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x1F54E0E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET UNITYSDK_OFFSET(0x1F5502A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F550A50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1F5509B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1F5509D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1F550990)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F550910)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x1F54FC10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1F54E280)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1F54ED00)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E740)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F54E990)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F54E8C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1F54EC30)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EA00)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1F54EBB0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EA80)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EA40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E640)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1F54E320)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EB00)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EAC0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1F54E9C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1F54EC50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E7C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E540)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E5C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E6C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E440)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E4C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1F54E200)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54EB40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1F54E300)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1F54E3C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1F54E340)
#define NEWTONSOFT_JSON_JSONSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F54ED20)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializer_TypeDefinitionIndex = 7012;

	class JsonSerializer : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver; // 0x10
		::System::String* _dateFormatString; // 0x18
		::System::Runtime::Serialization::StreamingContext _context; // 0x20
		::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x30
		::Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter; // 0x38
		::System::Collections::IEqualityComparer* _equalityComparer; // 0x40
		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error; // 0x48
		::System::Runtime::Serialization::SerializationBinder* _binder; // 0x50
		::Newtonsoft::Json::JsonConverterCollection* _converters; // 0x58
		::System::Globalization::CultureInfo* _culture; // 0x60
		::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0x68
		::System::Boolean _dateFormatStringSet; // 0x70
		::System::Nullable_1<::System::Boolean> _checkAdditionalContent; // 0x71
		::System::Boolean _maxDepthSet; // 0x73
		::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0x74
		::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting; // 0x7C
		::Newtonsoft::Json::ReferenceLoopHandling _referenceLoopHandling; // 0x84
		::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0x88
		::Newtonsoft::Json::DefaultValueHandling _defaultValueHandling; // 0x90
		::Newtonsoft::Json::MetadataPropertyHandling _metadataPropertyHandling; // 0x94
		::Newtonsoft::Json::MissingMemberHandling _missingMemberHandling; // 0x98
		::Newtonsoft::Json::NullValueHandling _nullValueHandling; // 0x9C
		::Newtonsoft::Json::ConstructorHandling _constructorHandling; // 0xA0
		::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0xA4
		::Newtonsoft::Json::TypeNameHandling _typeNameHandling; // 0xAC
		::System::Nullable_1<::System::Int32> _maxDepth; // 0xB0
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _typeNameAssemblyFormat; // 0xB8
		::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0xBC
		::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0xC4
		::Newtonsoft::Json::PreserveReferencesHandling _preserveReferencesHandling; // 0xCC
		::Newtonsoft::Json::ObjectCreationHandling _objectCreationHandling; // 0xD0

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

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IReferenceResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return ((::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_BINDER_OFFSET))(this);
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

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_EQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat()
		{
			return ((::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling()
		{
			return ((::Newtonsoft::Json::PreserveReferencesHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_PRESERVEREFERENCESHANDLING_OFFSET))(this);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling()
		{
			return ((::Newtonsoft::Json::MissingMemberHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_MISSINGMEMBERHANDLING_OFFSET))(this);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::NullValueHandling get_NullValueHandling()
		{
			return ((::Newtonsoft::Json::NullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling()
		{
			return ((::Newtonsoft::Json::DefaultValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
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

		::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling()
		{
			return ((::Newtonsoft::Json::ConstructorHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONSTRUCTORHANDLING_OFFSET))(this);
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

		::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling()
		{
			return ((::Newtonsoft::Json::DateFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATETIMEZONEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateParseHandling get_DateParseHandling()
		{
			return ((::Newtonsoft::Json::DateParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling()
		{
			return ((::Newtonsoft::Json::FloatParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling()
		{
			return ((::Newtonsoft::Json::FloatFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling()
		{
			return ((::Newtonsoft::Json::StringEscapeHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_STRINGESCAPEHANDLING_OFFSET))(this);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_STRINGESCAPEHANDLING_OFFSET))(this, value);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATSTRING_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CULTURE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_MaxDepth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_MAXDEPTH_OFFSET))(this);
		}

		::System::Void set_MaxDepth(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MAXDEPTH_OFFSET))(this, value);
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

		::System::Void Populate(::System::IO::TextReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET))(this, reader, target);
		}

		::System::Void Populate_1(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_1_OFFSET))(this, reader, target);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET))(this, reader, target);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(this, reader);
		}

		::System::Object* Deserialize_1(::System::IO::TextReader* reader, ::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::TextReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_1_OFFSET))(this, reader, objectType);
		}

		::System::Object* Deserialize_2(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_2_OFFSET))(this, reader, objectType);
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

		::System::Void Serialize(::System::IO::TextWriter* textWriter, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(this, textWriter, value);
		}

		::System::Void Serialize_1(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_1_OFFSET))(this, jsonWriter, value, objectType);
		}

		::System::Void Serialize_2(::System::IO::TextWriter* textWriter, ::System::Object* value, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_2_OFFSET))(this, textWriter, value, objectType);
		}

		::System::Void Serialize_3(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_3_OFFSET))(this, jsonWriter, value);
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
