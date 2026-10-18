#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D2387066E2BACFE_DownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_24;
class Class_1_A8362FE49554154A;
class Class_1_F077E55B6446752D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_5D2387066E2BACFE_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xBE2D530)
#define CLASS_2_5D2387066E2BACFE_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2D6C0)
#define CLASS_2_5D2387066E2BACFE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBE2CB30)
#define CLASS_2_5D2387066E2BACFE_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CC30)
#define CLASS_2_5D2387066E2BACFE_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDD0)
#define CLASS_2_5D2387066E2BACFE_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDC0)
#define CLASS_2_5D2387066E2BACFE_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDB0)
#define CLASS_2_5D2387066E2BACFE_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBE2CDA0)
#define CLASS_2_5D2387066E2BACFE_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CC20)
#define CLASS_2_5D2387066E2BACFE_GET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xBE2CF80)
#define CLASS_2_5D2387066E2BACFE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE2CFA0)
#define CLASS_2_5D2387066E2BACFE_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBE2CD70)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_06B1AE424D965250_OFFSET UNITYSDK_OFFSET(0xBE2CDF0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xBE2CFC0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0xBE2D030)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_2A338BBA3AB0F77E_OFFSET UNITYSDK_OFFSET(0xBE2DDD0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_5FC44A4D5E45027B_OFFSET UNITYSDK_OFFSET(0xBE2CDE0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0xBE2D100)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_81C59C0D247402DE_OFFSET UNITYSDK_OFFSET(0xBE2D920)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_8E8B2850F3E2F75A_OFFSET UNITYSDK_OFFSET(0xBE2D7F0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xBE2CFD0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0xBE2D630)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0xBE2CCA0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_E714360D333E21E2_OFFSET UNITYSDK_OFFSET(0xBE2D5B0)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xBE2E030)
#define CLASS_2_5D2387066E2BACFE_METHOD_2_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0xBE2DCF0)
#define CLASS_2_5D2387066E2BACFE_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE2E0C0)
#define CLASS_2_5D2387066E2BACFE_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xBE2D230)
#define CLASS_2_5D2387066E2BACFE_RESET_OFFSET UNITYSDK_OFFSET(0xBE2D490)
#define CLASS_2_5D2387066E2BACFE_SET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xBE2CF90)
#define CLASS_2_5D2387066E2BACFE_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBE2CFB0)
#define CLASS_2_5D2387066E2BACFE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2D2C0)
#define CLASS_2_5D2387066E2BACFE__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBE2D1E0)

inline static constexpr unsigned int Class_2_5D2387066E2BACFE_TypeDefinitionIndex = 59455;

class Class_2_5D2387066E2BACFE : public ::RPG::Client::AbsDownloadData_1<::Class_1_F077E55B6446752D*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* PMBBODCDDFE; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* OPOIKENIKON; // 0x80
	::Class_1_A8362FE49554154A* HALKKPCOLGM; // 0x88
	::System::String* ALAKHHHOMDO; // 0x90
	::Class_1_1DFA6DC6E14150AA* IAJHKEAAIAH; // 0x98
	::System::Int64 KOBICGMNELO; // 0xA0
	::System::Boolean _ForceDownload_k__BackingField; // 0xA8
	::System::Boolean _IsEnable_k__BackingField; // 0xA9
	::System::Boolean PPPPLDEDOLB; // 0xAA
	::Class_2_5D2387066E2BACFE_DownloadType ANPNIOLDGAO; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Void Method_2_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_D68E1CAE64731ECE_OFFSET))(this, a1);
	}

	::Class_1_945ACFB1FEBC7A2C_24* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::Class_2_5D2387066E2BACFE_DownloadType Method_2_5FC44A4D5E45027B()
	{
		return ((::Class_2_5D2387066E2BACFE_DownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_5FC44A4D5E45027B_OFFSET))(this);
	}

	::System::Void Method_2_06B1AE424D965250(::Class_2_5D2387066E2BACFE_DownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D2387066E2BACFE_DownloadType))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_06B1AE424D965250_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceDownload()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_FORCEDOWNLOAD_OFFSET))(this);
	}

	::System::Void set_ForceDownload(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_SET_FORCEDOWNLOAD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_SET_ISENABLE_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_F077E55B6446752D* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_F077E55B6446752D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_E714360D333E21E2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_E714360D333E21E2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_8E8B2850F3E2F75A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_8E8B2850F3E2F75A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_81C59C0D247402DE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_81C59C0D247402DE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_2A338BBA3AB0F77E()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_2A338BBA3AB0F77E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2387066E2BACFE_ONALLSUCCEED_OFFSET))(this);
	}
};
