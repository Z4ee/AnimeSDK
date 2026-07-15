#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x15BCB560)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x15B9EA30)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x15BCBE60)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x15BCB5C0)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BCA2A0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JavaScriptUtils_TypeDefinitionIndex = 9336;

	class JavaScriptUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_SingleQuoteCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x33FD0);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_HtmlCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x33FD8);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_DoubleQuoteCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x33FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Boolean>* GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling a1, ::System::Char a2)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::Newtonsoft::Json::StringEscapeHandling, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ShouldEscapeJavaScriptString(::System::String* a1, ::Il2CppArray<::System::Boolean>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET))(a1, a2);
		}

		static ::System::Void WriteEscapedJavaScriptString(::System::IO::TextWriter* a1, ::System::String* a2, ::System::Char a3, ::System::Boolean a4, ::Il2CppArray<::System::Boolean>* a5, ::Newtonsoft::Json::StringEscapeHandling a6, ::Newtonsoft::Json::IArrayPool_1<::System::Char>* a7, ::Il2CppArray<::System::Char>*& a8)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*, ::System::Char, ::System::Boolean, ::Il2CppArray<::System::Boolean>*, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* ToEscapedJavaScriptString(::System::String* a1, ::System::Char a2, ::System::Boolean a3, ::Newtonsoft::Json::StringEscapeHandling a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::System::Boolean, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET))(a1, a2, a3, a4);
		}
	};
}
