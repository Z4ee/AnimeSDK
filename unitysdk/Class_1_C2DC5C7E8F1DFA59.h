#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_89;
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_C2DC5C7E8F1DFA59_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x12E54490)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x12E54510)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x12E544F0)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x12E544D0)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x12E54470)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12E544B0)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12E54450)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x12E54650)
#define CLASS_1_C2DC5C7E8F1DFA59_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E54430)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x12E54670)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_1160672A4B923679_OFFSET UNITYSDK_OFFSET(0x12E56BD0)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_2C4CACFCB85F415D_OFFSET UNITYSDK_OFFSET(0x12E54530)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_35F10ABABB5898C9_OFFSET UNITYSDK_OFFSET(0x12E547E0)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_620AA33E89FAD3FE_OFFSET UNITYSDK_OFFSET(0x12E57EF0)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_B9CAA2E84691ECE8_OFFSET UNITYSDK_OFFSET(0x12E561C0)
#define CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x12E54610)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x12E544A0)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x12E54520)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_BUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x12E54500)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x12E544E0)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x12E54480)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12E544C0)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12E54460)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x12E54660)
#define CLASS_1_C2DC5C7E8F1DFA59_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E54440)
#define CLASS_1_C2DC5C7E8F1DFA59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E58070)
#define CLASS_1_C2DC5C7E8F1DFA59__CTOR_OFFSET UNITYSDK_OFFSET(0x12E56130)

inline static constexpr unsigned int Class_1_C2DC5C7E8F1DFA59_TypeDefinitionIndex = 39274;

class Class_1_C2DC5C7E8F1DFA59 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_89*>* Field_1_0; // 0x10
	::System::String* _RelativePath_k__BackingField; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x28
	::System::String* _BundleShortName_k__BackingField; // 0x30
	::System::String* _BlockContentHash_k__BackingField; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::UInt64 _BundleShortNameHash_k__BackingField; // 0x48
	::System::Int32 Field_1_8; // 0x50
	::RPG::Client::AssetsStaticFlag _AssetFlags_k__BackingField; // 0x54
	::System::Boolean _IsValid_k__BackingField; // 0x56
	::System::Int32 _SubPackId_k__BackingField; // 0x58
	::System::UInt32 _Offset_k__BackingField; // 0x5C
	::System::Int64 _FileSize_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_OFFSET_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_FILESIZE_OFFSET))(this);
	}

	::System::Void set_FileSize(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_FILESIZE_OFFSET))(this, a1);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Void set_AssetFlags(::RPG::Client::AssetsStaticFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsStaticFlag))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_ASSETFLAGS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_ISVALID_OFFSET))(this);
	}

	::System::Void set_IsValid(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_ISVALID_OFFSET))(this, a1);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::Void set_BundleShortName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_BUNDLESHORTNAME_OFFSET))(this, a1);
	}

	::System::UInt64 get_BundleShortNameHash()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_BUNDLESHORTNAMEHASH_OFFSET))(this);
	}

	::System::Void set_BundleShortNameHash(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_BUNDLESHORTNAMEHASH_OFFSET))(this, a1);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2C4CACFCB85F415D(::Class_1_C2DC5C7E8F1DFA59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C2DC5C7E8F1DFA59*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_2C4CACFCB85F415D_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_SET_RELATIVEPATH_OFFSET))(this, a1);
	}

	::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_07BF3EF95ADEC810_OFFSET))(this, a1);
	}

	static ::Class_1_C2DC5C7E8F1DFA59* Method_1_35F10ABABB5898C9(::System::String* a1)
	{
		return ((::Class_1_C2DC5C7E8F1DFA59*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_35F10ABABB5898C9_OFFSET))(a1);
	}

	::SimpleJSON::JSONClass* Method_1_B9CAA2E84691ECE8()
	{
		return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_B9CAA2E84691ECE8_OFFSET))(this);
	}

	::System::Void Method_1_1160672A4B923679(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_1160672A4B923679_OFFSET))(this, a1);
	}

	::System::Void Method_1_620AA33E89FAD3FE(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_METHOD_1_620AA33E89FAD3FE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2DC5C7E8F1DFA59_TOSTRING_OFFSET))(this);
	}
};
