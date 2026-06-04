#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_76;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_2_284A19013466AED1_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB84820)
#define CLASS_2_284A19013466AED1_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xAB84580)
#define CLASS_2_284A19013466AED1_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB84600)
#define CLASS_2_284A19013466AED1_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB84770)
#define CLASS_2_284A19013466AED1_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAB84760)
#define CLASS_2_284A19013466AED1_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB84750)
#define CLASS_2_284A19013466AED1_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xAB84740)
#define CLASS_2_284A19013466AED1_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB845D0)
#define CLASS_2_284A19013466AED1_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAB84780)
#define CLASS_2_284A19013466AED1_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xAB84710)
#define CLASS_2_284A19013466AED1_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xAB849D0)
#define CLASS_2_284A19013466AED1_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xAB84790)
#define CLASS_2_284A19013466AED1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB84A30)
#define CLASS_2_284A19013466AED1__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xAB847A0)
#define CLASS_2_284A19013466AED1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xAB84A70)
#define CLASS_2_284A19013466AED1___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xAB84A60)

inline static constexpr unsigned int Class_2_284A19013466AED1_TypeDefinitionIndex = 55597;

class Class_2_284A19013466AED1 : public ::RPG::Client::AbsDownloadData_1<::Class_0_16E4307DCC419505_76*>
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Boolean Field_2_1; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_76* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_76*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1_ONALLSUCCEED_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* __iFixBaseProxy_get_BaseAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1___IFIXBASEPROXY_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_284A19013466AED1___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}
};
