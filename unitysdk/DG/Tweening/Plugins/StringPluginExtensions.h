#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_APPENDSCRAMBLEDCHARS_OFFSET UNITYSDK_OFFSET(0x1E885020)
#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS_SCRAMBLECHARS_OFFSET UNITYSDK_OFFSET(0x1E884F70)
#define DG_TWEENING_PLUGINS_STRINGPLUGINEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E884CA0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int StringPluginExtensions_TypeDefinitionIndex = 27951;

	class StringPluginExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsLowercase()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x22AD0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsAll()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x22AD8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsNumerals()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x22AE0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ScrambledCharsUppercase()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x22AE8);
		}
		static ::System::Int32* StaticGet__lastRndSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StringPluginExtensions_TypeDefinitionIndex)->GetStaticField(0x78D0);
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
