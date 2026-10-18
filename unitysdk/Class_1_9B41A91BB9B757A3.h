#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_488;
namespace R3 { template <typename T> class ReactiveProperty_1; }
template <typename T> class Class_0_16E4307DCC419505_399;

#define CLASS_1_9B41A91BB9B757A3_GET_CLEARCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2DE0)
#define CLASS_1_9B41A91BB9B757A3_GET_ICONITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE4E2E00)
#define CLASS_1_9B41A91BB9B757A3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE4E2D70)
#define CLASS_1_9B41A91BB9B757A3_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE4E2D90)
#define CLASS_1_9B41A91BB9B757A3_GET_ISNOTRELEASEDVISIBLE_OFFSET UNITYSDK_OFFSET(0xE4E2DA0)
#define CLASS_1_9B41A91BB9B757A3_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0xE4E2D80)
#define CLASS_1_9B41A91BB9B757A3_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xE4E2DB0)
#define CLASS_1_9B41A91BB9B757A3_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2DC0)
#define CLASS_1_9B41A91BB9B757A3_GET_SETROLECOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2DD0)
#define CLASS_1_9B41A91BB9B757A3_GET_UPGRADECOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2DF0)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_4C8193FDDF9A44F7_OFFSET UNITYSDK_OFFSET(0xE4E2E10)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0xE4E34A0)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_2_OFFSET UNITYSDK_OFFSET(0xE4E2AA0)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xE4E31D0)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4E38E0)
#define CLASS_1_9B41A91BB9B757A3_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE4E3770)
#define CLASS_1_9B41A91BB9B757A3__CTOR_OFFSET UNITYSDK_OFFSET(0xE4E2890)

inline static constexpr unsigned int Class_1_9B41A91BB9B757A3_TypeDefinitionIndex = 49715;

class Class_1_9B41A91BB9B757A3 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* _IsLocked_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_399<::System::UInt32>* _SetRoleCommand_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_488* _IconItemViewModel_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Boolean>* _IsNotReleasedVisible_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_397* _SelectCommand_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_397* _ClearCommand_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x48
	::Class_0_16E4307DCC419505_397* _UpgradeCommand_k__BackingField; // 0x50
	::System::Int32 _Index_k__BackingField; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_INDEX_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_ISROLEVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsLocked()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_ISLOCKED_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsNotReleasedVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_ISNOTRELEASEDVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_ROLEID_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_SelectCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_SELECTCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_399<::System::UInt32>* get_SetRoleCommand()
	{
		return ((::Class_0_16E4307DCC419505_399<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_SETROLECOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_ClearCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_CLEARCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_UpgradeCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_UPGRADECOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_488* get_IconItemViewModel()
	{
		return ((::Class_0_16E4307DCC419505_488*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_GET_ICONITEMVIEWMODEL_OFFSET))(this);
	}

	::System::Void Method_1_4C8193FDDF9A44F7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_4C8193FDDF9A44F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_1_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_C638E91FC0D3A13A_2_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B41A91BB9B757A3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
