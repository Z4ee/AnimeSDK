#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21DCD4640D389503_53_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C4AD9E0)
#define CLASS_1_21DCD4640D389503_53_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C4AD920)
#define CLASS_1_21DCD4640D389503_53_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C4AD9A0)
#define CLASS_1_21DCD4640D389503_53_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C4ADB00)
#define CLASS_1_21DCD4640D389503_53_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x1C4AD7F0)
#define CLASS_1_21DCD4640D389503_53_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C4AD860)
#define CLASS_1_21DCD4640D389503_53_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1C4AD4F0)
#define CLASS_1_21DCD4640D389503_53_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x1C4AD810)
#define CLASS_1_21DCD4640D389503_53_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x1C4AD7E0)
#define CLASS_1_21DCD4640D389503_53_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C4AD800)
#define CLASS_1_21DCD4640D389503_53_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C4AD510)
#define CLASS_1_21DCD4640D389503_53_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1C4ADBD0)
#define CLASS_1_21DCD4640D389503_53_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C4AD7C0)
#define CLASS_1_21DCD4640D389503_53_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C4ADAC0)
#define CLASS_1_21DCD4640D389503_53_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C4ADA80)
#define CLASS_1_21DCD4640D389503_53_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C4ADA40)
#define CLASS_1_21DCD4640D389503_53_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x1C4AD6D0)
#define CLASS_1_21DCD4640D389503_53_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x1C4AD600)
#define CLASS_1_21DCD4640D389503_53_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1C4AD530)
#define CLASS_1_21DCD4640D389503_53_METHOD_1_4FD8751E0FE2002F_OFFSET UNITYSDK_OFFSET(0x1C4ADB80)
#define CLASS_1_21DCD4640D389503_53_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C4AD8B0)
#define CLASS_1_21DCD4640D389503_53_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1C4AD500)
#define CLASS_1_21DCD4640D389503_53_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C4AD520)
#define CLASS_1_21DCD4640D389503_53_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1C4ADBE0)
#define CLASS_1_21DCD4640D389503_53_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C4AD7D0)
#define CLASS_1_21DCD4640D389503_53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4ADBF0)
#define CLASS_1_21DCD4640D389503_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ADCE0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_53_TypeDefinitionIndex = 41529;

class Class_1_21DCD4640D389503_53 : public ::System::Object
{
public:
	// static const ::System::String* OIIIIKJMGOA; // 0x0
	// static const ::System::String* NENEMAFDELD; // 0x0
	::System::String* DDMAONMPHBN; // 0x10
	::System::String* _RelativePath_k__BackingField; // 0x18
	::System::String* BJGGJIAADCE; // 0x20
	::System::String* KLOHFPMFIKN; // 0x28
	::System::UInt32 BAAKKMLFJEJ; // 0x30
	::RPG::Client::ByteHash16 LCDHMANJOFH; // 0x34
	::System::UInt32 OECFKIEODGK; // 0x44
	::RPG::Client::ByteHash16 AAOBNOGCEJN; // 0x48
	::RPG::Client::ByteHash16 JLEDBOLHKLO; // 0x58
	::System::UInt32 _Offset_k__BackingField; // 0x68
	::System::UInt32 _BlockIndex_k__BackingField; // 0x6C
	::System::Int32 _SubPackId_k__BackingField; // 0x70
	::RPG::Client::ByteHash16 FJINDHNCEPE; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BlockIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_SET_BLOCKINDEX_OFFSET))(this, a1);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_SET_OFFSET_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_FILESIZE_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_ISVALID_OFFSET))(this);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* Method_1_4FD8751E0FE2002F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_METHOD_1_4FD8751E0FE2002F_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_SET_RELATIVEPATH_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_53_TOSTRING_OFFSET))(this);
	}
};
