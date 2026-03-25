#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_D39A50E5DCA95A6D;
namespace System { class String; }

#define CLASS_2_DBB52CC7D0865A76_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x10BFF600)
#define CLASS_2_DBB52CC7D0865A76_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10BFF2C0)
#define CLASS_2_DBB52CC7D0865A76_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x10BFF3D0)
#define CLASS_2_DBB52CC7D0865A76_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x10BFF390)
#define CLASS_2_DBB52CC7D0865A76_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x10BFF380)
#define CLASS_2_DBB52CC7D0865A76_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x10BFF370)
#define CLASS_2_DBB52CC7D0865A76_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x10BFF310)
#define CLASS_2_DBB52CC7D0865A76_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x10BFF410)
#define CLASS_2_DBB52CC7D0865A76_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x10BFF340)
#define CLASS_2_DBB52CC7D0865A76_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x10BFF7B0)
#define CLASS_2_DBB52CC7D0865A76_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x10BFF420)
#define CLASS_2_DBB52CC7D0865A76__CTOR_OFFSET UNITYSDK_OFFSET(0x10BFF430)
#define CLASS_2_DBB52CC7D0865A76__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x10BFF5B0)
#define CLASS_2_DBB52CC7D0865A76___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x10BFF820)

inline static constexpr unsigned int Class_2_DBB52CC7D0865A76_TypeDefinitionIndex = 48113;

class Class_2_DBB52CC7D0865A76 : public ::RPG::Client::AbsDownloadData_1<::Class_1_D39A50E5DCA95A6D*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_1_D39A50E5DCA95A6D* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_D39A50E5DCA95A6D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_DBB52CC7D0865A76___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}
};
