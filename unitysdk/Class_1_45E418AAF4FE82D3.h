#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_490;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define CLASS_1_45E418AAF4FE82D3_GET_CLEARSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620260)
#define CLASS_1_45E418AAF4FE82D3_GET_CLOSESHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620250)
#define CLASS_1_45E418AAF4FE82D3_GET_INITSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620280)
#define CLASS_1_45E418AAF4FE82D3_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB620210)
#define CLASS_1_45E418AAF4FE82D3_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB6201F0)
#define CLASS_1_45E418AAF4FE82D3_GET_OPENSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620240)
#define CLASS_1_45E418AAF4FE82D3_GET_REFRESHSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB620270)
#define CLASS_1_45E418AAF4FE82D3_GET_SHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB620230)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xB620450)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xB6207C0)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB620530)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_2133FDD73ABABC79_OFFSET UNITYSDK_OFFSET(0xB6208C0)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xB620740)
#define CLASS_1_45E418AAF4FE82D3_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xB620610)
#define CLASS_1_45E418AAF4FE82D3_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB620220)
#define CLASS_1_45E418AAF4FE82D3_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB620200)
#define CLASS_1_45E418AAF4FE82D3__CTOR_OFFSET UNITYSDK_OFFSET(0xB620290)

inline static constexpr unsigned int Class_1_45E418AAF4FE82D3_TypeDefinitionIndex = 49727;

class Class_1_45E418AAF4FE82D3 : public ::System::Object
{
public:
	// static const ::System::UInt32 PEMKNHAAMKM = 0x3E9; // 0x0
	// static const ::System::Int32 ODEBLKLGPPO = 0x5; // 0x0
	::Class_0_16E4307DCC419505_397* _CloseShopCommand_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_397* _InitShopCommand_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_397* _ClearShopCommand_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_397* _OpenShopCommand_k__BackingField; // 0x28
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>* _ShopItems_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Boolean>* _IsActive_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_397* _RefreshShopCommand_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _IsShow_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsShow()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::R3::ReactiveProperty_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_SET_ISSHOW_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsActive()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::R3::ReactiveProperty_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>* get_ShopItems()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_SHOPITEMS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_OpenShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_OPENSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_CloseShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_CLOSESHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_ClearShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_CLEARSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_RefreshShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_REFRESHSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_InitShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_GET_INITSHOPCOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_2133FDD73ABABC79(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_2133FDD73ABABC79_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E418AAF4FE82D3_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}
};
