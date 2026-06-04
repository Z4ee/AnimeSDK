#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3487C21D96C73186_DownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_68;
class Class_1_1E6CA2B210971DAB;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_BA5CA9DD1236A9EC;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_3487C21D96C73186_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xAB76AD0)
#define CLASS_2_3487C21D96C73186_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB76C50)
#define CLASS_2_3487C21D96C73186_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xAB760F0)
#define CLASS_2_3487C21D96C73186_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB76190)
#define CLASS_2_3487C21D96C73186_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB763B0)
#define CLASS_2_3487C21D96C73186_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAB763A0)
#define CLASS_2_3487C21D96C73186_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB76390)
#define CLASS_2_3487C21D96C73186_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAB76380)
#define CLASS_2_3487C21D96C73186_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB76180)
#define CLASS_2_3487C21D96C73186_GET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xAB76550)
#define CLASS_2_3487C21D96C73186_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAB76570)
#define CLASS_2_3487C21D96C73186_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xAB76350)
#define CLASS_2_3487C21D96C73186_METHOD_2_06B1AE424D965250_OFFSET UNITYSDK_OFFSET(0xAB763D0)
#define CLASS_2_3487C21D96C73186_METHOD_2_07A392F640AE50B9_OFFSET UNITYSDK_OFFSET(0xAB76DF0)
#define CLASS_2_3487C21D96C73186_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xAB76590)
#define CLASS_2_3487C21D96C73186_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0xAB76600)
#define CLASS_2_3487C21D96C73186_METHOD_2_346F1B59FFBBF26A_OFFSET UNITYSDK_OFFSET(0xAB773E0)
#define CLASS_2_3487C21D96C73186_METHOD_2_5FC44A4D5E45027B_OFFSET UNITYSDK_OFFSET(0xAB763C0)
#define CLASS_2_3487C21D96C73186_METHOD_2_69485D89E30086C4_OFFSET UNITYSDK_OFFSET(0xAB76F20)
#define CLASS_2_3487C21D96C73186_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0xAB766E0)
#define CLASS_2_3487C21D96C73186_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xAB765A0)
#define CLASS_2_3487C21D96C73186_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0xAB76BC0)
#define CLASS_2_3487C21D96C73186_METHOD_2_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0xAB76280)
#define CLASS_2_3487C21D96C73186_METHOD_2_E714360D333E21E2_OFFSET UNITYSDK_OFFSET(0xAB76B40)
#define CLASS_2_3487C21D96C73186_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xAB77620)
#define CLASS_2_3487C21D96C73186_METHOD_2_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0xAB772B0)
#define CLASS_2_3487C21D96C73186_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xAB776B0)
#define CLASS_2_3487C21D96C73186_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAB76810)
#define CLASS_2_3487C21D96C73186_RESET_OFFSET UNITYSDK_OFFSET(0xAB76A30)
#define CLASS_2_3487C21D96C73186_SET_FORCEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xAB76560)
#define CLASS_2_3487C21D96C73186_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAB76580)
#define CLASS_2_3487C21D96C73186__CTOR_OFFSET UNITYSDK_OFFSET(0xAB768A0)
#define CLASS_2_3487C21D96C73186__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xAB767C0)
#define CLASS_2_3487C21D96C73186___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xAB77970)
#define CLASS_2_3487C21D96C73186___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB779E0)
#define CLASS_2_3487C21D96C73186___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB77770)
#define CLASS_2_3487C21D96C73186___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAB77860)
#define CLASS_2_3487C21D96C73186___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xAB778D0)

inline static constexpr unsigned int Class_2_3487C21D96C73186_TypeDefinitionIndex = 55575;

class Class_2_3487C21D96C73186 : public ::RPG::Client::AbsDownloadData_1<::Class_1_1E6CA2B210971DAB*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x78
	::Class_1_BA5CA9DD1236A9EC* Field_2_1; // 0x80
	::System::String* Field_2_2; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x90
	::Class_1_51C874EE455D4F2F* Field_2_4; // 0x98
	::System::Int64 Field_2_5; // 0xA0
	::System::Boolean _ForceDownload_k__BackingField; // 0xA8
	::System::Boolean _IsEnable_k__BackingField; // 0xA9
	::System::Boolean Field_2_8; // 0xAA
	::Class_2_3487C21D96C73186_DownloadType Field_2_9; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Void Method_2_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_D68E1CAE64731ECE_OFFSET))(this, a1);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::Class_2_3487C21D96C73186_DownloadType Method_2_5FC44A4D5E45027B()
	{
		return ((::Class_2_3487C21D96C73186_DownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_5FC44A4D5E45027B_OFFSET))(this);
	}

	::System::Void Method_2_06B1AE424D965250(::Class_2_3487C21D96C73186_DownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3487C21D96C73186_DownloadType))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_06B1AE424D965250_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceDownload()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_FORCEDOWNLOAD_OFFSET))(this);
	}

	::System::Void set_ForceDownload(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_SET_FORCEDOWNLOAD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_SET_ISENABLE_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_1E6CA2B210971DAB* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_1E6CA2B210971DAB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_E714360D333E21E2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_E714360D333E21E2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_07A392F640AE50B9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_07A392F640AE50B9_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_69485D89E30086C4(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_69485D89E30086C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_346F1B59FFBBF26A()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_346F1B59FFBBF26A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186___IFIXBASEPROXY_RESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3487C21D96C73186___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}
};
