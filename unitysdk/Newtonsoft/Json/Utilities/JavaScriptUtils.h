#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1D630CB0)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x1D630D30)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x1D631560)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x1D630E50)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62FEF0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JavaScriptUtils_TypeDefinitionIndex = 7057;

	class JavaScriptUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_SingleQuoteCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x5E60);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_DoubleQuoteCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x5E68);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_HtmlCharEscapeFlags()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JavaScriptUtils_TypeDefinitionIndex)->GetStaticField(0x5E70);
		}
		// static const ::System::Int32 UnicodeTextLength = 0x6; // 0x0
		// static const ::System::String* EscapedUnicodeText; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Boolean>* GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::System::Char quoteChar)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::Newtonsoft::Json::StringEscapeHandling, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET))(stringEscapeHandling, quoteChar);
		}

		static ::System::Boolean ShouldEscapeJavaScriptString(::System::String* s, ::Il2CppArray<::System::Boolean>* charEscapeFlags)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET))(s, charEscapeFlags);
		}

		static ::System::Void WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::System::String* s, ::System::Char delimiter, ::System::Boolean appendDelimiters, ::Il2CppArray<::System::Boolean>* charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<::System::Char>* bufferPool, ::Il2CppArray<::System::Char>*& writeBuffer)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*, ::System::Char, ::System::Boolean, ::Il2CppArray<::System::Boolean>*, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET))(writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
		}

		static ::System::String* ToEscapedJavaScriptString(::System::String* value, ::System::Char delimiter, ::System::Boolean appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::System::Boolean, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET))(value, delimiter, appendDelimiters, stringEscapeHandling);
		}
	};
}
