#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_69;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_6F595FF5AAEEBFFD;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_1839CBD9000EAF30_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x8D38FD0)
#define CLASS_2_1839CBD9000EAF30_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x8D39050)
#define CLASS_2_1839CBD9000EAF30_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x8D391C0)
#define CLASS_2_1839CBD9000EAF30_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x8D391B0)
#define CLASS_2_1839CBD9000EAF30_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x8D391A0)
#define CLASS_2_1839CBD9000EAF30_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x8D39190)
#define CLASS_2_1839CBD9000EAF30_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x8D39020)
#define CLASS_2_1839CBD9000EAF30_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x8D391D0)
#define CLASS_2_1839CBD9000EAF30_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x8D39160)
#define CLASS_2_1839CBD9000EAF30_METHOD_2_03DB9286A30DEC00_OFFSET UNITYSDK_OFFSET(0x8D39240)
#define CLASS_2_1839CBD9000EAF30_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x8D39490)
#define CLASS_2_1839CBD9000EAF30_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x8D39520)
#define CLASS_2_1839CBD9000EAF30_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x8D39400)
#define CLASS_2_1839CBD9000EAF30_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x8D391E0)
#define CLASS_2_1839CBD9000EAF30__CTOR_OFFSET UNITYSDK_OFFSET(0x8D39570)
#define CLASS_2_1839CBD9000EAF30__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x8D391F0)
#define CLASS_2_1839CBD9000EAF30___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x8D395A0)
#define CLASS_2_1839CBD9000EAF30___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x8D395B0)

inline static constexpr unsigned int Class_2_1839CBD9000EAF30_TypeDefinitionIndex = 48119;

class Class_2_1839CBD9000EAF30 : public ::RPG::Client::AbsDownloadData_1<::Class_1_6F595FF5AAEEBFFD*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_1_6F595FF5AAEEBFFD* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_6F595FF5AAEEBFFD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_03DB9286A30DEC00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_METHOD_2_03DB9286A30DEC00_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1839CBD9000EAF30___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
