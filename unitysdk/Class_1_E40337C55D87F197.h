#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_616;
class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }

#define CLASS_1_E40337C55D87F197_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x140DE6F0)
#define CLASS_1_E40337C55D87F197_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x140DE670)
#define CLASS_1_E40337C55D87F197_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x140DE6B0)
#define CLASS_1_E40337C55D87F197_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x140DE7D0)
#define CLASS_1_E40337C55D87F197_ISPATCH_OFFSET UNITYSDK_OFFSET(0x140DE790)
#define CLASS_1_E40337C55D87F197_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x140DE750)
#define CLASS_1_E40337C55D87F197_METHOD_1_BA4FBDBA106E7125_OFFSET UNITYSDK_OFFSET(0x140DE980)
#define CLASS_1_E40337C55D87F197_METHOD_1_BF26327FD1114250_OFFSET UNITYSDK_OFFSET(0x140DEBC0)
#define CLASS_1_E40337C55D87F197_METHOD_1_D0C27DAEEA53EF0D_OFFSET UNITYSDK_OFFSET(0x140DED50)
#define CLASS_1_E40337C55D87F197_METHOD_1_D8877F3F2CDAE711_OFFSET UNITYSDK_OFFSET(0x140DE8D0)
#define CLASS_1_E40337C55D87F197_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140DE810)
#define CLASS_1_E40337C55D87F197__CTOR_OFFSET UNITYSDK_OFFSET(0x140DEF50)

inline static constexpr unsigned int Class_1_E40337C55D87F197_TypeDefinitionIndex = 56936;

class Class_1_E40337C55D87F197 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_87* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_616* Field_1_1; // 0x18
	::Class_1_945ACFB1FEBC7A2C_25* Field_1_2; // 0x20
	::Class_1_1DFA6DC6E14150AA* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
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
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197__CTOR_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_D8877F3F2CDAE711()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_METHOD_1_D8877F3F2CDAE711_OFFSET))(this);
	}

	::System::String* Method_1_BA4FBDBA106E7125()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_METHOD_1_BA4FBDBA106E7125_OFFSET))(this);
	}

	::System::String* Method_1_BF26327FD1114250()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_METHOD_1_BF26327FD1114250_OFFSET))(this);
	}

	::System::String* Method_1_D0C27DAEEA53EF0D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E40337C55D87F197_METHOD_1_D0C27DAEEA53EF0D_OFFSET))(this);
	}
};
