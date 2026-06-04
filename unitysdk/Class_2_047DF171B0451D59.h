#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_579;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_2_F9BA0CA41E0BB88E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_047DF171B0451D59_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA8948D0)
#define CLASS_2_047DF171B0451D59_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA8945D0)
#define CLASS_2_047DF171B0451D59_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA8946B0)
#define CLASS_2_047DF171B0451D59_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xA8946A0)
#define CLASS_2_047DF171B0451D59_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA894690)
#define CLASS_2_047DF171B0451D59_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xA894680)
#define CLASS_2_047DF171B0451D59_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xA894620)
#define CLASS_2_047DF171B0451D59_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xA8946C0)
#define CLASS_2_047DF171B0451D59_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xA894650)
#define CLASS_2_047DF171B0451D59_METHOD_2_B248AA2483A0E270_OFFSET UNITYSDK_OFFSET(0xA894B20)
#define CLASS_2_047DF171B0451D59_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA894CF0)
#define CLASS_2_047DF171B0451D59_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xA894A40)
#define CLASS_2_047DF171B0451D59_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xA894AD0)
#define CLASS_2_047DF171B0451D59_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xA8946D0)
#define CLASS_2_047DF171B0451D59__CTOR_OFFSET UNITYSDK_OFFSET(0xA8946E0)
#define CLASS_2_047DF171B0451D59__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xA8947C0)
#define CLASS_2_047DF171B0451D59___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xA894D90)

inline static constexpr unsigned int Class_2_047DF171B0451D59_TypeDefinitionIndex = 55588;

class Class_2_047DF171B0451D59 : public ::RPG::Client::AbsDownloadData_1<::Class_2_F9BA0CA41E0BB88E*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_2_F9BA0CA41E0BB88E* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_2_F9BA0CA41E0BB88E*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Void Method_2_B248AA2483A0E270(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_METHOD_2_B248AA2483A0E270_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_047DF171B0451D59___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}
};
