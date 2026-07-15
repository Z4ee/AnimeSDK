#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_4385444B69C9D5A6_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x38C6E60)
#define STRUCT_2_4385444B69C9D5A6_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x38C6F10)
#define STRUCT_2_4385444B69C9D5A6_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x38C6E10)
#define STRUCT_2_4385444B69C9D5A6_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x38C6FA0)
#define STRUCT_2_4385444B69C9D5A6_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define STRUCT_2_4385444B69C9D5A6_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x38C6FB0)
#define STRUCT_2_4385444B69C9D5A6_ISPATCH_OFFSET UNITYSDK_OFFSET(0x38C6D40)
#define STRUCT_2_4385444B69C9D5A6_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x38C6DC0)
#define STRUCT_2_4385444B69C9D5A6_METHOD_2_ECA28171EB4172FF_OFFSET UNITYSDK_OFFSET(0x38C6EC0)
#define STRUCT_2_4385444B69C9D5A6_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define STRUCT_2_4385444B69C9D5A6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38C7000)

inline static constexpr unsigned int Struct_2_4385444B69C9D5A6_TypeDefinitionIndex = 39327;

struct alignas(4) Struct_2_4385444B69C9D5A6
{
	::RPG::Client::ByteHash16 Field_2_0; // 0x10
	::System::Int32 _SubPackId_k__BackingField; // 0x20
	::RPG::Client::BlockFlag Field_2_2; // 0x24
	::System::UInt32 Field_2_3; // 0x28

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* Method_2_ECA28171EB4172FF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_METHOD_2_ECA28171EB4172FF_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4385444B69C9D5A6_TOSTRING_OFFSET))(this);
	}
};
