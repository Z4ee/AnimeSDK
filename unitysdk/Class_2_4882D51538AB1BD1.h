#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_211A5BA20F9E6E38;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_4882D51538AB1BD1_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0x18380720)
#define CLASS_2_4882D51538AB1BD1_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x183805A0)
#define CLASS_2_4882D51538AB1BD1_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18380200)
#define CLASS_2_4882D51538AB1BD1_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x18380280)
#define CLASS_2_4882D51538AB1BD1_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x18380370)
#define CLASS_2_4882D51538AB1BD1_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x18380360)
#define CLASS_2_4882D51538AB1BD1_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0x18380350)
#define CLASS_2_4882D51538AB1BD1_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x18380340)
#define CLASS_2_4882D51538AB1BD1_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x18380250)
#define CLASS_2_4882D51538AB1BD1_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x18380380)
#define CLASS_2_4882D51538AB1BD1_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x18380310)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_1F55D6FEF27052D4_OFFSET UNITYSDK_OFFSET(0x183803A0)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_346F1B59FFBBF26A_OFFSET UNITYSDK_OFFSET(0x183808E0)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_4DF4D9162AD406FC_OFFSET UNITYSDK_OFFSET(0x183807A0)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_669B2681B6D021F6_OFFSET UNITYSDK_OFFSET(0x18380B90)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_726FF441D405FD0E_OFFSET UNITYSDK_OFFSET(0x18380470)
#define CLASS_2_4882D51538AB1BD1_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0x18380B00)
#define CLASS_2_4882D51538AB1BD1_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x18380D80)
#define CLASS_2_4882D51538AB1BD1_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x18380850)
#define CLASS_2_4882D51538AB1BD1_RESET_OFFSET UNITYSDK_OFFSET(0x18380680)
#define CLASS_2_4882D51538AB1BD1_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x18380390)
#define CLASS_2_4882D51538AB1BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x18380E80)
#define CLASS_2_4882D51538AB1BD1__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0x18380550)

inline static constexpr unsigned int Class_2_4882D51538AB1BD1_TypeDefinitionIndex = 56835;

class Class_2_4882D51538AB1BD1 : public ::RPG::Client::AbsDownloadData_1<::Class_1_211A5BA20F9E6E38*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x78
	::System::Boolean _IsEnable_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_SET_ISENABLE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_1F55D6FEF27052D4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_1F55D6FEF27052D4_OFFSET))(this);
	}

	::System::Void Method_2_726FF441D405FD0E(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_726FF441D405FD0E_OFFSET))(this, a1);
	}

	::Class_1_211A5BA20F9E6E38* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_211A5BA20F9E6E38*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_RESET_OFFSET))(this);
	}

	::System::Void ClearServerCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_CLEARSERVERCACHE_OFFSET))(this);
	}

	::System::Boolean Method_2_4DF4D9162AD406FC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_4DF4D9162AD406FC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_346F1B59FFBBF26A()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_346F1B59FFBBF26A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_669B2681B6D021F6(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_METHOD_2_669B2681B6D021F6_OFFSET))(this, a1, a2);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1_ONALLSUCCEED_OFFSET))(this);
	}
};
