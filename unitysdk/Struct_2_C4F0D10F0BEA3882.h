#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C4F0D10F0BEA3882_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x22AE590)
#define STRUCT_2_C4F0D10F0BEA3882_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x22AE680)
#define STRUCT_2_C4F0D10F0BEA3882_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x22AE520)
#define STRUCT_2_C4F0D10F0BEA3882_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x22AE730)
#define STRUCT_2_C4F0D10F0BEA3882_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x68F0)
#define STRUCT_2_C4F0D10F0BEA3882_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x22AE740)
#define STRUCT_2_C4F0D10F0BEA3882_ISPATCH_OFFSET UNITYSDK_OFFSET(0x22AE410)
#define STRUCT_2_C4F0D10F0BEA3882_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x22AE4B0)
#define STRUCT_2_C4F0D10F0BEA3882_METHOD_2_28F1EFD474F5A9EC_OFFSET UNITYSDK_OFFSET(0x22AE610)
#define STRUCT_2_C4F0D10F0BEA3882_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x26F0)
#define STRUCT_2_C4F0D10F0BEA3882_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AE7B0)
#define STRUCT_2_C4F0D10F0BEA3882___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AE7C0)

inline static constexpr unsigned int Struct_2_C4F0D10F0BEA3882_TypeDefinitionIndex = 37785;

struct alignas(4) Struct_2_C4F0D10F0BEA3882
{
	::RPG::Client::ByteHash16 Field_2_0; // 0x10
	::System::Int32 _SubPackId_k__BackingField; // 0x20
	::RPG::Client::BlockFlag Field_2_2; // 0x24
	::System::UInt32 Field_2_3; // 0x28

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_SET_SUBPACKID_OFFSET))(this, value);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* Method_2_28F1EFD474F5A9EC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_METHOD_2_28F1EFD474F5A9EC_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C4F0D10F0BEA3882___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
