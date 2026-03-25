#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7179D0DED6D3E44A_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x164F5FA0)
#define CLASS_1_7179D0DED6D3E44A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x164F5EE0)
#define CLASS_1_7179D0DED6D3E44A_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x164F5F60)
#define CLASS_1_7179D0DED6D3E44A_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x164F60C0)
#define CLASS_1_7179D0DED6D3E44A_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x164F5DF0)
#define CLASS_1_7179D0DED6D3E44A_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x164F5E20)
#define CLASS_1_7179D0DED6D3E44A_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x164F5B30)
#define CLASS_1_7179D0DED6D3E44A_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x164F5E10)
#define CLASS_1_7179D0DED6D3E44A_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x164F5DE0)
#define CLASS_1_7179D0DED6D3E44A_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x164F5E00)
#define CLASS_1_7179D0DED6D3E44A_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x164F5B50)
#define CLASS_1_7179D0DED6D3E44A_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x164F6190)
#define CLASS_1_7179D0DED6D3E44A_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x164F5DC0)
#define CLASS_1_7179D0DED6D3E44A_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x164F6080)
#define CLASS_1_7179D0DED6D3E44A_ISPATCH_OFFSET UNITYSDK_OFFSET(0x164F6040)
#define CLASS_1_7179D0DED6D3E44A_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x164F6000)
#define CLASS_1_7179D0DED6D3E44A_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x164F5CD0)
#define CLASS_1_7179D0DED6D3E44A_METHOD_1_4FD8751E0FE2002F_OFFSET UNITYSDK_OFFSET(0x164F6140)
#define CLASS_1_7179D0DED6D3E44A_METHOD_1_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x164F5C20)
#define CLASS_1_7179D0DED6D3E44A_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x164F5B70)
#define CLASS_1_7179D0DED6D3E44A_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x164F5E70)
#define CLASS_1_7179D0DED6D3E44A_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x164F5B40)
#define CLASS_1_7179D0DED6D3E44A_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x164F5B60)
#define CLASS_1_7179D0DED6D3E44A_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x164F61A0)
#define CLASS_1_7179D0DED6D3E44A_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x164F5DD0)
#define CLASS_1_7179D0DED6D3E44A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164F61B0)
#define CLASS_1_7179D0DED6D3E44A__CTOR_OFFSET UNITYSDK_OFFSET(0x164E1640)
#define CLASS_1_7179D0DED6D3E44A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164F62A0)

inline static constexpr unsigned int Class_1_7179D0DED6D3E44A_TypeDefinitionIndex = 32097;

class Class_1_7179D0DED6D3E44A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	::System::String* Field_1_10; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::String* _RelativePath_k__BackingField; // 0x20
	::RPG::Client::ByteHash16 Field_1_6; // 0x28
	::RPG::Client::ByteHash16 Field_1_5; // 0x38
	::System::UInt32 _BlockIndex_k__BackingField; // 0x48
	::RPG::Client::ByteHash16 Field_1_7; // 0x4C
	::RPG::Client::ByteHash16 Field_1_4; // 0x5C
	::System::UInt32 _Offset_k__BackingField; // 0x6C
	::System::Int32 _SubPackId_k__BackingField; // 0x70
	::System::UInt32 Field_1_1; // 0x74
	::System::UInt32 Field_1_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BlockIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_SET_BLOCKINDEX_OFFSET))(this, value);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_SET_OFFSET_OFFSET))(this, value);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_METHOD_1_88B60F3B95FAA4F1_1_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_SET_SUBPACKID_OFFSET))(this, value);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_FILESIZE_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_ISVALID_OFFSET))(this);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* Method_1_4FD8751E0FE2002F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_METHOD_1_4FD8751E0FE2002F_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_SET_RELATIVEPATH_OFFSET))(this, value);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7179D0DED6D3E44A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
