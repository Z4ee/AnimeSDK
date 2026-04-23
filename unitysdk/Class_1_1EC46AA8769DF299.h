#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1EC46AA8769DF299_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x17AFFC10)
#define CLASS_1_1EC46AA8769DF299_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17AFFC70)
#define CLASS_1_1EC46AA8769DF299_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x17AFFCB0)
#define CLASS_1_1EC46AA8769DF299_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17AFFCF0)
#define CLASS_1_1EC46AA8769DF299_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x17AFFC00)
#define CLASS_1_1EC46AA8769DF299_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x17AFFD50)
#define CLASS_1_1EC46AA8769DF299_ISPATCH_OFFSET UNITYSDK_OFFSET(0x17AFFD90)
#define CLASS_1_1EC46AA8769DF299_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x17AFFF50)
#define CLASS_1_1EC46AA8769DF299_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x17AFFDD0)
#define CLASS_1_1EC46AA8769DF299_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AFFF90)
#define CLASS_1_1EC46AA8769DF299__CTOR_OFFSET UNITYSDK_OFFSET(0x17B00000)
#define CLASS_1_1EC46AA8769DF299___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B00010)

inline static constexpr unsigned int Class_1_1EC46AA8769DF299_TypeDefinitionIndex = 37789;

class Class_1_1EC46AA8769DF299 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::ByteHash16 Field_1_1; // 0x18
	::System::Int64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_GET_SUBPACKID_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_GETFILESIZE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_ISPATCH_OFFSET))(this);
	}

	::System::Boolean Method_1_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_METHOD_1_F55212E77440B167_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC46AA8769DF299___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
