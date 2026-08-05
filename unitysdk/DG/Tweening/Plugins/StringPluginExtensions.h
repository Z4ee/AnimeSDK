#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_APPENDSCRAMBLEDCHARS_OFFSET UNITYSDK_OFFSET(0x1FC64AC0)
#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_SCRAMBLECHARS_OFFSET UNITYSDK_OFFSET(0x1FC64A10)
#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC64740)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int StringPluginExtensions_TypeDefinitionIndex = 28555;

	class StringPluginExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsUppercase()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x24240);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsLowercase()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x24248);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsNumerals()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x24250);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsAll()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x24258);
		}
		static ::System::Int32* StaticGet__lastRndSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x78A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void ScrambleChars(::Il2CppArray<::System::Char>* chars)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_SCRAMBLECHARS_OFFSET))(chars);
		}

		static ::System::Text::StringBuilder* AppendScrambledChars(::System::Text::StringBuilder* buffer, ::System::Int32 length, ::Il2CppArray<::System::Char>* chars)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_APPENDSCRAMBLEDCHARS_OFFSET))(buffer, length, chars);
		}
	};
}
