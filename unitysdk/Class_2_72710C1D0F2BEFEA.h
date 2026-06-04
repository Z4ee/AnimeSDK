#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_68;
class Class_1_211A5BA20F9E6E38;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_72710C1D0F2BEFEA_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xAAD79E0)
#define CLASS_2_72710C1D0F2BEFEA_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAAD77F0)
#define CLASS_2_72710C1D0F2BEFEA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xAAD73D0)
#define CLASS_2_72710C1D0F2BEFEA_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAAD7450)
#define CLASS_2_72710C1D0F2BEFEA_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAAD75C0)
#define CLASS_2_72710C1D0F2BEFEA_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAAD75B0)
#define CLASS_2_72710C1D0F2BEFEA_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAAD75A0)
#define CLASS_2_72710C1D0F2BEFEA_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAAD7590)
#define CLASS_2_72710C1D0F2BEFEA_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAAD7420)
#define CLASS_2_72710C1D0F2BEFEA_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAAD75D0)
#define CLASS_2_72710C1D0F2BEFEA_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xAAD7560)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0xAAD75F0)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_4DF4D9162AD406FC_OFFSET UNITYSDK_OFFSET(0xAAD7A50)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_607DC1108DED7773_OFFSET UNITYSDK_OFFSET(0xAAD7B90)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0xAAD76C0)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_A27577C98E9715A0_OFFSET UNITYSDK_OFFSET(0xAAD7E20)
#define CLASS_2_72710C1D0F2BEFEA_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xAAD7D90)
#define CLASS_2_72710C1D0F2BEFEA_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xAAD8060)
#define CLASS_2_72710C1D0F2BEFEA_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAAD7B00)
#define CLASS_2_72710C1D0F2BEFEA_RESET_OFFSET UNITYSDK_OFFSET(0xAAD7940)
#define CLASS_2_72710C1D0F2BEFEA_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAAD75E0)
#define CLASS_2_72710C1D0F2BEFEA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD8160)
#define CLASS_2_72710C1D0F2BEFEA__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xAAD77A0)
#define CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xAAD8250)
#define CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAAD81A0)
#define CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAAD8190)
#define CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAAD82C0)
#define CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xAAD81B0)

inline static constexpr unsigned int Class_2_72710C1D0F2BEFEA_TypeDefinitionIndex = 55598;

class Class_2_72710C1D0F2BEFEA : public ::RPG::Client::AbsDownloadData_1<::Class_1_211A5BA20F9E6E38*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_SET_ISENABLE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_211A5BA20F9E6E38* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_211A5BA20F9E6E38*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_4DF4D9162AD406FC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_4DF4D9162AD406FC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_607DC1108DED7773()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_607DC1108DED7773_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A27577C98E9715A0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_METHOD_2_A27577C98E9715A0_OFFSET))(this, a1, a2);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_RESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72710C1D0F2BEFEA___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
