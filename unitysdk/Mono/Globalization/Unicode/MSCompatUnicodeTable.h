#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }
namespace Mono::Globalization::Unicode { class Contraction; }
namespace Mono::Globalization::Unicode { class Level2Map; }
namespace Mono::Globalization::Unicode { class TailoringInfo; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET UNITYSDK_OFFSET(0x16DE0A40)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET UNITYSDK_OFFSET(0x16DE1330)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET UNITYSDK_OFFSET(0x16DE1F40)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET UNITYSDK_OFFSET(0x16DE1E30)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x16DE1A10)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET UNITYSDK_OFFSET(0x16DE09E0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x16DE1A00)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET UNITYSDK_OFFSET(0x16DE18C0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET UNITYSDK_OFFSET(0x16DE1920)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET UNITYSDK_OFFSET(0x16DE1930)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET UNITYSDK_OFFSET(0x16DE16A0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x16DE1530)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET UNITYSDK_OFFSET(0x16DE1940)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET UNITYSDK_OFFSET(0x16DE13B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET UNITYSDK_OFFSET(0x16DE1430)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET UNITYSDK_OFFSET(0x16DE14B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET UNITYSDK_OFFSET(0x16DE11D0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x16DE1740)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET UNITYSDK_OFFSET(0x16DE1750)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET UNITYSDK_OFFSET(0x16DE1A70)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DE1AA0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable_TypeDefinitionIndex = 35;

	class MSCompatUnicodeTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_tailoringArr()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x3020);
		}
		static ::System::Object** StaticGet_forLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x3028);
		}
		static ::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>** StaticGet_tailoringInfos()
		{
			return (::Il2CppArray<::Mono::Globalization::Unicode::TailoringInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x3030);
		}
		static ::System::Byte** StaticGet_ignorableFlags()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10A0);
		}
		static ::System::Byte** StaticGet_categories()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10A8);
		}
		static ::System::Byte** StaticGet_cjkKOcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10B0);
		}
		static ::System::Boolean* StaticGet_isReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10B8);
		}
		static ::System::Int32* StaticGet_MaxExpansionLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10BC);
		}
		static ::System::Byte** StaticGet_cjkKOlv2()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10C0);
		}
		static ::System::Byte** StaticGet_cjkCHSlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10C8);
		}
		static ::System::Byte** StaticGet_level3()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10D0);
		}
		static ::System::Byte** StaticGet_cjkJAcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10D8);
		}
		static ::System::Byte** StaticGet_cjkCHScategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10E0);
		}
		static ::System::Byte** StaticGet_level1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10E8);
		}
		static ::System::Byte** StaticGet_cjkCHTlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10F0);
		}
		static ::System::Byte** StaticGet_cjkJAlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x10F8);
		}
		static ::System::Byte** StaticGet_level2()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1100);
		}
		static ::System::Byte** StaticGet_cjkCHTcategory()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1108);
		}
		static ::System::Byte** StaticGet_cjkKOlv1()
		{
			return (::System::Byte**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTable_TypeDefinitionIndex)->GetStaticField(0x1110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE__CCTOR_OFFSET))();
		}

		static ::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(::System::Int32 a1)
		{
			return ((::Mono::Globalization::Unicode::TailoringInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET))(a1);
		}

		static ::System::Void BuildTailoringTables(::System::Globalization::CultureInfo* a1, ::Mono::Globalization::Unicode::TailoringInfo* a2, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*& a3, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*& a4)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*, ::Il2CppArray<::Mono::Globalization::Unicode::Contraction*>*&, ::Il2CppArray<::Mono::Globalization::Unicode::Level2Map*>*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCJKReferences(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer*& a2, ::System::Byte*& a3, ::System::Byte*& a4, ::Mono::Globalization::Unicode::CodePointIndexer*& a5, ::System::Byte*& a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Byte Category(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET))(a1);
		}

		static ::System::Byte Level1(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET))(a1);
		}

		static ::System::Byte Level2(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET))(a1);
		}

		static ::System::Byte Level3(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET))(a1);
		}

		static ::System::Boolean IsIgnorable(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsIgnorableNonSpacing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET))(a1);
		}

		static ::System::Int32 ToKanaTypeInsensitive(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET))(a1);
		}

		static ::System::Int32 ToWidthCompat(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET))(a1);
		}

		static ::System::Boolean HasSpecialWeight(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET))(a1);
		}

		static ::System::Boolean IsHalfWidthKana(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET))(a1);
		}

		static ::System::Boolean IsHiragana(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET))(a1);
		}

		static ::System::Boolean IsJapaneseSmallLetter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET))(a1);
		}

		static ::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET))();
		}

		static ::System::IntPtr GetResource(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET))(a1);
		}

		static ::System::UInt32 UInt32FromBytePtr(::System::Byte* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET))(a1, a2);
		}

		static ::System::Void FillCJK(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer*& a2, ::System::Byte*& a3, ::System::Byte*& a4, ::Mono::Globalization::Unicode::CodePointIndexer*& a5, ::System::Byte*& a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FillCJKCore(::System::String* a1, ::Mono::Globalization::Unicode::CodePointIndexer*& a2, ::System::Byte*& a3, ::System::Byte*& a4, ::Mono::Globalization::Unicode::CodePointIndexer*& a5, ::System::Byte*& a6)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&, ::System::Byte*&, ::Mono::Globalization::Unicode::CodePointIndexer*&, ::System::Byte*&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
