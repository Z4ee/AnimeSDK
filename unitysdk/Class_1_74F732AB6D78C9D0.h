#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_74F732AB6D78C9D0_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x17B678B0)
#define CLASS_1_74F732AB6D78C9D0_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17B67910)
#define CLASS_1_74F732AB6D78C9D0_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x17B67950)
#define CLASS_1_74F732AB6D78C9D0_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17B67990)
#define CLASS_1_74F732AB6D78C9D0_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x17B678A0)
#define CLASS_1_74F732AB6D78C9D0_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x17B67A70)
#define CLASS_1_74F732AB6D78C9D0_ISPATCH_OFFSET UNITYSDK_OFFSET(0x17B67AB0)
#define CLASS_1_74F732AB6D78C9D0_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x17B67AF0)
#define CLASS_1_74F732AB6D78C9D0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17B67A30)
#define CLASS_1_74F732AB6D78C9D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B67B30)
#define CLASS_1_74F732AB6D78C9D0__CTOR_OFFSET UNITYSDK_OFFSET(0x17B67BF0)
#define CLASS_1_74F732AB6D78C9D0___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B67C00)

inline static constexpr unsigned int Class_1_74F732AB6D78C9D0_TypeDefinitionIndex = 37810;

class Class_1_74F732AB6D78C9D0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int64 Field_1_2; // 0x18
	::RPG::Client::ByteHash16 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GET_SUBPACKID_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETFILESIZE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F732AB6D78C9D0___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
