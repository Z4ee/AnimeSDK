#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_69;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_DC5AD2586C27D8E8;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_3C8C00F3F8D7A848_1_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x11AF0370)
#define CLASS_2_3C8C00F3F8D7A848_1_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x11AF01B0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x11AF02B0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x11AF02A0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x11AF0290)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x11AF0280)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x11AF0220)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x11AF02C0)
#define CLASS_2_3C8C00F3F8D7A848_1_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x11AF0250)
#define CLASS_2_3C8C00F3F8D7A848_1_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x11AF0560)
#define CLASS_2_3C8C00F3F8D7A848_1_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x11AF05F0)
#define CLASS_2_3C8C00F3F8D7A848_1_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x11AF04D0)
#define CLASS_2_3C8C00F3F8D7A848_1_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x11AF02D0)
#define CLASS_2_3C8C00F3F8D7A848_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF0640)
#define CLASS_2_3C8C00F3F8D7A848_1__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x11AF02E0)
#define CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x11AF0670)
#define CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x11AF0680)

inline static constexpr unsigned int Class_2_3C8C00F3F8D7A848_1_TypeDefinitionIndex = 54861;

class Class_2_3C8C00F3F8D7A848_1 : public ::RPG::Client::AbsDownloadData_1<::Class_1_DC5AD2586C27D8E8*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_1_DC5AD2586C27D8E8* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_DC5AD2586C27D8E8*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_1___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
