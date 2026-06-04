#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_68;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_CC72D2EA6D10D002;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_3B9018CA38E7C0D5_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1352CF90)
#define CLASS_2_3B9018CA38E7C0D5_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1352CDF0)
#define CLASS_2_3B9018CA38E7C0D5_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1352CED0)
#define CLASS_2_3B9018CA38E7C0D5_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1352CEC0)
#define CLASS_2_3B9018CA38E7C0D5_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1352CEB0)
#define CLASS_2_3B9018CA38E7C0D5_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1352CEA0)
#define CLASS_2_3B9018CA38E7C0D5_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1352CE40)
#define CLASS_2_3B9018CA38E7C0D5_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1352CEE0)
#define CLASS_2_3B9018CA38E7C0D5_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1352CE70)
#define CLASS_2_3B9018CA38E7C0D5_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x1352D180)
#define CLASS_2_3B9018CA38E7C0D5_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x1352D210)
#define CLASS_2_3B9018CA38E7C0D5_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x1352D0F0)
#define CLASS_2_3B9018CA38E7C0D5_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1352CEF0)
#define CLASS_2_3B9018CA38E7C0D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1352D260)
#define CLASS_2_3B9018CA38E7C0D5__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1352CF00)
#define CLASS_2_3B9018CA38E7C0D5___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1352D290)
#define CLASS_2_3B9018CA38E7C0D5___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x1352D2A0)

inline static constexpr unsigned int Class_2_3B9018CA38E7C0D5_TypeDefinitionIndex = 55590;

class Class_2_3B9018CA38E7C0D5 : public ::RPG::Client::AbsDownloadData_1<::Class_1_CC72D2EA6D10D002*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_CC72D2EA6D10D002* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_CC72D2EA6D10D002*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B9018CA38E7C0D5___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
