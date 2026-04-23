#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }
namespace Mono::Globalization::Unicode { class Contraction; }
namespace Mono::Globalization::Unicode { class Level2Map; }
namespace Mono::Globalization::Unicode { class TailoringInfo; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET UNITYSDK_OFFSET(0x17791570)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET UNITYSDK_OFFSET(0x17791DB0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET UNITYSDK_OFFSET(0x17792950)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET UNITYSDK_OFFSET(0x17792840)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x177923F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET UNITYSDK_OFFSET(0x17791510)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x177923E0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET UNITYSDK_OFFSET(0x177922A0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET UNITYSDK_OFFSET(0x17792300)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET UNITYSDK_OFFSET(0x17792310)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET UNITYSDK_OFFSET(0x17792080)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x17791FB0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET UNITYSDK_OFFSET(0x17792320)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET UNITYSDK_OFFSET(0x17791E30)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET UNITYSDK_OFFSET(0x17791EB0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET UNITYSDK_OFFSET(0x17791F30)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET UNITYSDK_OFFSET(0x17791C50)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x17792120)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET UNITYSDK_OFFSET(0x17792130)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET UNITYSDK_OFFSET(0x17792450)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17792480)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable_TypeDefinitionIndex = 35;

	class MSCompatUnicodeTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_tailoringArr()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1A50);
		}
		static ::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>** StaticGet_tailoringInfos()
		{
			return (::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1A58);
		}
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1A60);
		}
		static ::System::Byte** StaticGet_categories()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1150);
		}
		static ::System::Byte** StaticGet_cjkKOcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1158);
		}
		static ::System::Byte** StaticGet_cjkCHScategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1160);
		}
		static ::System::Byte** StaticGet_ignorableFlags()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1168);
		}
		static ::System::Byte** StaticGet_cjkCHTcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1170);
		}
		static ::System::Int32* StaticGet_MaxExpansionLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1178);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x117C);
		}
		static ::System::Byte** StaticGet_level1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::System::Byte** StaticGet_level3()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1188);
		}
		static ::System::Byte** StaticGet_cjkKOlv2()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1190);
		}
		static ::System::Byte** StaticGet_cjkCHTlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1198);
		}
		static ::System::Byte** StaticGet_level2()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x11A0);
		}
		static ::System::Byte** StaticGet_cjkJAlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x11A8);
		}
		static ::System::Byte** StaticGet_cjkCHSlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x11B0);
		}
		static ::System::Byte** StaticGet_cjkJAcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x11B8);
		}
		static ::System::Byte** StaticGet_cjkKOlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x11C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET))();
		}

		static ::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(::System::Int32 lcid)
		{
			return ((::Mono::Globalization::Unicode::TailoringInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET))(lcid);
		}

		static ::System::Void BuildTailoringTables(::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::TailoringInfo* t, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*& contractions, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*& diacriticals)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*&, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET))(culture, t, contractions, diacriticals);
		}

		static ::System::Void SetCJKReferences(::System::String* name, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::System::Byte*& catTable, ::System::Byte*& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, ::System::Byte*& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET))(name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
		}

		static ::System::Byte Category(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET))(cp);
		}

		static ::System::Byte Level1(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET))(cp);
		}

		static ::System::Byte Level2(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET))(cp);
		}

		static ::System::Byte Level3(::System::Int32 cp)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET))(cp);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 cp, ::System::Byte flag)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET))(cp, flag);
		}

		static ::System::Boolean IsIgnorableNonSpacing(::System::Int32 cp)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET))(cp);
		}

		static ::System::Int32 ToKanaTypeInsensitive(::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET))(i);
		}

		static ::System::Int32 ToWidthCompat(::System::Int32 i)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET))(i);
		}

		static ::System::Boolean HasSpecialWeight(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET))(c);
		}

		static ::System::Boolean IsHalfWidthKana(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET))(c);
		}

		static ::System::Boolean IsHiragana(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET))(c);
		}

		static ::System::Boolean IsJapaneseSmallLetter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET))(c);
		}

		static ::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET))();
		}

		static ::System::IntPtr GetResource(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET))(name);
		}

		static ::System::UInt32 UInt32FromBytePtr(::System::Byte* raw, ::System::UInt32 idx)
		{
			return ((::System::UInt32(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET))(raw, idx);
		}

		static ::System::Void FillCJK(::System::String* culture, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::System::Byte*& catTable, ::System::Byte*& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, ::System::Byte*& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET))(culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
		}

		static ::System::Void FillCJKCore(::System::String* culture, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, ::System::Byte*& catTable, ::System::Byte*& lv1Table, ::Mono::Globalization::Unicode::CodePointIndexer*& cjkLv2Indexer, ::System::Byte*& lv2Table)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET))(culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table);
		}
	};
}
