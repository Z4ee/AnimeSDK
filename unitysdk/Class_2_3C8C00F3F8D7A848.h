#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_E294B4E462D36A1B;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_3C8C00F3F8D7A848_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x123AFF10)
#define CLASS_2_3C8C00F3F8D7A848_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x123AFD30)
#define CLASS_2_3C8C00F3F8D7A848_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x123AFE10)
#define CLASS_2_3C8C00F3F8D7A848_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x123AFE00)
#define CLASS_2_3C8C00F3F8D7A848_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x123AFDF0)
#define CLASS_2_3C8C00F3F8D7A848_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x123AFDE0)
#define CLASS_2_3C8C00F3F8D7A848_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x123AFD80)
#define CLASS_2_3C8C00F3F8D7A848_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x123AFE20)
#define CLASS_2_3C8C00F3F8D7A848_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x123AFDB0)
#define CLASS_2_3C8C00F3F8D7A848_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x123B0070)
#define CLASS_2_3C8C00F3F8D7A848_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x123B0100)
#define CLASS_2_3C8C00F3F8D7A848_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x123AFE30)
#define CLASS_2_3C8C00F3F8D7A848__CTOR_OFFSET UNITYSDK_OFFSET(0x123B0150)
#define CLASS_2_3C8C00F3F8D7A848__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x123AFE40)
#define CLASS_2_3C8C00F3F8D7A848___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x123B0180)

inline static constexpr unsigned int Class_2_3C8C00F3F8D7A848_TypeDefinitionIndex = 54856;

class Class_2_3C8C00F3F8D7A848 : public ::RPG::Client::AbsDownloadData_1<::Class_1_E294B4E462D36A1B*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_SET_ISENABLE_OFFSET))(this, value);
	}

	::Class_1_E294B4E462D36A1B* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_E294B4E462D36A1B*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& P0, ::RPG::Client::ByteHash16& P1, ::System::Int64& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, P0, P1, P2);
	}
};
