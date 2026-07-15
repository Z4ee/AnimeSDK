#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_1_CC72D2EA6D10D002;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_DC042F267E3C3753_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x16884710)
#define CLASS_2_DC042F267E3C3753_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x16884550)
#define CLASS_2_DC042F267E3C3753_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x16884650)
#define CLASS_2_DC042F267E3C3753_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x16884640)
#define CLASS_2_DC042F267E3C3753_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x16884630)
#define CLASS_2_DC042F267E3C3753_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x16884620)
#define CLASS_2_DC042F267E3C3753_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x168845C0)
#define CLASS_2_DC042F267E3C3753_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x16884660)
#define CLASS_2_DC042F267E3C3753_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x168845F0)
#define CLASS_2_DC042F267E3C3753_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x168848A0)
#define CLASS_2_DC042F267E3C3753_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x16884930)
#define CLASS_2_DC042F267E3C3753_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x16884810)
#define CLASS_2_DC042F267E3C3753_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x16884670)
#define CLASS_2_DC042F267E3C3753__CTOR_OFFSET UNITYSDK_OFFSET(0x16884980)
#define CLASS_2_DC042F267E3C3753__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x16884680)

inline static constexpr unsigned int Class_2_DC042F267E3C3753_TypeDefinitionIndex = 56827;

class Class_2_DC042F267E3C3753 : public ::RPG::Client::AbsDownloadData_1<::Class_1_CC72D2EA6D10D002*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_CC72D2EA6D10D002* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_CC72D2EA6D10D002*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC042F267E3C3753_ONALLSUCCEED_OFFSET))(this);
	}
};
