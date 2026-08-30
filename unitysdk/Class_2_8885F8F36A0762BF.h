#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_1_BF84C282A637A074;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8885F8F36A0762BF_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x169E07D0)
#define CLASS_2_8885F8F36A0762BF_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x169E0850)
#define CLASS_2_8885F8F36A0762BF_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x169E0940)
#define CLASS_2_8885F8F36A0762BF_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x169E0930)
#define CLASS_2_8885F8F36A0762BF_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x169E0920)
#define CLASS_2_8885F8F36A0762BF_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x169E0910)
#define CLASS_2_8885F8F36A0762BF_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x169E0820)
#define CLASS_2_8885F8F36A0762BF_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x169E0950)
#define CLASS_2_8885F8F36A0762BF_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x169E08E0)
#define CLASS_2_8885F8F36A0762BF_METHOD_2_607DC1108DED7773_OFFSET UNITYSDK_OFFSET(0x169E09C0)
#define CLASS_2_8885F8F36A0762BF_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x169E0C30)
#define CLASS_2_8885F8F36A0762BF_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x169E0CC0)
#define CLASS_2_8885F8F36A0762BF_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x169E0BA0)
#define CLASS_2_8885F8F36A0762BF_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x169E0960)
#define CLASS_2_8885F8F36A0762BF__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0D10)
#define CLASS_2_8885F8F36A0762BF__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x169E0970)

inline static constexpr unsigned int Class_2_8885F8F36A0762BF_TypeDefinitionIndex = 59618;

class Class_2_8885F8F36A0762BF : public ::RPG::Client::AbsDownloadData_1<::Class_1_BF84C282A637A074*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_BF84C282A637A074* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_BF84C282A637A074*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_607DC1108DED7773()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_METHOD_2_607DC1108DED7773_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_ONALLSUCCEED_OFFSET))(this);
	}
};
