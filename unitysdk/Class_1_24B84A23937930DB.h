#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_24B84A23937930DB_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C42C180)
#define CLASS_1_24B84A23937930DB_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C42C040)
#define CLASS_1_24B84A23937930DB_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C42C140)
#define CLASS_1_24B84A23937930DB_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1C42BE60)
#define CLASS_1_24B84A23937930DB_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C42C380)
#define CLASS_1_24B84A23937930DB_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1C42C340)
#define CLASS_1_24B84A23937930DB_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1C42C300)
#define CLASS_1_24B84A23937930DB_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1C42C2C0)
#define CLASS_1_24B84A23937930DB_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1C42BE10)
#define CLASS_1_24B84A23937930DB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C42C1E0)
#define CLASS_1_24B84A23937930DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42BDB0)

inline static constexpr unsigned int Class_1_24B84A23937930DB_TypeDefinitionIndex = 41425;

class Class_1_24B84A23937930DB : public ::System::Object
{
public:
	// static const ::System::Byte HJPCFHNAIOA = 0x7; // 0x0
	::Il2CppArray<::RPG::Client::DesignDataShortNameHash>* AFGPCICJOFN; // 0x10
	::System::String* BJGGJIAADCE; // 0x18
	::RPG::Client::DesignDataShortNameHash HOGGCCKFBEK; // 0x20
	::System::Byte FEMFCJCKOKC; // 0x28
	::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x2C
	::System::Int64 OGPDIJFMIHM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B84A23937930DB_GET_SUBPACKID_OFFSET))(this);
	}
};
