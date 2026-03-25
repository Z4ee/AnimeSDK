#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1EC46AA8769DF299_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x164D0F40)
#define CLASS_1_1EC46AA8769DF299_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x164D0FA0)
#define CLASS_1_1EC46AA8769DF299_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x164D0FE0)
#define CLASS_1_1EC46AA8769DF299_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x164D1020)
#define CLASS_1_1EC46AA8769DF299_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x164D0F30)
#define CLASS_1_1EC46AA8769DF299_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x164D1080)
#define CLASS_1_1EC46AA8769DF299_ISPATCH_OFFSET UNITYSDK_OFFSET(0x164D10C0)
#define CLASS_1_1EC46AA8769DF299_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x164D1280)
#define CLASS_1_1EC46AA8769DF299_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x164D1100)
#define CLASS_1_1EC46AA8769DF299_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164D12C0)
#define CLASS_1_1EC46AA8769DF299__CTOR_OFFSET UNITYSDK_OFFSET(0x164D1330)
#define CLASS_1_1EC46AA8769DF299___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164D1340)

inline static constexpr unsigned int Class_1_1EC46AA8769DF299_TypeDefinitionIndex = 32069;

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
