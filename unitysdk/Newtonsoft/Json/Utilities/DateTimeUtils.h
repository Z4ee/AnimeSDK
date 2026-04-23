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

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_1_OFFSET UNITYSDK_OFFSET(0x17AC70A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_2_OFFSET UNITYSDK_OFFSET(0x17AC7140)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x17AC6F70)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET UNITYSDK_OFFSET(0x17AC71E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x17AC9CF0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET UNITYSDK_OFFSET(0x17AC7980)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET UNITYSDK_OFFSET(0x17A95B60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET UNITYSDK_OFFSET(0x17AC9B10)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x17AC6AB0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x17AC6BE0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x17AC6CA0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x17AC6B60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_1_OFFSET UNITYSDK_OFFSET(0x17AC6F00)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET UNITYSDK_OFFSET(0x17AC6DC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET UNITYSDK_OFFSET(0x17AC8420)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET UNITYSDK_OFFSET(0x17AC7270)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET UNITYSDK_OFFSET(0x17AC8250)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET UNITYSDK_OFFSET(0x17AC89F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET UNITYSDK_OFFSET(0x17AC7B20)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET UNITYSDK_OFFSET(0x17AC87A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x17AB3F10)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x17AC84A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_1_OFFSET UNITYSDK_OFFSET(0x17AB3C10)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET UNITYSDK_OFFSET(0x17AC7F30)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET UNITYSDK_OFFSET(0x17AC8A60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET UNITYSDK_OFFSET(0x17AC8B90)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSIALTICKSTOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x17AC7050)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x17ABDC40)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x17AC92A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_1_OFFSET UNITYSDK_OFFSET(0x17AC8DB0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x17ABDAF0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET UNITYSDK_OFFSET(0x17AC94F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC69D0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeUtils_TypeDefinitionIndex = 8411;

	class DateTimeUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0x35190);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0x35198);
		}
		static ::System::Int64* StaticGet_InitialJavaScriptDateTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(DateTimeUtils_TypeDefinitionIndex)->GetStaticField(0xD100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS__CCTOR_OFFSET))();
		}

		static ::System::TimeSpan GetUtcOffset(::System::DateTime d)
		{
			return ((::System::TimeSpan(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET))(d);
		}

		static ::System::Xml::XmlDateTimeSerializationMode ToSerializationMode(::System::DateTimeKind kind)
		{
			return ((::System::Xml::XmlDateTimeSerializationMode(*)(::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET))(kind);
		}

		static ::System::DateTime EnsureDateTime(::System::DateTime value, ::Newtonsoft::Json::DateTimeZoneHandling timeZone)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET))(value, timeZone);
		}

		static ::System::DateTime SwitchToLocalTime(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET))(value);
		}

		static ::System::DateTime SwitchToUtcTime(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET))(value);
		}

		static ::System::Int64 ToUniversalTicks(::System::DateTime dateTime)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET))(dateTime);
		}

		static ::System::Int64 ToUniversalTicks_1(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_1_OFFSET))(dateTime, offset);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET))(dateTime, offset);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks_1(::System::DateTime dateTime)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_1_OFFSET))(dateTime);
		}

		static ::System::Int64 ConvertDateTimeToJavaScriptTicks_2(::System::DateTime dateTime, ::System::Boolean convertToUtc)
		{
			return ((::System::Int64(*)(::System::DateTime, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_2_OFFSET))(dateTime, convertToUtc);
		}

		static ::System::Int64 UniversialTicksToJavaScriptTicks(::System::Int64 universialTicks)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSIALTICKSTOJAVASCRIPTTICKS_OFFSET))(universialTicks);
		}

		static ::System::DateTime ConvertJavaScriptTicksToDateTime(::System::Int64 javaScriptTicks)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET))(javaScriptTicks);
		}

		static ::System::Boolean TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::System::DateTime& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET))(text, dateTimeZoneHandling, dt);
		}

		static ::System::Boolean TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference text, ::System::DateTimeOffset& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET))(text, dt);
		}

		static ::System::DateTime CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser)
		{
			return ((::System::DateTime(*)(::Newtonsoft::Json::Utilities::DateTimeParser))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET))(dateTimeParser);
		}

		static ::System::Boolean TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTime& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET))(s, dateTimeZoneHandling, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryParseDateTime_1(::System::String* s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTime& dt)
		{
			return ((::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_1_OFFSET))(s, dateTimeZoneHandling, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference s, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTimeOffset& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET))(s, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryParseDateTimeOffset_1(::System::String* s, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTimeOffset& dt)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_1_OFFSET))(s, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference text, ::System::Int64& ticks, ::System::TimeSpan& offset, ::System::DateTimeKind& kind)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::Int64&, ::System::TimeSpan&, ::System::DateTimeKind&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET))(text, ticks, offset, kind);
		}

		static ::System::Boolean TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::System::DateTime& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET))(text, dateTimeZoneHandling, dt);
		}

		static ::System::Boolean TryParseDateTimeExact(::System::String* text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTime& dt)
		{
			return ((::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET))(text, dateTimeZoneHandling, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ::System::DateTimeOffset& dt)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET))(text, dt);
		}

		static ::System::Boolean TryParseDateTimeOffsetExact(::System::String* text, ::System::String* dateFormatString, ::System::Globalization::CultureInfo* culture, ::System::DateTimeOffset& dt)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET))(text, dateFormatString, culture, dt);
		}

		static ::System::Boolean TryReadOffset(::Newtonsoft::Json::Utilities::StringReference offsetText, ::System::Int32 startIndex, ::System::TimeSpan& offset)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::Int32, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET))(offsetText, startIndex, offset);
		}

		static ::System::Void WriteDateTimeString(::System::IO::TextWriter* writer, ::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::System::String* formatString, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTime, ::Newtonsoft::Json::DateFormatHandling, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET))(writer, value, format, formatString, culture);
		}

		static ::System::Int32 WriteDateTimeString_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::DateTime value, ::System::Nullable_1<::System::TimeSpan> offset, ::System::DateTimeKind kind, ::Newtonsoft::Json::DateFormatHandling format)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::DateTime, ::System::Nullable_1<::System::TimeSpan>, ::System::DateTimeKind, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_1_OFFSET))(chars, start, value, offset, kind, format);
		}

		static ::System::Int32 WriteDefaultIsoDate(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::DateTime dt)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET))(chars, start, dt);
		}

		static ::System::Void CopyIntToCharArray(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::Int32 value, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET))(chars, start, value, digits);
		}

		static ::System::Int32 WriteDateTimeOffset(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::TimeSpan offset, ::Newtonsoft::Json::DateFormatHandling format)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::TimeSpan, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET))(chars, start, offset, format);
		}

		static ::System::Void WriteDateTimeOffsetString(::System::IO::TextWriter* writer, ::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format, ::System::String* formatString, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTimeOffset, ::Newtonsoft::Json::DateFormatHandling, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET))(writer, value, format, formatString, culture);
		}

		static ::System::Void GetDateValues(::System::DateTime td, ::System::Int32& year, ::System::Int32& month, ::System::Int32& day)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET))(td, year, month, day);
		}
	};
}
