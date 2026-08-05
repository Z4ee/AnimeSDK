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

#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1ED544A0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1ED548B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED542F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1ED544E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1ED54330)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x1ED541D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1ED54830)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED546B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1ED54570)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54730)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED546F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54190)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1ED54350)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1ED544C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54770)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED547B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1ED54670)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1ED545D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54270)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED540D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54150)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54110)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED541F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54090)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1ED54460)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ED54370)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED547F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1ED54480)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1ED542B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54230)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1ED544B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x1ED548D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54310)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1ED54550)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1ED54340)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x1ED541E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1ED548A0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED546D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1ED545C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54750)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54710)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED541B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1ED54360)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1ED544D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54790)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED547D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1ED54690)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1ED545E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54290)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED540F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54170)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54130)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54210)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED540B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1ED54470)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ED543C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54810)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x1ED54490)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x1ED542D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1ED54250)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED548E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED54930)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializerSettings_TypeDefinitionIndex = 7013;

	class JsonSerializerSettings : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_DefaultCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerSettings_TypeDefinitionIndex)->GetStaticField(0x5F80);
		}
		static ::System::Runtime::Serialization::StreamingContext* StaticGet_DefaultContext()
		{
			return (::System::Runtime::Serialization::StreamingContext*)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerSettings_TypeDefinitionIndex)->GetStaticField(0x5F88);
		}
		// static const ::Newtonsoft::Json::ReferenceLoopHandling DefaultReferenceLoopHandling; // 0x0
		// static const ::Newtonsoft::Json::MissingMemberHandling DefaultMissingMemberHandling; // 0x0
		// static const ::Newtonsoft::Json::NullValueHandling DefaultNullValueHandling; // 0x0
		// static const ::Newtonsoft::Json::DefaultValueHandling DefaultDefaultValueHandling; // 0x0
		// static const ::Newtonsoft::Json::ObjectCreationHandling DefaultObjectCreationHandling; // 0x0
		// static const ::Newtonsoft::Json::PreserveReferencesHandling DefaultPreserveReferencesHandling; // 0x0
		// static const ::Newtonsoft::Json::ConstructorHandling DefaultConstructorHandling; // 0x0
		// static const ::Newtonsoft::Json::TypeNameHandling DefaultTypeNameHandling; // 0x0
		// static const ::Newtonsoft::Json::MetadataPropertyHandling DefaultMetadataPropertyHandling; // 0x0
		// static const ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle DefaultTypeNameAssemblyFormat; // 0x0
		// static const ::Newtonsoft::Json::Formatting DefaultFormatting; // 0x0
		// static const ::Newtonsoft::Json::DateFormatHandling DefaultDateFormatHandling; // 0x0
		// static const ::Newtonsoft::Json::DateTimeZoneHandling DefaultDateTimeZoneHandling; // 0x0
		// static const ::Newtonsoft::Json::DateParseHandling DefaultDateParseHandling; // 0x0
		// static const ::Newtonsoft::Json::FloatParseHandling DefaultFloatParseHandling; // 0x0
		// static const ::Newtonsoft::Json::FloatFormatHandling DefaultFloatFormatHandling; // 0x0
		// static const ::Newtonsoft::Json::StringEscapeHandling DefaultStringEscapeHandling; // 0x0
		// static const ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle DefaultFormatterAssemblyStyle; // 0x0
		// static const ::System::Boolean DefaultCheckAdditionalContent; // 0x0
		// static const ::System::String* DefaultDateFormatString; // 0x0
		::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField; // 0x10
		::System::String* _dateFormatString; // 0x18
		::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> _context; // 0x20
		::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* _ReferenceResolverProvider_k__BackingField; // 0x38
		::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField; // 0x40
		::System::Globalization::CultureInfo* _culture; // 0x48
		::System::Runtime::Serialization::SerializationBinder* _Binder_k__BackingField; // 0x50
		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* _Error_k__BackingField; // 0x58
		::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField; // 0x60
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* _Converters_k__BackingField; // 0x68
		::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> _constructorHandling; // 0x70
		::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0x78
		::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0x80
		::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0x88
		::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> _preserveReferencesHandling; // 0x90
		::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0x98
		::System::Nullable_1<::System::Int32> _maxDepth; // 0xA0
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0xA8
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0xB0
		::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> _typeNameAssemblyFormat; // 0xB8
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0xC0
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0xC8
		::System::Boolean _dateFormatStringSet; // 0xD0
		::System::Nullable_1<::System::Boolean> _checkAdditionalContent; // 0xD1
		::System::Boolean _maxDepthSet; // 0xD3
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0xD4
		::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0xDC
		::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> _metadataPropertyHandling; // 0xE4
		::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> _missingMemberHandling; // 0xEC
		::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting; // 0xF4
		::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0xFC

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

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling()
		{
			return ((::Newtonsoft::Json::MissingMemberHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET))(this);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MissingMemberHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MISSINGMEMBERHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ObjectCreationHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_OBJECTCREATIONHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::NullValueHandling get_NullValueHandling()
		{
			return ((::Newtonsoft::Json::NullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling()
		{
			return ((::Newtonsoft::Json::DefaultValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DEFAULTVALUEHANDLING_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* get_Converters()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET))(this);
		}

		::System::Void set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET))(this, value);
		}

		::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling()
		{
			return ((::Newtonsoft::Json::PreserveReferencesHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET))(this);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_PRESERVEREFERENCESHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling()
		{
			return ((::Newtonsoft::Json::MetadataPropertyHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET))(this);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MetadataPropertyHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_METADATAPROPERTYHANDLING_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat()
		{
			return ((::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling()
		{
			return ((::Newtonsoft::Json::ConstructorHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET))(this);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ConstructorHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONSTRUCTORHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET))(this);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IContractResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTRACTRESOLVER_OFFSET))(this, value);
		}

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_EQUALITYCOMPARER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::IReferenceResolver*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVER_OFFSET))(this, value);
		}

		::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* get_ReferenceResolverProvider()
		{
			return ((::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET))(this);
		}

		::System::Void set_ReferenceResolverProvider(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVERPROVIDER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return ((::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET))(this);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ITraceWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TRACEWRITER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return ((::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET))(this);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_BINDER_OFFSET))(this, value);
		}

		::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* get_Error()
		{
			return ((::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_ERROR_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::StreamingContext get_Context()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATSTRING_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_MaxDepth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MAXDEPTH_OFFSET))(this);
		}

		::System::Void set_MaxDepth(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MAXDEPTH_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling()
		{
			return ((::Newtonsoft::Json::DateFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATETIMEZONEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateParseHandling get_DateParseHandling()
		{
			return ((::Newtonsoft::Json::DateParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling()
		{
			return ((::Newtonsoft::Json::FloatFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling()
		{
			return ((::Newtonsoft::Json::FloatParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling()
		{
			return ((::Newtonsoft::Json::StringEscapeHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_STRINGESCAPEHANDLING_OFFSET))(this);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_STRINGESCAPEHANDLING_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CULTURE_OFFSET))(this, value);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CHECKADDITIONALCONTENT_OFFSET))(this);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CHECKADDITIONALCONTENT_OFFSET))(this, value);
		}
	};
}
