#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_68;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_BF84C282A637A074;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_2A1BB8EAC9D2CDE7_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xAC74130)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAC741B0)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAC74320)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAC74310)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAC74300)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAC742F0)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAC74180)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAC74330)
#define CLASS_2_2A1BB8EAC9D2CDE7_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xAC742C0)
#define CLASS_2_2A1BB8EAC9D2CDE7_METHOD_2_03DB9286A30DEC00_OFFSET UNITYSDK_OFFSET(0xAC743A0)
#define CLASS_2_2A1BB8EAC9D2CDE7_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xAC745F0)
#define CLASS_2_2A1BB8EAC9D2CDE7_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xAC74680)
#define CLASS_2_2A1BB8EAC9D2CDE7_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAC74560)
#define CLASS_2_2A1BB8EAC9D2CDE7_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAC74340)
#define CLASS_2_2A1BB8EAC9D2CDE7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC746D0)
#define CLASS_2_2A1BB8EAC9D2CDE7__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xAC74350)
#define CLASS_2_2A1BB8EAC9D2CDE7___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAC74700)
#define CLASS_2_2A1BB8EAC9D2CDE7___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xAC74710)

inline static constexpr unsigned int Class_2_2A1BB8EAC9D2CDE7_TypeDefinitionIndex = 55593;

class Class_2_2A1BB8EAC9D2CDE7 : public ::RPG::Client::AbsDownloadData_1<::Class_1_BF84C282A637A074*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_BF84C282A637A074* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_BF84C282A637A074*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_03DB9286A30DEC00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_METHOD_2_03DB9286A30DEC00_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1BB8EAC9D2CDE7___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
