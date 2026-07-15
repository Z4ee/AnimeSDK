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
namespace Newtonsoft::Json::Serialization { class ErrorEventArgs; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace System { class String; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationBinder; }

#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x165F4C90)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x165F28B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x165F28D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x165F4C50)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x165F4C30)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2890)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x165F4C60)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x165F4CA0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x165F27B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2830)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2870)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2850)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x165F27F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2810)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET UNITYSDK_OFFSET(0x165F4C70)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x165F4C80)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x165F27D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x165F2790)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x165F4C40)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x165F4CB0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x165F4C10)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x165F4CD0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x165E97B0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializerSettings_TypeDefinitionIndex = 9266;

	class JsonSerializerSettings : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_DefaultCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerSettings_TypeDefinitionIndex)->GetStaticField(0x32240);
		}
		static ::System::Runtime::Serialization::StreamingContext* StaticGet_DefaultContext()
		{
			return (::System::Runtime::Serialization::StreamingContext*)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerSettings_TypeDefinitionIndex)->GetStaticField(0x32248);
		}
		::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* _ReferenceResolverProvider_k__BackingField; // 0x10
		::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> _context; // 0x18
		::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField; // 0x30
		::System::String* _dateFormatString; // 0x38
		::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField; // 0x40
		::System::Runtime::Serialization::SerializationBinder* _Binder_k__BackingField; // 0x48
		::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField; // 0x50
		::System::Globalization::CultureInfo* _culture; // 0x58
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* _Converters_k__BackingField; // 0x60
		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* _Error_k__BackingField; // 0x68
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0x70
		::System::Nullable_1<::System::Boolean> _checkAdditionalContent; // 0x78
		::System::Boolean _maxDepthSet; // 0x7A
		::System::Boolean _dateFormatStringSet; // 0x7B
		::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> _missingMemberHandling; // 0x7C
		::System::Nullable_1<::System::Int32> _maxDepth; // 0x84
		::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0x8C
		::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0x94
		::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> _constructorHandling; // 0x9C
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0xA4
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0xAC
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0xB4
		::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0xBC
		::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0xC4
		::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0xCC
		::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> _preserveReferencesHandling; // 0xD4
		::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> _typeNameAssemblyFormat; // 0xDC
		::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> _metadataPropertyHandling; // 0xE4
		::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0xEC
		::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting; // 0xF4
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0xFC

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling()
		{
			return ((::Newtonsoft::Json::MissingMemberHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::NullValueHandling get_NullValueHandling()
		{
			return ((::Newtonsoft::Json::NullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling()
		{
			return ((::Newtonsoft::Json::DefaultValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* get_Converters()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET))(this);
		}

		::System::Void set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling()
		{
			return ((::Newtonsoft::Json::PreserveReferencesHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling()
		{
			return ((::Newtonsoft::Json::MetadataPropertyHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET))(this);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat()
		{
			return ((::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this);
		}

		::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling()
		{
			return ((::Newtonsoft::Json::ConstructorHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET))(this);
		}

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* get_ReferenceResolverProvider()
		{
			return ((::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return ((::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET))(this);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return ((::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET))(this);
		}

		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* get_Error()
		{
			return ((::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET))(this);
		}

		::System::Runtime::Serialization::StreamingContext get_Context()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET))(this, a1);
		}
	};
}
