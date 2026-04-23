#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ParserTimeZone.h"
#include "unitysdk/System/ValueType.h"

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET UNITYSDK_OFFSET(0x22AD670)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET UNITYSDK_OFFSET(0x22AD660)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x22AD680)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x22AD5F0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x22AD600)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x22AD640)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET UNITYSDK_OFFSET(0x22AD650)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x22AD5E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC5D90)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeParser_TypeDefinitionIndex = 8378;

	struct alignas(8) DateTimeParser
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_Power10()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x35180);
		}
		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0C0);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0C4);
		}
		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0C8);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0CC);
		}
		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0D0);
		}
		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0D4);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0D8);
		}
		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0DC);
		}
		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0E0);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0E4);
		}
		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0E8);
		}
		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0EC);
		}
		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0xD0F0);
		}
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
