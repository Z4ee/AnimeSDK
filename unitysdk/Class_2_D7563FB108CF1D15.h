#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_650;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_2_F9BA0CA41E0BB88E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_D7563FB108CF1D15_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x15C8E710)
#define CLASS_2_D7563FB108CF1D15_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15C8E400)
#define CLASS_2_D7563FB108CF1D15_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x15C8E4E0)
#define CLASS_2_D7563FB108CF1D15_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x15C8E4D0)
#define CLASS_2_D7563FB108CF1D15_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x15C8E4C0)
#define CLASS_2_D7563FB108CF1D15_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x15C8E4B0)
#define CLASS_2_D7563FB108CF1D15_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x15C8E450)
#define CLASS_2_D7563FB108CF1D15_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15C8E4F0)
#define CLASS_2_D7563FB108CF1D15_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x15C8E480)
#define CLASS_2_D7563FB108CF1D15_METHOD_2_A5FB11C82FC95330_OFFSET UNITYSDK_OFFSET(0x15C8E8D0)
#define CLASS_2_D7563FB108CF1D15_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x15C8EAA0)
#define CLASS_2_D7563FB108CF1D15_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x15C8E7F0)
#define CLASS_2_D7563FB108CF1D15_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x15C8E880)
#define CLASS_2_D7563FB108CF1D15_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x15C8E500)
#define CLASS_2_D7563FB108CF1D15__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8E510)
#define CLASS_2_D7563FB108CF1D15__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x15C8E600)

inline static constexpr unsigned int Class_2_D7563FB108CF1D15_TypeDefinitionIndex = 59613;

class Class_2_D7563FB108CF1D15 : public ::RPG::Client::AbsDownloadData_1<::Class_2_F9BA0CA41E0BB88E*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_2_F9BA0CA41E0BB88E* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_2_F9BA0CA41E0BB88E*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Void Method_2_A5FB11C82FC95330(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_METHOD_2_A5FB11C82FC95330_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7563FB108CF1D15_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}
};
