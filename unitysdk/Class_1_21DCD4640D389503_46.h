#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21DCD4640D389503_46_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x189037E0)
#define CLASS_1_21DCD4640D389503_46_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x18903720)
#define CLASS_1_21DCD4640D389503_46_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x189037A0)
#define CLASS_1_21DCD4640D389503_46_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x18903900)
#define CLASS_1_21DCD4640D389503_46_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x189035F0)
#define CLASS_1_21DCD4640D389503_46_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x18903660)
#define CLASS_1_21DCD4640D389503_46_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x189032F0)
#define CLASS_1_21DCD4640D389503_46_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x18903610)
#define CLASS_1_21DCD4640D389503_46_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x189035E0)
#define CLASS_1_21DCD4640D389503_46_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18903600)
#define CLASS_1_21DCD4640D389503_46_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x18903310)
#define CLASS_1_21DCD4640D389503_46_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x189039D0)
#define CLASS_1_21DCD4640D389503_46_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x189035C0)
#define CLASS_1_21DCD4640D389503_46_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x189038C0)
#define CLASS_1_21DCD4640D389503_46_ISPATCH_OFFSET UNITYSDK_OFFSET(0x18903880)
#define CLASS_1_21DCD4640D389503_46_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x18903840)
#define CLASS_1_21DCD4640D389503_46_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x189034D0)
#define CLASS_1_21DCD4640D389503_46_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x18903400)
#define CLASS_1_21DCD4640D389503_46_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x18903330)
#define CLASS_1_21DCD4640D389503_46_METHOD_1_4FD8751E0FE2002F_OFFSET UNITYSDK_OFFSET(0x18903980)
#define CLASS_1_21DCD4640D389503_46_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x189036B0)
#define CLASS_1_21DCD4640D389503_46_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x18903300)
#define CLASS_1_21DCD4640D389503_46_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x18903320)
#define CLASS_1_21DCD4640D389503_46_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x189039E0)
#define CLASS_1_21DCD4640D389503_46_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x189035D0)
#define CLASS_1_21DCD4640D389503_46_TOSTRING_OFFSET UNITYSDK_OFFSET(0x189039F0)
#define CLASS_1_21DCD4640D389503_46__CTOR_OFFSET UNITYSDK_OFFSET(0x18903AE0)
#define CLASS_1_21DCD4640D389503_46___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18903B00)

inline static constexpr unsigned int Class_1_21DCD4640D389503_46_TypeDefinitionIndex = 38551;

class Class_1_21DCD4640D389503_46 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::String* _RelativePath_k__BackingField; // 0x28
	::RPG::Client::ByteHash16 Field_1_6; // 0x30
	::System::UInt32 Field_1_7; // 0x40
	::System::UInt32 _Offset_k__BackingField; // 0x44
	::System::UInt32 Field_1_9; // 0x48
	::System::UInt32 _BlockIndex_k__BackingField; // 0x4C
	::System::Int32 _SubPackId_k__BackingField; // 0x50
	::RPG::Client::ByteHash16 Field_1_12; // 0x54
	::RPG::Client::ByteHash16 Field_1_13; // 0x64
	::RPG::Client::ByteHash16 Field_1_14; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BlockIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_SET_BLOCKINDEX_OFFSET))(this, a1);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_SET_OFFSET_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_FILESIZE_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_ISVALID_OFFSET))(this);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* Method_1_4FD8751E0FE2002F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_METHOD_1_4FD8751E0FE2002F_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_SET_RELATIVEPATH_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_46___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
