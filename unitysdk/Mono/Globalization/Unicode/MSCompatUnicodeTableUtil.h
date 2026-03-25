#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16167040)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTableUtil_TypeDefinitionIndex = 37;

	class MSCompatUnicodeTableUtil : public ::System::Object
	{
	public:
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level3()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17A0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Category()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17A8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level2()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17B0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_CjkCHS()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17B8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Cjk()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17C0);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Level1()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17C8);
		}
		static ::Mono::Globalization::Unicode::CodePointIndexer** StaticGet_Ignorable()
		{
			return (::Mono::Globalization::Unicode::CodePointIndexer**)Il2CppClass::FromTypeDefinitionIndex(MSCompatUnicodeTableUtil_TypeDefinitionIndex)->GetStaticField(0x17D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL__CCTOR_OFFSET))();
		}
	};
}
