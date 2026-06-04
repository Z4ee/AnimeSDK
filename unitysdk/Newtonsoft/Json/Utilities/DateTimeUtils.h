#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DateFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/Utilities/DateTimeParser.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringReference.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Xml/XmlDateTimeSerializationMode.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_1_OFFSET UNITYSDK_OFFSET(0x18875B60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_2_OFFSET UNITYSDK_OFFSET(0x18875C00)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x18875A30)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET UNITYSDK_OFFSET(0x18875CA0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x18878680)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET UNITYSDK_OFFSET(0x18876440)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET UNITYSDK_OFFSET(0x18845BF0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET UNITYSDK_OFFSET(0x188784C0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x18875570)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x188756A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x18875760)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x18875620)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_1_OFFSET UNITYSDK_OFFSET(0x188759C0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET UNITYSDK_OFFSET(0x18875880)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET UNITYSDK_OFFSET(0x18876EB0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET UNITYSDK_OFFSET(0x18875D30)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET UNITYSDK_OFFSET(0x18876CE0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET UNITYSDK_OFFSET(0x18877450)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET UNITYSDK_OFFSET(0x188765E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET UNITYSDK_OFFSET(0x18877200)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x18862340)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x18876F30)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_1_OFFSET UNITYSDK_OFFSET(0x18862040)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET UNITYSDK_OFFSET(0x188769F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET UNITYSDK_OFFSET(0x188774C0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET UNITYSDK_OFFSET(0x18877660)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSIALTICKSTOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x18875B10)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x1886C660)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x18877D50)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_1_OFFSET UNITYSDK_OFFSET(0x18877870)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1886C510)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET UNITYSDK_OFFSET(0x18877F60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18875490)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeUtils_TypeDefinitionIndex = 9314;

	class DateTimeUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0x32C80);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0x32C88);
		}
		static ::System::Int64* StaticGet_InitialJavaScriptDateTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0xA0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS__CCTOR_OFFSET))();
		}

		static ::System::TimeSpan GetUtcOffset(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET))(a1);
		}

		static ::System::Xml::XmlDateTimeSerializationMode ToSerializationMode(::System::DateTimeKind a1)
		{
			return ((::System::Xml::XmlDateTimeSerializationMode(*)(::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET))(a1);
		}

		static ::System::DateTime EnsureDateTime(::System::DateTime a1, ::Newtonsoft::Json::DateTimeZoneHandling a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET))(a1, a2);
		}

		static ::System::DateTime SwitchToLocalTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET))(a1);
		}

		static ::System::DateTime SwitchToUtcTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET))(a1);
		}

		static ::System::Int64 ToUniversalTicks(::System::DateTime a1)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET))(a1);
		}

		static ::System::Int64 ToUniversalTicks_1(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_1_OFFSET))(a1, a2);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET))(a1, a2);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks_1(::System::DateTime a1)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_1_OFFSET))(a1);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks_2(::System::DateTime a1, ::System::Boolean a2)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 UniversialTicksToJavaScriptTicks(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSIALTICKSTOJAVASCRIPTTICKS_OFFSET))(a1);
		}

		static ::System::DateTime ConvertJavaScriptTicksToDateTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET))(a1);
		}

		static ::System::Boolean TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference a1, ::Newtonsoft::Json::DateTimeZoneHandling a2, ::System::DateTime& a3)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference a1, ::System::DateTimeOffset& a2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET))(a1, a2);
		}

		static ::System::DateTime CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser a1)
		{
			return ((::System::DateTime(*)(::Newtonsoft::Json::Utilities::DateTimeParser))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET))(a1);
		}

		static ::System::Boolean TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference a1, ::Newtonsoft::Json::DateTimeZoneHandling a2, ::System::String* a3, ::System::Globalization::CultureInfo* a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseDateTime_1(::System::String* a1, ::Newtonsoft::Json::DateTimeZoneHandling a2, ::System::String* a3, ::System::Globalization::CultureInfo* a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference a1, ::System::String* a2, ::System::Globalization::CultureInfo* a3, ::System::DateTimeOffset& a4)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseDateTimeOffset_1(::System::String* a1, ::System::String* a2, ::System::Globalization::CultureInfo* a3, ::System::DateTimeOffset& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference a1, ::System::Int64& a2, ::System::TimeSpan& a3, ::System::DateTimeKind& a4)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::Int64&, ::System::TimeSpan&, ::System::DateTimeKind&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference a1, ::Newtonsoft::Json::DateTimeZoneHandling a2, ::System::DateTime& a3)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseDateTimeExact(::System::String* a1, ::Newtonsoft::Json::DateTimeZoneHandling a2, ::System::String* a3, ::System::Globalization::CultureInfo* a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference a1, ::System::DateTimeOffset& a2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseDateTimeOffsetExact(::System::String* a1, ::System::String* a2, ::System::Globalization::CultureInfo* a3, ::System::DateTimeOffset& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryReadOffset(::Newtonsoft::Json::Utilities::StringReference a1, ::System::Int32 a2, ::System::TimeSpan& a3)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::Int32, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteDateTimeString(::System::IO::TextWriter* a1, ::System::DateTime a2, ::Newtonsoft::Json::DateFormatHandling a3, ::System::String* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTime, ::Newtonsoft::Json::DateFormatHandling, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 WriteDateTimeString_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::DateTime a3, ::System::Nullable_1<::System::TimeSpan> a4, ::System::DateTimeKind a5, ::Newtonsoft::Json::DateFormatHandling a6)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::DateTime, ::System::Nullable_1<::System::TimeSpan>, ::System::DateTimeKind, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 WriteDefaultIsoDate(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::DateTime a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CopyIntToCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 WriteDateTimeOffset(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::TimeSpan a3, ::Newtonsoft::Json::DateFormatHandling a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::TimeSpan, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void WriteDateTimeOffsetString(::System::IO::TextWriter* a1, ::System::DateTimeOffset a2, ::Newtonsoft::Json::DateFormatHandling a3, ::System::String* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTimeOffset, ::Newtonsoft::Json::DateFormatHandling, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetDateValues(::System::DateTime a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET))(a1, a2, a3, a4);
		}
	};
}
