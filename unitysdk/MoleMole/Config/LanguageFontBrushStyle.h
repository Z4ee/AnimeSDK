#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageSizeFontBrushStyle.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_3815FB77F1890478_OFFSET UNITYSDK_OFFSET(0x153D1150)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_D617C2B7615DDDC7_OFFSET UNITYSDK_OFFSET(0x153D1210)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x153D1410)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x153D10F0)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x153D0FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontBrushStyle_TypeDefinitionIndex = 39464;

	class LanguageFontBrushStyle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>** StaticGet_Empty()
		{
			return (::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle_TypeDefinitionIndex)->GetStaticField(0x348B0);
		}
		static ::System::ValueTuple_2<::System::Single, ::System::Single>* StaticGet_DefaultStyle()
		{
			return (::System::ValueTuple_2<::System::Single, ::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle_TypeDefinitionIndex)->GetStaticField(0xCED0);
		}
		::Il2CppArray<::MoleMole::LanguageType>* fontBrushEnabledLanguages; // 0x10
		::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>* sizeStyles; // 0x18
		::System::Boolean _sorted; // 0x20
		::System::UInt64 _fontBrushEnabledLanguages; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* fontBrushEnabledDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CCTOR_OFFSET))();
		}

		::System::Boolean Method_1_3815FB77F1890478(::MoleMole::LanguageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_3815FB77F1890478_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_D617C2B7615DDDC7(::System::Int32 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_D617C2B7615DDDC7_OFFSET))(this, a1);
		}

		::System::Void Method_1_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}
