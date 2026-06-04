#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_1_0D2F9EE261815B73;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
namespace System { class String; }

#define CLASS_2_E79E880629DFB64D_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA76F360)
#define CLASS_2_E79E880629DFB64D_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA76F020)
#define CLASS_2_E79E880629DFB64D_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA76F130)
#define CLASS_2_E79E880629DFB64D_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xA76F0F0)
#define CLASS_2_E79E880629DFB64D_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA76F0E0)
#define CLASS_2_E79E880629DFB64D_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xA76F0D0)
#define CLASS_2_E79E880629DFB64D_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xA76F070)
#define CLASS_2_E79E880629DFB64D_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xA76F170)
#define CLASS_2_E79E880629DFB64D_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xA76F0A0)
#define CLASS_2_E79E880629DFB64D_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xA76F510)
#define CLASS_2_E79E880629DFB64D_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xA76F180)
#define CLASS_2_E79E880629DFB64D__CTOR_OFFSET UNITYSDK_OFFSET(0xA76F190)
#define CLASS_2_E79E880629DFB64D__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xA76F310)
#define CLASS_2_E79E880629DFB64D___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA76F580)

inline static constexpr unsigned int Class_2_E79E880629DFB64D_TypeDefinitionIndex = 55587;

class Class_2_E79E880629DFB64D : public ::RPG::Client::AbsDownloadData_1<::Class_1_0D2F9EE261815B73*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_0D2F9EE261815B73* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_0D2F9EE261815B73*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_E79E880629DFB64D___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}
};
