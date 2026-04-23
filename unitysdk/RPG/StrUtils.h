#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET UNITYSDK_OFFSET(0x1922DD40)
#define RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1922D5B0)
#define RPG_STRUTILS_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x1922D3D0)
#define RPG_STRUTILS_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x1922D430)
#define RPG_STRUTILS_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x1922D4A0)
#define RPG_STRUTILS_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x1922D520)
#define RPG_STRUTILS_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x1922D660)
#define RPG_STRUTILS_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x1922D6C0)
#define RPG_STRUTILS_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x1922D730)
#define RPG_STRUTILS_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x1922D7B0)
#define RPG_STRUTILS_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x1922D850)
#define RPG_STRUTILS_CONCAT_OFFSET UNITYSDK_OFFSET(0x1922D380)
#define RPG_STRUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1922DF70)
#define RPG_STRUTILS_ENDSWITHOPT_OFFSET UNITYSDK_OFFSET(0x1922E290)
#define RPG_STRUTILS_FORMATBYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1922D160)
#define RPG_STRUTILS_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1922D1D0)
#define RPG_STRUTILS_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1922D240)
#define RPG_STRUTILS_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x1922D2C0)
#define RPG_STRUTILS_FORMAT_OFFSET UNITYSDK_OFFSET(0x1922D0F0)
#define RPG_STRUTILS_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x1922CF40)
#define RPG_STRUTILS_GETSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x1922E7A0)
#define RPG_STRUTILS_INTERNSTRING_OFFSET UNITYSDK_OFFSET(0x1922DD20)
#define RPG_STRUTILS_INTERN_OFFSET UNITYSDK_OFFSET(0x1922DD10)
#define RPG_STRUTILS_STARTSWITHOPT_OFFSET UNITYSDK_OFFSET(0x1922DFB0)
#define RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET UNITYSDK_OFFSET(0x1922E870)
#define RPG_STRUTILS_SUBSTRINGLAST_OFFSET UNITYSDK_OFFSET(0x1922E8C0)
#define RPG_STRUTILS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1922D960)
#define RPG_STRUTILS_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1922D9D0)
#define RPG_STRUTILS_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1922DA40)
#define RPG_STRUTILS_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1922DAB0)
#define RPG_STRUTILS_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1922DB10)
#define RPG_STRUTILS_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1922DB70)
#define RPG_STRUTILS_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1922DBD0)
#define RPG_STRUTILS_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1922DC30)
#define RPG_STRUTILS_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1922DCA0)
#define RPG_STRUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1922D8F0)
#define RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x1922E860)
#define RPG_STRUTILS_WILDCARDMATCH_OFFSET UNITYSDK_OFFSET(0x1922E510)
#define RPG_STRUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1922EA50)

namespace RPG
{
	inline static constexpr unsigned int StrUtils_TypeDefinitionIndex = 8911;

	class StrUtils : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__Builder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x980);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>** StaticGet__CharToStrDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x988);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS__CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* GetBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETBUILDER_OFFSET))();
		}

		static ::System::String* Format(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_OFFSET))(format, arg0);
		}

		static ::System::String* FormatByProvider(::System::String* format, ::System::Object* arg0, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMATBYPROVIDER_OFFSET))(format, arg0, provider);
		}

		static ::System::String* Format_1(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_1_OFFSET))(format, arg0, arg1);
		}

		static ::System::String* Format_2(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_2_OFFSET))(format, arg0, arg1, arg2);
		}

		static ::System::String* Format_3(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_3_OFFSET))(format, args);
		}

		static ::System::String* Concat(::System::String* arg0, ::System::String* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_OFFSET))(arg0, arg1);
		}

		static ::System::String* Concat_1(::System::String* arg0, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_1_OFFSET))(arg0, arg1, arg2);
		}

		static ::System::String* Concat_2(::System::String* arg0, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_2_OFFSET))(arg0, arg1, arg2, arg3);
		}

		static ::System::String* Concat_3(::System::String* arg0, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_3_OFFSET))(arg0, arg1, arg2, arg3, arg4);
		}

		static ::System::String* Concat_4(::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_4_OFFSET))(args);
		}

		static ::System::String* ConcatWithSeparator(::System::Char separator, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::System::Char, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET))(separator, args);
		}

		static ::System::String* Concat_5(::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_5_OFFSET))(arg0, arg1);
		}

		static ::System::String* Concat_6(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_6_OFFSET))(arg0, arg1, arg2);
		}

		static ::System::String* Concat_7(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_7_OFFSET))(arg0, arg1, arg2, arg3);
		}

		static ::System::String* Concat_8(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3, ::System::Object* arg4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_8_OFFSET))(arg0, arg1, arg2, arg3, arg4);
		}

		static ::System::String* Concat_9(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_9_OFFSET))(args);
		}

		static ::System::String* ToString(::System::Byte value)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::SByte value)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_1_OFFSET))(value);
		}

		static ::System::String* ToString_2(::System::Int16 value)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::UInt16 value)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_3_OFFSET))(value);
		}

		static ::System::String* ToString_4(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::UInt32 value)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::Int64 value)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_6_OFFSET))(value);
		}

		static ::System::String* ToString_7(::System::UInt64 value)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_7_OFFSET))(value);
		}

		static ::System::String* ToString_8(::System::Single value, ::System::UInt32 decimalDigits)
		{
			return ((::System::String*(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_8_OFFSET))(value, decimalDigits);
		}

		static ::System::String* ToString_9(::System::Double value, ::System::UInt32 decimalDigits)
		{
			return ((::System::String*(*)(::System::Double, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_9_OFFSET))(value, decimalDigits);
		}

		static ::System::String* Intern(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERN_OFFSET))(s);
		}

		static ::System::Void InternString(::System::String*& s)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERNSTRING_OFFSET))(s);
		}

		static ::System::String* CharAtIndexToCachedString(::System::String* s, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET))(s, index);
		}

		static ::System::Boolean Contains(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONTAINS_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean StartsWithOpt(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_STARTSWITHOPT_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean EndsWithOpt(::System::String* s, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_ENDSWITHOPT_OFFSET))(s, value, ignoreCase);
		}

		static ::System::Boolean WildcardMatch(::System::String* s, ::System::String* wildcard, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_WILDCARDMATCH_OFFSET))(s, wildcard, ignoreCase);
		}

		static ::System::Int32 GetStableHash(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETSTABLEHASH_OFFSET))(s);
		}

		static ::System::String* TryGetStringFromStableHash(::System::Int32 nHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET))(nHash);
		}

		static ::System::String* SubstringAfterLast(::System::String* s, ::System::Char ch)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET))(s, ch);
		}

		static ::System::String* SubstringLast(::System::String* s, ::System::Int32 count)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGLAST_OFFSET))(s, count);
		}
	};
}
