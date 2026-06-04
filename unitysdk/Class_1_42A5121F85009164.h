#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_42A5121F85009164_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x188B6AA0)
#define CLASS_1_42A5121F85009164_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x188B6960)
#define CLASS_1_42A5121F85009164_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x188B6A60)
#define CLASS_1_42A5121F85009164_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x188B6850)
#define CLASS_1_42A5121F85009164_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x188B6CA0)
#define CLASS_1_42A5121F85009164_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x188B6C60)
#define CLASS_1_42A5121F85009164_ISPATCH_OFFSET UNITYSDK_OFFSET(0x188B6C20)
#define CLASS_1_42A5121F85009164_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x188B6BE0)
#define CLASS_1_42A5121F85009164_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x188B6800)
#define CLASS_1_42A5121F85009164_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188B6B00)
#define CLASS_1_42A5121F85009164__CTOR_OFFSET UNITYSDK_OFFSET(0x188B67D0)
#define CLASS_1_42A5121F85009164___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188B6CB0)

inline static constexpr unsigned int Class_1_42A5121F85009164_TypeDefinitionIndex = 38448;

class Class_1_42A5121F85009164 : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_0 = 0x7; // 0x0
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Int64 Field_1_3; // 0x20
	::RPG::Client::ByteHash16 Field_1_4; // 0x28
	::System::Byte Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164_GET_SUBPACKID_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42A5121F85009164___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
