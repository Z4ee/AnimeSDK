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

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CATEGORY_OFFSET UNITYSDK_OFFSET(0x16168390)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CLEARBUFFER_OFFSET UNITYSDK_OFFSET(0x16169D90)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREFLAGPAIR_OFFSET UNITYSDK_OFFSET(0x1616DA00)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREINTERNAL_OFFSET UNITYSDK_OFFSET(0x1616A920)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x1616A720)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSORTKEYRAW_OFFSET UNITYSDK_OFFSET(0x16169E20)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSURROGATESORTKEYRAW_OFFSET UNITYSDK_OFFSET(0x1616A5A0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEREXTENDER_OFFSET UNITYSDK_OFFSET(0x16168FB0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEROPTIONS_OFFSET UNITYSDK_OFFSET(0x16168E30)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_1_OFFSET UNITYSDK_OFFSET(0x16168970)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_OFFSET UNITYSDK_OFFSET(0x16168900)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETEXTENDERTYPE_OFFSET UNITYSDK_OFFSET(0x16168EC0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETNEUTRALCULTURE_OFFSET UNITYSDK_OFFSET(0x16168310)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_1_OFFSET UNITYSDK_OFFSET(0x161691E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_2_OFFSET UNITYSDK_OFFSET(0x16169460)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x161691B0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_1_OFFSET UNITYSDK_OFFSET(0x16168BC0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_OFFSET UNITYSDK_OFFSET(0x16168B50)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_1_OFFSET UNITYSDK_OFFSET(0x1616F250)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_OFFSET UNITYSDK_OFFSET(0x1616F150)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFSORTKEY_OFFSET UNITYSDK_OFFSET(0x1616F2E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1616E890)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1616E3E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISHALFKANA_OFFSET UNITYSDK_OFFSET(0x161688E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x16169110)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_1_OFFSET UNITYSDK_OFFSET(0x1616DA40)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_2_OFFSET UNITYSDK_OFFSET(0x1616DC50)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x1616DA10)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSAFE_OFFSET UNITYSDK_OFFSET(0x16169150)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_1_OFFSET UNITYSDK_OFFSET(0x1616DD60)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x1616DCD0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFORDINAL_OFFSET UNITYSDK_OFFSET(0x1616F610)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFSORTKEY_OFFSET UNITYSDK_OFFSET(0x161700C0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1616F7C0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1616DE00)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL1_OFFSET UNITYSDK_OFFSET(0x16168520)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL2_OFFSET UNITYSDK_OFFSET(0x161686B0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARDCORE_OFFSET UNITYSDK_OFFSET(0x16170DC0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARD_OFFSET UNITYSDK_OFFSET(0x16170160)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARDCORE_OFFSET UNITYSDK_OFFSET(0x161703F0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARD_OFFSET UNITYSDK_OFFSET(0x1616F380)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x16170B00)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_QUICKINDEXOF_OFFSET UNITYSDK_OFFSET(0x1616E1E0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_SETCJKTABLE_OFFSET UNITYSDK_OFFSET(0x16168230)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_TODASHTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x16168F90)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x161717D0)
#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16167DF0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_TypeDefinitionIndex = 39;

	class SimpleCollator : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::SimpleCollator** StaticGet_invariant()
		{
			return (::Mono::Globalization::Unicode::SimpleCollator**)Il2CppClass::FromTypeDefinitionIndex(SimpleCollator_TypeDefinitionIndex)->GetStaticField(0x1820);
		}
		static ::System::Boolean* StaticGet_QuickCheckDisabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SimpleCollator_TypeDefinitionIndex)->GetStaticField(0x2070);
		}
		::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer; // 0x10
		::System::Globalization::TextInfo* textInfo; // 0x18
		::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer; // 0x20
		::Il2CppArray<::System::Byte>* unsafeFlags; // 0x28
		::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* contractions; // 0x30
		::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>* level2Maps; // 0x38
		::System::Byte* cjkCatTable; // 0x40
		::System::Byte* cjkLv1Table; // 0x48
		::System::Byte* cjkLv2Table; // 0x50
		::System::Int32 lcid; // 0x58
		::System::Boolean frenchSort; // 0x5C

		::System::Void _ctor(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CTOR_OFFSET))(this, culture);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR__CCTOR_OFFSET))();
		}

		::System::Void SetCJKTable(::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::System::Byte*& catTable, ::System::Byte*& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, ::System::Byte*& lv2Table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_SETCJKTABLE_OFFSET))(this, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
		}

		static ::System::Globalization::CultureInfo* GetNeutralCulture(::System::Globalization::CultureInfo* info)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETNEUTRALCULTURE_OFFSET))(info);
		}

		::System::Byte Category(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CATEGORY_OFFSET))(this, cp);
		}

		::System::Byte Level1(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL1_OFFSET))(this, cp);
		}

		::System::Byte Level2(::System::Int32 cp, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LEVEL2_OFFSET))(this, cp, ext);
		}

		static ::System::Boolean IsHalfKana(::System::Int32 cp, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISHALFKANA_OFFSET))(cp, opt);
		}

		::Mono::Globalization::Unicode::Contraction* GetContraction(::System::String* s, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_OFFSET))(this, s, start, end);
		}

		::Mono::Globalization::Unicode::Contraction* GetContraction_1(::System::String* s, ::System::Int32 start, ::System::Int32 end, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* clist)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETCONTRACTION_1_OFFSET))(this, s, start, end, clist);
		}

		::Mono::Globalization::Unicode::Contraction* GetTailContraction(::System::String* s, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_OFFSET))(this, s, start, end);
		}

		::Mono::Globalization::Unicode::Contraction* GetTailContraction_1(::System::String* s, ::System::Int32 start, ::System::Int32 end, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>* clist)
		{
			return ((::Mono::Globalization::Unicode::Contraction*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETTAILCONTRACTION_1_OFFSET))(this, s, start, end, clist);
		}

		::System::Int32 FilterOptions(::System::Int32 i, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEROPTIONS_OFFSET))(this, i, opt);
		}

		::Mono::Globalization::Unicode::SimpleCollator_ExtenderType GetExtenderType(::System::Int32 i)
		{
			return ((::Mono::Globalization::Unicode::SimpleCollator_ExtenderType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETEXTENDERTYPE_OFFSET))(this, i);
		}

		static ::System::Byte ToDashTypeValue(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Byte(*)(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_TODASHTYPEVALUE_OFFSET))(ext, opt);
		}

		::System::Int32 FilterExtender(::System::Int32 i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILTEREXTENDER_OFFSET))(this, i, ext, opt);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 i, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISIGNORABLE_OFFSET))(i, opt);
		}

		::System::Boolean IsSafe(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSAFE_OFFSET))(this, i);
		}

		::System::Globalization::SortKey* GetSortKey(::System::String* s, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_OFFSET))(this, s, options);
		}

		::System::Globalization::SortKey* GetSortKey_1(::System::String* s, ::System::Int32 start, ::System::Int32 length, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_1_OFFSET))(this, s, start, length, options);
		}

		::System::Void GetSortKey_2(::System::String* s, ::System::Int32 start, ::System::Int32 end, ::Mono::Globalization::Unicode::SortKeyBuffer* buf, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_GETSORTKEY_2_OFFSET))(this, s, start, end, buf, opt);
		}

		::System::Void FillSortKeyRaw(::System::Int32 i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::Mono::Globalization::Unicode::SortKeyBuffer* buf, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSORTKEYRAW_OFFSET))(this, i, ext, buf, opt);
		}

		::System::Void FillSurrogateSortKeyRaw(::System::Int32 i, ::Mono::Globalization::Unicode::SortKeyBuffer* buf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Globalization::Unicode::SortKeyBuffer*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_FILLSURROGATESORTKEYRAW_OFFSET))(this, i, buf);
		}

		::System::Int32 Compare(::System::String* s1, ::System::Int32 idx1, ::System::Int32 len1, ::System::String* s2, ::System::Int32 idx2, ::System::Int32 len2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPARE_OFFSET))(this, s1, idx1, len1, s2, idx2, len2, options);
		}

		::System::Void ClearBuffer(::System::Byte* buffer, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_CLEARBUFFER_OFFSET))(this, buffer, size);
		}

		::System::Int32 CompareInternal(::System::String* s1, ::System::Int32 idx1, ::System::Int32 len1, ::System::String* s2, ::System::Int32 idx2, ::System::Int32 len2, ::System::Boolean& targetConsumed, ::System::Boolean& sourceConsumed, ::System::Boolean skipHeadingExtenders, ::System::Boolean immediateBreakup, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&, ::System::Boolean, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREINTERNAL_OFFSET))(this, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
		}

		::System::Int32 CompareFlagPair(::System::Boolean b1, ::System::Boolean b2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_COMPAREFLAGPAIR_OFFSET))(this, b1, b2);
		}

		::System::Boolean IsPrefix(::System::String* src, ::System::String* target, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_OFFSET))(this, src, target, opt);
		}

		::System::Boolean IsPrefix_1(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_1_OFFSET))(this, s, target, start, length, opt);
		}

		::System::Boolean IsPrefix_2(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Boolean skipHeadingExtenders, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISPREFIX_2_OFFSET))(this, s, target, start, length, skipHeadingExtenders, ctx);
		}

		::System::Boolean IsSuffix(::System::String* src, ::System::String* target, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_OFFSET))(this, src, target, opt);
		}

		::System::Boolean IsSuffix_1(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_ISSUFFIX_1_OFFSET))(this, s, target, start, length, opt);
		}

		::System::Int32 QuickIndexOf(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Boolean& testWasUnable)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_QUICKINDEXOF_OFFSET))(this, s, target, start, length, testWasUnable);
		}

		::System::Int32 IndexOf(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_OFFSET))(this, s, target, start, length, opt);
		}

		::System::Int32 IndexOfOrdinal(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_OFFSET))(this, s, target, start, length);
		}

		::System::Int32 IndexOfOrdinal_1(::System::String* s, ::System::Char target, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFORDINAL_1_OFFSET))(this, s, target, start, length);
		}

		::System::Int32 IndexOfSortKey(::System::String* s, ::System::Int32 start, ::System::Int32 length, ::System::Byte* sortkey, ::System::Char target, ::System::Int32 ti, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Char, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOFSORTKEY_OFFSET))(this, s, start, length, sortkey, target, ti, noLv4, ctx);
		}

		::System::Int32 IndexOf_1(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Byte* targetSortKey, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_INDEXOF_1_OFFSET))(this, s, target, start, length, targetSortKey, ctx);
		}

		::System::Int32 LastIndexOf(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Globalization::CompareOptions opt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_OFFSET))(this, s, target, start, length, opt);
		}

		::System::Int32 LastIndexOfOrdinal(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFORDINAL_OFFSET))(this, s, target, start, length);
		}

		::System::Int32 LastIndexOfSortKey(::System::String* s, ::System::Int32 start, ::System::Int32 orgStart, ::System::Int32 length, ::System::Byte* sortkey, ::System::Int32 ti, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOFSORTKEY_OFFSET))(this, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
		}

		::System::Int32 LastIndexOf_1(::System::String* s, ::System::String* target, ::System::Int32 start, ::System::Int32 length, ::System::Byte* targetSortKey, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Byte*, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_LASTINDEXOF_1_OFFSET))(this, s, target, start, length, targetSortKey, ctx);
		}

		::System::Boolean MatchesForward(::System::String* s, ::System::Int32& idx, ::System::Int32 end, ::System::Int32 ti, ::System::Byte* sortkey, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARD_OFFSET))(this, s, idx, end, ti, sortkey, noLv4, ctx);
		}

		::System::Boolean MatchesForwardCore(::System::String* s, ::System::Int32& idx, ::System::Int32 end, ::System::Int32 ti, ::System::Byte* sortkey, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::Mono::Globalization::Unicode::Contraction*& ct, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::Contraction*&, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESFORWARDCORE_OFFSET))(this, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
		}

		::System::Boolean MatchesPrimitive(::System::Globalization::CompareOptions opt, ::System::Byte* source, ::System::Int32 si, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Byte* target, ::System::Int32 ti, ::System::Boolean noLv4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::CompareOptions, ::System::Byte*, ::System::Int32, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESPRIMITIVE_OFFSET))(this, opt, source, si, ext, target, ti, noLv4);
		}

		::System::Boolean MatchesBackward(::System::String* s, ::System::Int32& idx, ::System::Int32 end, ::System::Int32 orgStart, ::System::Int32 ti, ::System::Byte* sortkey, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARD_OFFSET))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
		}

		::System::Boolean MatchesBackwardCore(::System::String* s, ::System::Int32& idx, ::System::Int32 end, ::System::Int32 orgStart, ::System::Int32 ti, ::System::Byte* sortkey, ::System::Boolean noLv4, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::Mono::Globalization::Unicode::Contraction*& ct, ::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte*, ::System::Boolean, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::Contraction*&, ::Mono::Globalization::Unicode::SimpleCollator_Context&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_MATCHESBACKWARDCORE_OFFSET))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
		}
	};
}
