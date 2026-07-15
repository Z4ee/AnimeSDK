#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Globalization/Unicode/SimpleCollator_Context.h"
#include "unitysdk/Mono/Globalization/Unicode/SimpleCollator_ExtenderType.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }
namespace Mono::Globalization::Unicode { class Contraction; }
namespace Mono::Globalization::Unicode { class Level2Map; }
namespace Mono::Globalization::Unicode { class SortKeyBuffer; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class SortKey; }
namespace System::Globalization { class TextInfo; }

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CATEGORY_OFFSET UNITYSDK_OFFSET(0x155D2770)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CLEARBUFFER_OFFSET UNITYSDK_OFFSET(0x155D40D0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREFLAGPAIR_OFFSET UNITYSDK_OFFSET(0x155D7AB0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREINTERNAL_OFFSET UNITYSDK_OFFSET(0x155D4CF0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x155D4AE0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSORTKEYRAW_OFFSET UNITYSDK_OFFSET(0x155D4160)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSURROGATESORTKEYRAW_OFFSET UNITYSDK_OFFSET(0x155D4960)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEREXTENDER_OFFSET UNITYSDK_OFFSET(0x155D3430)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEROPTIONS_OFFSET UNITYSDK_OFFSET(0x155D31E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_1_OFFSET UNITYSDK_OFFSET(0x155D2D40)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_OFFSET UNITYSDK_OFFSET(0x155D2CD0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETEXTENDERTYPE_OFFSET UNITYSDK_OFFSET(0x155D3340)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETNEUTRALCULTURE_OFFSET UNITYSDK_OFFSET(0x155D2550)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_1_OFFSET UNITYSDK_OFFSET(0x155D3650)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_2_OFFSET UNITYSDK_OFFSET(0x155D38C0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x155D3620)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_1_OFFSET UNITYSDK_OFFSET(0x155D2F70)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_OFFSET UNITYSDK_OFFSET(0x155D2F00)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_1_OFFSET UNITYSDK_OFFSET(0x155D9440)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_OFFSET UNITYSDK_OFFSET(0x155D9340)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFSORTKEY_OFFSET UNITYSDK_OFFSET(0x155D94D0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x155D8AC0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_OFFSET UNITYSDK_OFFSET(0x155D8580)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISHALFKANA_OFFSET UNITYSDK_OFFSET(0x155D2CB0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x155D3590)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_1_OFFSET UNITYSDK_OFFSET(0x155D7AF0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_2_OFFSET UNITYSDK_OFFSET(0x155D7D20)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x155D7AC0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSAFE_OFFSET UNITYSDK_OFFSET(0x155D35D0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_1_OFFSET UNITYSDK_OFFSET(0x155D7E30)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x155D7DA0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFORDINAL_OFFSET UNITYSDK_OFFSET(0x155D9800)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFSORTKEY_OFFSET UNITYSDK_OFFSET(0x155DA260)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x155D99B0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x155D7ED0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL1_OFFSET UNITYSDK_OFFSET(0x155D2900)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL2_OFFSET UNITYSDK_OFFSET(0x155D2A90)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARDCORE_OFFSET UNITYSDK_OFFSET(0x155DAF30)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARD_OFFSET UNITYSDK_OFFSET(0x155DA300)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARDCORE_OFFSET UNITYSDK_OFFSET(0x155DA590)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARD_OFFSET UNITYSDK_OFFSET(0x155D9570)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x155DAC70)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_QUICKINDEXOF_OFFSET UNITYSDK_OFFSET(0x155D8380)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_SETCJKTABLE_OFFSET UNITYSDK_OFFSET(0x155D2480)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_TODASHTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x155D3410)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x155DB830)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x155D1E70)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_TypeDefinitionIndex = 39;

	class SimpleCollator : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::SimpleCollator** StaticGet_invariant()
		{
			return (::Mono::Globalization::Unicode::SimpleCollator**)Il2CppClass::FromTypeDefinitionIndex(SimpleCollator_TypeDefinitionIndex)->GetStaticField(0x1DB0);
		}
		static ::System::Boolean* StaticGet_QuickCheckDisabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SimpleCollator_TypeDefinitionIndex)->GetStaticField(0xDB0);
		}
		::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer; // 0x10
		::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* contractions; // 0x18
		::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer; // 0x20
		::Il2CppArray<::System::Byte>* unsafeFlags; // 0x28
		::System::Globalization::TextInfo* textInfo; // 0x30
		::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>* level2Maps; // 0x38
		::System::Byte* cjkLv1Table; // 0x40
		::System::Byte* cjkCatTable; // 0x48
		::System::Int32 lcid; // 0x50
		::System::Boolean frenchSort; // 0x54
		::System::Byte* cjkLv2Table; // 0x58

		::System::Void _ctor(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CCTOR_OFFSET))();
		}

		::System::Void SetCJKTable(::System::Globalization::CultureInfo* a1, ::Mono::Globalization::Unicode::CodePointIndexer*& a2, ::System::Byte*& a3, ::System::Byte*& a4, ::Mono::Globalization::Unicode::CodePointIndexer*& a5, ::System::Byte*& a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_SETCJKTABLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Globalization::CultureInfo* GetNeutralCulture(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETNEUTRALCULTURE_OFFSET))(a1);
		}

		::System::Byte Category(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CATEGORY_OFFSET))(this, a1);
		}

		::System::Byte Level1(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL1_OFFSET))(this, a1);
		}

		::System::Byte Level2(::System::Int32 a1, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a2)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL2_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsHalfKana(::System::Int32 a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISHALFKANA_OFFSET))(a1, a2);
		}

		::Mono::Globalization::Unicode::Contraction* GetContraction(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_OFFSET))(this, a1, a2, a3);
		}

		::Mono::Globalization::Unicode::Contraction* GetContraction_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* a4)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Globalization::Unicode::Contraction* GetTailContraction(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_OFFSET))(this, a1, a2, a3);
		}

		::Mono::Globalization::Unicode::Contraction* GetTailContraction_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* a4)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 FilterOptions(::System::Int32 a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEROPTIONS_OFFSET))(this, a1, a2);
		}

		::Mono::Globalization::Unicode::SimpleCollator_ExtenderType GetExtenderType(::System::Int32 a1)
		{
			return ((::Mono::Globalization::Unicode::SimpleCollator_ExtenderType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETEXTENDERTYPE_OFFSET))(this, a1);
		}

		static ::System::Byte ToDashTypeValue(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Byte(*)(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_TODASHTYPEVALUE_OFFSET))(a1, a2);
		}

		::System::Int32 FilterExtender(::System::Int32 a1, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEREXTENDER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISIGNORABLE_OFFSET))(a1, a2);
		}

		::System::Boolean IsSafe(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSAFE_OFFSET))(this, a1);
		}

		::System::Globalization::SortKey* GetSortKey(::System::String* a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_OFFSET))(this, a1, a2);
		}

		::System::Globalization::SortKey* GetSortKey_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::CompareOptions a4)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetSortKey_2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Mono::Globalization::Unicode::SortKeyBuffer* a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FillSortKeyRaw(::System::Int32 a1, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a2, ::Mono::Globalization::Unicode::SortKeyBuffer* a3, ::System::Globalization::CompareOptions a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSORTKEYRAW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FillSurrogateSortKeyRaw(::System::Int32 a1, ::Mono::Globalization::Unicode::SortKeyBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SortKeyBuffer*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSURROGATESORTKEYRAW_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPARE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ClearBuffer(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CLEARBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareInternal(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean& a7, ::System::Boolean& a8, ::System::Boolean a9, ::System::Boolean a10, ::Mono::Globalization::Unicode::SimpleCollator_Context& a11)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&, ::System::Boolean, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Int32 CompareFlagPair(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREFLAGPAIR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPrefix(::System::String* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsPrefix_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsPrefix_2(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::Mono::Globalization::Unicode::SimpleCollator_Context& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean IsSuffix(::System::String* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsSuffix_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 QuickIndexOf(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean& a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_QUICKINDEXOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 IndexOf(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 IndexOfOrdinal(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 IndexOfOrdinal_1(::System::String* a1, ::System::Char a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 IndexOfSortKey(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte* a4, ::System::Char a5, ::System::Int32 a6, ::System::Boolean a7, ::Mono::Globalization::Unicode::SimpleCollator_Context& a8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Char, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFSORTKEY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 IndexOf_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte* a5, ::Mono::Globalization::Unicode::SimpleCollator_Context& a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 LastIndexOf(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 LastIndexOfOrdinal(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFORDINAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 LastIndexOfSortKey(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte* a5, ::System::Int32 a6, ::System::Boolean a7, ::Mono::Globalization::Unicode::SimpleCollator_Context& a8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFSORTKEY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 LastIndexOf_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte* a5, ::Mono::Globalization::Unicode::SimpleCollator_Context& a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MatchesForward(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte* a5, ::System::Boolean a6, ::Mono::Globalization::Unicode::SimpleCollator_Context& a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean MatchesForwardCore(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte* a5, ::System::Boolean a6, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a7, ::Mono::Globalization::Unicode::Contraction*& a8, ::Mono::Globalization::Unicode::SimpleCollator_Context& a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::Contraction*&, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARDCORE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean MatchesPrimitive(::System::Globalization::CompareOptions a1, ::System::Byte* a2, ::System::Int32 a3, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a4, ::System::Byte* a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::CompareOptions, ::System::Byte*, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESPRIMITIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean MatchesBackward(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Byte* a6, ::System::Boolean a7, ::Mono::Globalization::Unicode::SimpleCollator_Context& a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean MatchesBackwardCore(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Byte* a6, ::System::Boolean a7, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType a8, ::Mono::Globalization::Unicode::Contraction*& a9, ::Mono::Globalization::Unicode::SimpleCollator_Context& a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::Contraction*&, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARDCORE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
