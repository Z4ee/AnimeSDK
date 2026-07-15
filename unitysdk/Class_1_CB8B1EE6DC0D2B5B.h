#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB8B1EE6DC0D2B5B_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x12E54220)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x12E540E0)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x12E541E0)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x12E53F00)
#define CLASS_1_CB8B1EE6DC0D2B5B_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E54420)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x12E543E0)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISPATCH_OFFSET UNITYSDK_OFFSET(0x12E543A0)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x12E54360)
#define CLASS_1_CB8B1EE6DC0D2B5B_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x12E53EB0)
#define CLASS_1_CB8B1EE6DC0D2B5B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E54280)
#define CLASS_1_CB8B1EE6DC0D2B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x12E53E80)

inline static constexpr unsigned int Class_1_CB8B1EE6DC0D2B5B_TypeDefinitionIndex = 39256;

class Class_1_CB8B1EE6DC0D2B5B : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_0 = 0x7; // 0x0
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Byte Field_1_3; // 0x20
	::System::Int64 Field_1_4; // 0x28
	::RPG::Client::ByteHash16 Field_1_5; // 0x30
	::System::UInt32 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GET_SUBPACKID_OFFSET))(this);
	}
};
