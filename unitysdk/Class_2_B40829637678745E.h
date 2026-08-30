#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B40829637678745E_TextmapDownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_3833970CC4FA195E;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_B40829637678745E_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF40BE30)
#define CLASS_2_B40829637678745E_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xF40BBA0)
#define CLASS_2_B40829637678745E_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF40BD30)
#define CLASS_2_B40829637678745E_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xF40BD20)
#define CLASS_2_B40829637678745E_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xF40BD10)
#define CLASS_2_B40829637678745E_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xF40BD00)
#define CLASS_2_B40829637678745E_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xF40BCA0)
#define CLASS_2_B40829637678745E_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF40BD40)
#define CLASS_2_B40829637678745E_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xF40BCD0)
#define CLASS_2_B40829637678745E_METHOD_2_0743268FA10C2E1A_OFFSET UNITYSDK_OFFSET(0xF40C520)
#define CLASS_2_B40829637678745E_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xF40BB80)
#define CLASS_2_B40829637678745E_METHOD_2_6928FDA7FD8C4635_OFFSET UNITYSDK_OFFSET(0xF40C210)
#define CLASS_2_B40829637678745E_METHOD_2_69EC02E1DE51ED4F_OFFSET UNITYSDK_OFFSET(0xF40B990)
#define CLASS_2_B40829637678745E_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xF40BB90)
#define CLASS_2_B40829637678745E_METHOD_2_A341FDF37ACC0297_OFFSET UNITYSDK_OFFSET(0xF40C1C0)
#define CLASS_2_B40829637678745E_METHOD_2_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0xF40C4C0)
#define CLASS_2_B40829637678745E_METHOD_2_E1097147727CB840_OFFSET UNITYSDK_OFFSET(0xF40C330)
#define CLASS_2_B40829637678745E_METHOD_2_E3551E7D9304A0E0_OFFSET UNITYSDK_OFFSET(0xF40B980)
#define CLASS_2_B40829637678745E_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xF40C0E0)
#define CLASS_2_B40829637678745E_METHOD_2_F5BFB4A8F63C3837_OFFSET UNITYSDK_OFFSET(0xF40C410)
#define CLASS_2_B40829637678745E_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xF40C170)
#define CLASS_2_B40829637678745E_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xF40C9D0)
#define CLASS_2_B40829637678745E_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF40BD50)
#define CLASS_2_B40829637678745E__CTOR_OFFSET UNITYSDK_OFFSET(0xF40BF30)
#define CLASS_2_B40829637678745E__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xF40BD60)
#define CLASS_2_B40829637678745E___N__0_OFFSET UNITYSDK_OFFSET(0xF40CA60)

inline static constexpr unsigned int Class_2_B40829637678745E_TypeDefinitionIndex = 59608;

class Class_2_B40829637678745E : public ::RPG::Client::AbsDownloadData_1<::Class_1_3833970CC4FA195E*>
{
public:
	::System::String* ONDHIHPPCIL; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* JMFJDKJMDEB; // 0x80
	::Class_2_B40829637678745E_TextmapDownloadType BHFBPMLALOL; // 0x88
	::System::Boolean MGCGBGFALKO; // 0x8C
	::System::Boolean _IsEnable_k__BackingField; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E__CTOR_OFFSET))(this);
	}

	::Class_2_B40829637678745E_TextmapDownloadType Method_2_E3551E7D9304A0E0()
	{
		return ((::Class_2_B40829637678745E_TextmapDownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E3551E7D9304A0E0_OFFSET))(this);
	}

	::System::Void Method_2_69EC02E1DE51ED4F(::Class_2_B40829637678745E_TextmapDownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B40829637678745E_TextmapDownloadType))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_69EC02E1DE51ED4F_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_3833970CC4FA195E* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_3833970CC4FA195E*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean Method_2_A341FDF37ACC0297(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_A341FDF37ACC0297_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E1097147727CB840(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E1097147727CB840_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6928FDA7FD8C4635(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_6928FDA7FD8C4635_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0743268FA10C2E1A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_0743268FA10C2E1A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F5BFB4A8F63C3837(::Class_0_16E4307DCC419505_87* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_87*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_F5BFB4A8F63C3837_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E___N__0_OFFSET))(this);
	}
};
