#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/UriPartial.h"
#include "unitysdk/Mono/Security/Uri_UriScheme.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1618F2B0)
#define MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x16190F30)
#define MONO_SECURITY_URI_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x16190ED0)
#define MONO_SECURITY_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x161901F0)
#define MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x1618FF80)
#define MONO_SECURITY_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1618F680)
#define MONO_SECURITY_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x1618F960)
#define MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1618FF10)
#define MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x16192D70)
#define MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1618EF80)
#define MONO_SECURITY_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x1618EF90)
#define MONO_SECURITY_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x1618F040)
#define MONO_SECURITY_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x1618F050)
#define MONO_SECURITY_URI_HEXESCAPE_OFFSET UNITYSDK_OFFSET(0x16190290)
#define MONO_SECURITY_URI_HEXUNESCAPE_OFFSET UNITYSDK_OFFSET(0x161904A0)
#define MONO_SECURITY_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x161909D0)
#define MONO_SECURITY_URI_ISHEXENCODING_OFFSET UNITYSDK_OFFSET(0x161909F0)
#define MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET UNITYSDK_OFFSET(0x16192600)
#define MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x161924C0)
#define MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x161923C0)
#define MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET UNITYSDK_OFFSET(0x16192240)
#define MONO_SECURITY_URI_PARSE_1_OFFSET UNITYSDK_OFFSET(0x16191440)
#define MONO_SECURITY_URI_PARSE_OFFSET UNITYSDK_OFFSET(0x1618EEB0)
#define MONO_SECURITY_URI_REDUCE_OFFSET UNITYSDK_OFFSET(0x16192780)
#define MONO_SECURITY_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16190B90)
#define MONO_SECURITY_URI_UNESCAPE_1_OFFSET UNITYSDK_OFFSET(0x16190C50)
#define MONO_SECURITY_URI_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1618F2A0)
#define MONO_SECURITY_URI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16193000)
#define MONO_SECURITY_URI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1618EE60)
#define MONO_SECURITY_URI__CTOR_OFFSET UNITYSDK_OFFSET(0x1618EE10)

namespace Mono::Security
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 52;

	class Uri : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::System::String** StaticGet_hexUpperChars()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F08);
		}
		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::Il2CppArray<::Mono::Security::Uri_UriScheme>** StaticGet_schemes()
		{
			return (::Il2CppArray<::Mono::Security::Uri_UriScheme>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}
		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F38);
		}
		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F48);
		}
		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		::System::String* path; // 0x10
		::System::String* cachedToString; // 0x18
		::System::String* host; // 0x20
		::System::String* fragment; // 0x28
		::System::String* query; // 0x30
		::System::String* scheme; // 0x38
		::System::String* source; // 0x40
		::System::String* userinfo; // 0x48
		::System::String* cachedLocalPath; // 0x50
		::System::Int32 cachedHashCode; // 0x58
		::System::Boolean reduce; // 0x5C
		::System::Boolean isUnc; // 0x5D
		::System::Boolean userEscaped; // 0x5E
		::System::Boolean isUnixFilePath; // 0x5F
		::System::Boolean isOpaquePart; // 0x60
		::System::Int32 port; // 0x64

		::System::Void _ctor(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CTOR_OFFSET))(this, uriString);
		}

		::System::Void _ctor_1(::System::String* uriString, ::System::Boolean dontEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CTOR_1_OFFSET))(this, uriString, dontEscape);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CCTOR_OFFSET))();
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparant)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_EQUALS_OFFSET))(this, comparant);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetLeftPart(::Mono::Security::UriPartial part)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::UriPartial))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETLEFTPART_OFFSET))(this, part);
		}

		static ::System::Int32 FromHex(::System::Char digit)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_FROMHEX_OFFSET))(digit);
		}

		static ::System::String* HexEscape(::System::Char character)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXESCAPE_OFFSET))(character);
		}

		static ::System::Char HexUnescape(::System::String* pattern, ::System::Int32& index)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXUNESCAPE_OFFSET))(pattern, index);
		}

		static ::System::Boolean IsHexDigit(::System::Char digit)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXDIGIT_OFFSET))(digit);
		}

		static ::System::Boolean IsHexEncoding(::System::String* pattern, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXENCODING_OFFSET))(pattern, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::String* EscapeString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_OFFSET))(str);
		}

		static ::System::String* EscapeString_1(::System::String* str, ::System::Boolean escapeReserved, ::System::Boolean escapeHex, ::System::Boolean escapeBrackets)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET))(str, escapeReserved, escapeHex, escapeBrackets);
		}

		::System::Void Parse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_OFFSET))(this);
		}

		::System::String* Unescape(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_OFFSET))(this, str);
		}

		::System::String* Unescape_1(::System::String* str, ::System::Boolean excludeSharp)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_1_OFFSET))(this, str, excludeSharp);
		}

		::System::Void ParseAsWindowsUNC(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET))(this, uriString);
		}

		::System::Void ParseAsWindowsAbsoluteFilePath(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET))(this, uriString);
		}

		::System::Void ParseAsUnixAbsoluteFilePath(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET))(this, uriString);
		}

		::System::Void Parse_1(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_1_OFFSET))(this, uriString);
		}

		static ::System::String* Reduce(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_REDUCE_OFFSET))(path);
		}

		static ::System::String* GetSchemeDelimiter(::System::String* scheme)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET))(scheme);
		}

		static ::System::Int32 GetDefaultPort(::System::String* scheme)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET))(scheme);
		}

		::System::String* GetOpaqueWiseSchemeDelimiter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET))(this);
		}

		static ::System::Boolean IsPredefinedScheme(::System::String* scheme)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET))(scheme);
		}
	};
}
