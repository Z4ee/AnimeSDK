#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_490;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define CLASS_1_A5A0319D5C2F87BD_GET_CLEARSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB619850)
#define CLASS_1_A5A0319D5C2F87BD_GET_CLOSESHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB619840)
#define CLASS_1_A5A0319D5C2F87BD_GET_INITSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB619870)
#define CLASS_1_A5A0319D5C2F87BD_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB619800)
#define CLASS_1_A5A0319D5C2F87BD_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB6197E0)
#define CLASS_1_A5A0319D5C2F87BD_GET_OPENSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB619830)
#define CLASS_1_A5A0319D5C2F87BD_GET_REFRESHSHOPCOMMAND_OFFSET UNITYSDK_OFFSET(0xB619860)
#define CLASS_1_A5A0319D5C2F87BD_GET_SHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB619820)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xB619A40)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xB619DB0)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB619B20)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_987505A878484FEE_OFFSET UNITYSDK_OFFSET(0xB619EB0)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xB619D30)
#define CLASS_1_A5A0319D5C2F87BD_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xB619C00)
#define CLASS_1_A5A0319D5C2F87BD_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB619810)
#define CLASS_1_A5A0319D5C2F87BD_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB6197F0)
#define CLASS_1_A5A0319D5C2F87BD__CTOR_OFFSET UNITYSDK_OFFSET(0xB619880)

inline static constexpr unsigned int Class_1_A5A0319D5C2F87BD_TypeDefinitionIndex = 49727;

class Class_1_A5A0319D5C2F87BD : public ::System::Object
{
public:
	// static const ::System::UInt32 PEMKNHAAMKM = 0x3E9; // 0x0
	// static const ::System::Int32 ODEBLKLGPPO = 0x5; // 0x0
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>* _ShopItems_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _IsActive_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_397* _CloseShopCommand_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_397* _RefreshShopCommand_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_397* _OpenShopCommand_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Boolean>* _IsShow_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_397* _InitShopCommand_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_397* _ClearShopCommand_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsShow()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::R3::ReactiveProperty_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_SET_ISSHOW_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsActive()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::R3::ReactiveProperty_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>* get_ShopItems()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_490*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_SHOPITEMS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_OpenShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_OPENSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_CloseShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_CLOSESHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_ClearShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_CLEARSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_RefreshShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_REFRESHSHOPCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_InitShopCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_GET_INITSHOPCOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_987505A878484FEE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_987505A878484FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A0319D5C2F87BD_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}
};
