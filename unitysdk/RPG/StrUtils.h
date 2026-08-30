#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET UNITYSDK_OFFSET(0x1EF48AE0)
#define RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1EF481B0)
#define RPG_STRUTILS_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x1EF47FE0)
#define RPG_STRUTILS_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x1EF48040)
#define RPG_STRUTILS_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x1EF480B0)
#define RPG_STRUTILS_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x1EF48130)
#define RPG_STRUTILS_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x1EF483C0)
#define RPG_STRUTILS_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x1EF48420)
#define RPG_STRUTILS_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x1EF48490)
#define RPG_STRUTILS_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x1EF48510)
#define RPG_STRUTILS_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x1EF485B0)
#define RPG_STRUTILS_CONCAT_OFFSET UNITYSDK_OFFSET(0x1EF47F90)
#define RPG_STRUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1EF48CD0)
#define RPG_STRUTILS_ENDSWITHOPT_OFFSET UNITYSDK_OFFSET(0x1EF48F20)
#define RPG_STRUTILS_FORMATBYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1EF47D70)
#define RPG_STRUTILS_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF47DE0)
#define RPG_STRUTILS_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1EF47E50)
#define RPG_STRUTILS_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x1EF47ED0)
#define RPG_STRUTILS_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EF47D00)
#define RPG_STRUTILS_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x1EF47B50)
#define RPG_STRUTILS_GETSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x1EF49370)
#define RPG_STRUTILS_INTERNSTRING_OFFSET UNITYSDK_OFFSET(0x1EF48AC0)
#define RPG_STRUTILS_INTERN_OFFSET UNITYSDK_OFFSET(0x1EF48AB0)
#define RPG_STRUTILS_STARTSWITHOPT_OFFSET UNITYSDK_OFFSET(0x1EF48D10)
#define RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET UNITYSDK_OFFSET(0x1EF49440)
#define RPG_STRUTILS_SUBSTRINGLAST_OFFSET UNITYSDK_OFFSET(0x1EF49490)
#define RPG_STRUTILS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EF486D0)
#define RPG_STRUTILS_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1EF48750)
#define RPG_STRUTILS_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1EF487D0)
#define RPG_STRUTILS_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1EF48850)
#define RPG_STRUTILS_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1EF488B0)
#define RPG_STRUTILS_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1EF48910)
#define RPG_STRUTILS_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1EF48970)
#define RPG_STRUTILS_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1EF489D0)
#define RPG_STRUTILS_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1EF48A40)
#define RPG_STRUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF48650)
#define RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET UNITYSDK_OFFSET(0x1EF49430)
#define RPG_STRUTILS_WILDCARDMATCH_OFFSET UNITYSDK_OFFSET(0x1EF490E0)
#define RPG_STRUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF49620)

namespace RPG
{
	inline static constexpr unsigned int StrUtils_TypeDefinitionIndex = 6392;

	class StrUtils : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__Builder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x450);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>** StaticGet__CharToStrDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x458);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StrUtils_TypeDefinitionIndex)->GetStaticField(0x3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS__CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* GetBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETBUILDER_OFFSET))();
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* FormatByProvider(::System::String* a1, ::System::Object* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMATBYPROVIDER_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Format_2(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Format_3(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_FORMAT_3_OFFSET))(a1, a2);
		}

		static ::System::String* Concat(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Concat_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Concat_3(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* Concat_4(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_4_OFFSET))(a1);
		}

		static ::System::String* ConcatWithSeparator(::System::Char a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::Char, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCATWITHSEPARATOR_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_5(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_5_OFFSET))(a1, a2);
		}

		static ::System::String* Concat_6(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_6_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Concat_7(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_7_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Concat_8(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_8_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* Concat_9(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONCAT_9_OFFSET))(a1);
		}

		static ::System::String* ToString(::System::Byte a1)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::System::SByte a1)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::String* ToString_2(::System::Int16 a1)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_2_OFFSET))(a1);
		}

		static ::System::String* ToString_3(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_3_OFFSET))(a1);
		}

		static ::System::String* ToString_4(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_4_OFFSET))(a1);
		}

		static ::System::String* ToString_5(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_5_OFFSET))(a1);
		}

		static ::System::String* ToString_6(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_6_OFFSET))(a1);
		}

		static ::System::String* ToString_7(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_7_OFFSET))(a1);
		}

		static ::System::String* ToString_8(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_8_OFFSET))(a1, a2);
		}

		static ::System::String* ToString_9(::System::Double a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::Double, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TOSTRING_9_OFFSET))(a1, a2);
		}

		static ::System::String* Intern(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERN_OFFSET))(a1);
		}

		static ::System::Void InternString(::System::String*& a1)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_STRUTILS_INTERNSTRING_OFFSET))(a1);
		}

		static ::System::String* CharAtIndexToCachedString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CHARATINDEXTOCACHEDSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean Contains(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_CONTAINS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean StartsWithOpt(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_STARTSWITHOPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EndsWithOpt(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_ENDSWITHOPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean WildcardMatch(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_STRUTILS_WILDCARDMATCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetStableHash(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_STRUTILS_GETSTABLEHASH_OFFSET))(a1);
		}

		static ::System::String* TryGetStringFromStableHash(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_TRYGETSTRINGFROMSTABLEHASH_OFFSET))(a1);
		}

		static ::System::String* SubstringAfterLast(::System::String* a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGAFTERLAST_OFFSET))(a1, a2);
		}

		static ::System::String* SubstringLast(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_STRUTILS_SUBSTRINGLAST_OFFSET))(a1, a2);
		}
	};
}
