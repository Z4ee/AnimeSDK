#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_581;
class Class_0_16E4307DCC419505_68;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_1_AAE3CF8472BB8C9A_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1237B740)
#define CLASS_1_AAE3CF8472BB8C9A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1237B6C0)
#define CLASS_1_AAE3CF8472BB8C9A_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1237B700)
#define CLASS_1_AAE3CF8472BB8C9A_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1237B820)
#define CLASS_1_AAE3CF8472BB8C9A_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1237B7E0)
#define CLASS_1_AAE3CF8472BB8C9A_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1237B7A0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BA4FBDBA106E7125_OFFSET UNITYSDK_OFFSET(0x1237B9D0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BF26327FD1114250_OFFSET UNITYSDK_OFFSET(0x1237BBD0)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D0C27DAEEA53EF0D_OFFSET UNITYSDK_OFFSET(0x1237BD60)
#define CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D8877F3F2CDAE711_OFFSET UNITYSDK_OFFSET(0x1237B920)
#define CLASS_1_AAE3CF8472BB8C9A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1237B860)
#define CLASS_1_AAE3CF8472BB8C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1237BF60)
#define CLASS_1_AAE3CF8472BB8C9A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1237BF80)

inline static constexpr unsigned int Class_1_AAE3CF8472BB8C9A_TypeDefinitionIndex = 55699;

class Class_1_AAE3CF8472BB8C9A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_51C874EE455D4F2F_1* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_581* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_68* Field_1_3; // 0x28
	::Class_1_51C874EE455D4F2F* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Int64 Field_1_6; // 0x40
	::RPG::Client::ByteHash16 Field_1_7; // 0x48
	::RPG::Client::ExeCode Field_1_8; // 0x58
	::System::Boolean Field_1_9; // 0x5C
	::System::Boolean Field_1_10; // 0x5D
	::System::Boolean Field_1_11; // 0x5E
	::System::Boolean Field_1_12; // 0x5F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A__CTOR_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_D8877F3F2CDAE711()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D8877F3F2CDAE711_OFFSET))(this);
	}

	::System::String* Method_1_BA4FBDBA106E7125()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BA4FBDBA106E7125_OFFSET))(this);
	}

	::System::String* Method_1_BF26327FD1114250()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_BF26327FD1114250_OFFSET))(this);
	}

	::System::String* Method_1_D0C27DAEEA53EF0D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A_METHOD_1_D0C27DAEEA53EF0D_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE3CF8472BB8C9A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
