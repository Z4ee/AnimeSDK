#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ParserTimeZone.h"
#include "unitysdk/System/ValueType.h"

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET UNITYSDK_OFFSET(0xA9E260)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET UNITYSDK_OFFSET(0xA9E250)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0xA9E270)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0xA9E1E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0xA9E1F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0xA9E230)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET UNITYSDK_OFFSET(0xA9E240)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0xA9E1D0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F30BC80)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeParser_TypeDefinitionIndex = 7050;

	struct alignas(8) DateTimeParser
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_Power10()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3260);
		}
		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3264);
		}
		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3268);
		}
		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x326C);
		}
		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3270);
		}
		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3274);
		}
		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3278);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x327C);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3280);
		}
		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3284);
		}
		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3288);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x328C);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x3290);
		}
		// static const ::System::Int16 MaxFractionDigits = 0x7; // 0x0
		::System::Int32 Year; // 0x10
		::System::Int32 Month; // 0x14
		::System::Int32 Day; // 0x18
		::System::Int32 Hour; // 0x1C
		::System::Int32 Minute; // 0x20
		::System::Int32 Second; // 0x24
		::System::Int32 Fraction; // 0x28
		::System::Int32 ZoneHour; // 0x2C
		::System::Int32 ZoneMinute; // 0x30
		::Newtonsoft::Json::Utilities::ParserTimeZone Zone; // 0x34
		::Il2CppArray<::System::Char>* _text; // 0x38
		::System::Int32 _end; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER__CCTOR_OFFSET))();
		}

		::System::Boolean Parse(::Il2CppArray<::System::Char>* text, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET))(this, text, startIndex, length);
		}

		::System::Boolean ParseDate(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET))(this, start);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(this, start);
		}

		::System::Boolean ParseTime(::System::Int32& start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET))(this, start);
		}

		::System::Boolean ParseZone(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET))(this, start);
		}

		::System::Boolean Parse4Digit(::System::Int32 start, ::System::Int32& num)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET))(this, start, num);
		}

		::System::Boolean Parse2Digit(::System::Int32 start, ::System::Int32& num)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET))(this, start, num);
		}

		::System::Boolean ParseChar(::System::Int32 start, ::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET))(this, start, ch);
		}
	};
}
