#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_95;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_2_F19F72026F65F4CD;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_7B2C949E9A2AA065_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1603AF70)
#define CLASS_2_7B2C949E9A2AA065_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1603AFF0)
#define CLASS_2_7B2C949E9A2AA065_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1603B0E0)
#define CLASS_2_7B2C949E9A2AA065_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1603B0D0)
#define CLASS_2_7B2C949E9A2AA065_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x1603B0C0)
#define CLASS_2_7B2C949E9A2AA065_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1603B0B0)
#define CLASS_2_7B2C949E9A2AA065_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1603AFC0)
#define CLASS_2_7B2C949E9A2AA065_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1603B0F0)
#define CLASS_2_7B2C949E9A2AA065_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1603B080)
#define CLASS_2_7B2C949E9A2AA065_METHOD_2_607DC1108DED7773_OFFSET UNITYSDK_OFFSET(0x1603B190)
#define CLASS_2_7B2C949E9A2AA065_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x1603B370)
#define CLASS_2_7B2C949E9A2AA065_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x1603B400)
#define CLASS_2_7B2C949E9A2AA065_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1603B100)
#define CLASS_2_7B2C949E9A2AA065__CTOR_OFFSET UNITYSDK_OFFSET(0x1603B460)
#define CLASS_2_7B2C949E9A2AA065__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1603B110)

inline static constexpr unsigned int Class_2_7B2C949E9A2AA065_TypeDefinitionIndex = 59605;

class Class_2_7B2C949E9A2AA065 : public ::RPG::Client::AbsDownloadData_1<::Class_0_16E4307DCC419505_95*>
{
public:
	// static const ::System::String* MHFEDJMCMMC; // 0x0
	::Class_2_F19F72026F65F4CD* MNMGKCNJJMO; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_95* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_607DC1108DED7773()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_METHOD_2_607DC1108DED7773_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065_ONALLSUCCEED_OFFSET))(this);
	}
};
