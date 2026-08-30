#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_95;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }

#define CLASS_2_F19F72026F65F4CD_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBF609E0)
#define CLASS_2_F19F72026F65F4CD_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBF607C0)
#define CLASS_2_F19F72026F65F4CD_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBF60840)
#define CLASS_2_F19F72026F65F4CD_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBF60930)
#define CLASS_2_F19F72026F65F4CD_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBF60920)
#define CLASS_2_F19F72026F65F4CD_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBF60910)
#define CLASS_2_F19F72026F65F4CD_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBF60900)
#define CLASS_2_F19F72026F65F4CD_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBF60810)
#define CLASS_2_F19F72026F65F4CD_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBF60940)
#define CLASS_2_F19F72026F65F4CD_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBF608D0)
#define CLASS_2_F19F72026F65F4CD_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBF60B60)
#define CLASS_2_F19F72026F65F4CD_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBF60950)
#define CLASS_2_F19F72026F65F4CD__CTOR_OFFSET UNITYSDK_OFFSET(0xBF60BC0)
#define CLASS_2_F19F72026F65F4CD__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBF60960)

inline static constexpr unsigned int Class_2_F19F72026F65F4CD_TypeDefinitionIndex = 59622;

class Class_2_F19F72026F65F4CD : public ::RPG::Client::AbsDownloadData_1<::Class_0_16E4307DCC419505_95*>
{
public:
	// static const ::System::String* MHFEDJMCMMC; // 0x0
	::System::Boolean PGGLMENELHH; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_95* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F19F72026F65F4CD_ONALLSUCCEED_OFFSET))(this);
	}
};
