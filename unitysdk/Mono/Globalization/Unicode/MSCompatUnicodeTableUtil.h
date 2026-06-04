#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1854D8F0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTableUtil_TypeDefinitionIndex = 37;

	class MSCompatUnicodeTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Category()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1DF0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level3()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1DF8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Cjk()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1E00);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Ignorable()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1E08);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_CjkCHS()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1E10);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level2()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1E18);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level1()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x1E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL__CCTOR_OFFSET))();
		}
	};
}
