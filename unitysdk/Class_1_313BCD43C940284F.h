#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_313BCD43C940284F_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x12E2D510)
#define CLASS_1_313BCD43C940284F_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x12E2D6E0)
#define CLASS_1_313BCD43C940284F_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x12E2D720)
#define CLASS_1_313BCD43C940284F_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x12E2D8A0)
#define CLASS_1_313BCD43C940284F_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E2D500)
#define CLASS_1_313BCD43C940284F_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x12E2D980)
#define CLASS_1_313BCD43C940284F_ISPATCH_OFFSET UNITYSDK_OFFSET(0x12E2D9C0)
#define CLASS_1_313BCD43C940284F_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x12E2DA00)
#define CLASS_1_313BCD43C940284F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12E2D940)
#define CLASS_1_313BCD43C940284F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E2DA40)
#define CLASS_1_313BCD43C940284F__CTOR_OFFSET UNITYSDK_OFFSET(0x12E2DB00)

inline static constexpr unsigned int Class_1_313BCD43C940284F_TypeDefinitionIndex = 39352;

class Class_1_313BCD43C940284F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int64 Field_1_1; // 0x18
	::RPG::Client::ByteHash16 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_GET_SUBPACKID_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_GETFILESIZE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_313BCD43C940284F_TOSTRING_OFFSET))(this);
	}
};
