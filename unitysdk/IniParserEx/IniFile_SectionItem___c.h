#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define INIPARSEREX_INIFILE_SECTIONITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B273620)
#define INIPARSEREX_INIFILE_SECTIONITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B273660)
#define INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_0_OFFSET UNITYSDK_OFFSET(0x1B273670)
#define INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_1_OFFSET UNITYSDK_OFFSET(0x1B273690)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_SectionItem___c_TypeDefinitionIndex = 3924;

	class IniFile_SectionItem___c : public ::System::Object
	{
	public:
		static ::IniParserEx::IniFile_SectionItem___c** StaticGet___9()
		{
			return (::IniParserEx::IniFile_SectionItem___c**)Il2CppClass::FromTypeDefinitionIndex(IniFile_SectionItem___c_TypeDefinitionIndex)->GetStaticField(0x2D790);
		}
		static ::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::String*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::IniParserEx::IniFile_SectionItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IniFile_SectionItem___c_TypeDefinitionIndex)->GetStaticField(0x2D798);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>, ::System::String*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IniFile_SectionItem___c_TypeDefinitionIndex)->GetStaticField(0x2D7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__30_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_0_OFFSET))(this, a1);
		}

		::System::String* _ToString_b__30_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_1_OFFSET))(this, a1);
		}
	};
}
