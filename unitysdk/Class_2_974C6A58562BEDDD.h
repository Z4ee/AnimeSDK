#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_69;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_99337DDD16B17366;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_974C6A58562BEDDD_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x99E41D0)
#define CLASS_2_974C6A58562BEDDD_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x99E3FB0)
#define CLASS_2_974C6A58562BEDDD_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x99E3B90)
#define CLASS_2_974C6A58562BEDDD_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x99E3C10)
#define CLASS_2_974C6A58562BEDDD_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x99E3D80)
#define CLASS_2_974C6A58562BEDDD_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x99E3D70)
#define CLASS_2_974C6A58562BEDDD_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x99E3D60)
#define CLASS_2_974C6A58562BEDDD_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x99E3D50)
#define CLASS_2_974C6A58562BEDDD_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x99E3BE0)
#define CLASS_2_974C6A58562BEDDD_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x99E3D90)
#define CLASS_2_974C6A58562BEDDD_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x99E3D20)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0x99E3DB0)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_346F1B59FFBBF26A_OFFSET UNITYSDK_OFFSET(0x99E43E0)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_4DF4D9162AD406FC_OFFSET UNITYSDK_OFFSET(0x99E4270)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0x99E3E80)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_A27577C98E9715A0_OFFSET UNITYSDK_OFFSET(0x99E4690)
#define CLASS_2_974C6A58562BEDDD_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x99E4600)
#define CLASS_2_974C6A58562BEDDD_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x99E48D0)
#define CLASS_2_974C6A58562BEDDD_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x99E4350)
#define CLASS_2_974C6A58562BEDDD_RESET_OFFSET UNITYSDK_OFFSET(0x99E4100)
#define CLASS_2_974C6A58562BEDDD_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x99E3DA0)
#define CLASS_2_974C6A58562BEDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x99E49D0)
#define CLASS_2_974C6A58562BEDDD__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x99E3F60)
#define CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x99E4AF0)
#define CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x99E4A10)
#define CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x99E4A00)
#define CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x99E4B90)
#define CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x99E4A20)

inline static constexpr unsigned int Class_2_974C6A58562BEDDD_TypeDefinitionIndex = 48124;

class Class_2_974C6A58562BEDDD : public ::RPG::Client::AbsDownloadData_1<::Class_1_99337DDD16B17366*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_SET_ISENABLE_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_99337DDD16B17366* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_99337DDD16B17366*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_4DF4D9162AD406FC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_4DF4D9162AD406FC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_346F1B59FFBBF26A()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_346F1B59FFBBF26A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A27577C98E9715A0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_METHOD_2_A27577C98E9715A0_OFFSET))(this, a1, a2);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_RESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
