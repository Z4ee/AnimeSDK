#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageSizeFontBrushStyle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C_METHOD_1_3DC3FA08FDCAB5D3_OFFSET UNITYSDK_OFFSET(0x1BD70380)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD70330)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD70370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontBrushStyle___c_TypeDefinitionIndex = 55366;

	class LanguageFontBrushStyle___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::LanguageFontBrushStyle___c** StaticGet___9()
		{
			return (::MoleMole::Config::LanguageFontBrushStyle___c**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle___c_TypeDefinitionIndex)->GetStaticField(0x39D50);
		}
		static ::System::Comparison_1<::MoleMole::Config::LanguageSizeFontBrushStyle>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::LanguageSizeFontBrushStyle>**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle___c_TypeDefinitionIndex)->GetStaticField(0x39D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_3DC3FA08FDCAB5D3(::MoleMole::Config::LanguageSizeFontBrushStyle a1, ::MoleMole::Config::LanguageSizeFontBrushStyle a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::LanguageSizeFontBrushStyle, ::MoleMole::Config::LanguageSizeFontBrushStyle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C_METHOD_1_3DC3FA08FDCAB5D3_OFFSET))(this, a1, a2);
		}
	};
}
