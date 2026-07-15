#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FA069ED5DBC1DE00_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x157E3430)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x157E0C10)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0x157E1730)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x157E1250)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x157E33C0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_33F4BD9EF41D729C_OFFSET UNITYSDK_OFFSET(0x157E32B0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0x157E11B0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0x157E25A0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_96951D035B9FC668_OFFSET UNITYSDK_OFFSET(0x157E3440)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_A3551A488EF69206_OFFSET UNITYSDK_OFFSET(0x157E0F90)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_ABC86004702C02B5_OFFSET UNITYSDK_OFFSET(0x157E12B0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_AE2843A6516AE60E_OFFSET UNITYSDK_OFFSET(0x157E3140)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x157E1A20)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_D66042666006CE8F_OFFSET UNITYSDK_OFFSET(0x157E29F0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x157E15D0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x157E1530)
#define CLASS_2_FA069ED5DBC1DE00_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x157E0BA0)
#define CLASS_2_FA069ED5DBC1DE00__CTOR_OFFSET UNITYSDK_OFFSET(0x157E3450)

inline static constexpr unsigned int Class_2_FA069ED5DBC1DE00_TypeDefinitionIndex = 52592;

class Class_2_FA069ED5DBC1DE00 : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_0; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_4; // 0x40
	::RPG::GameCore::GlobalVisibilityControl* Field_2_5; // 0x48
	::RPG::GameCore::TaskContext* Field_2_6; // 0x50
	::System::Boolean Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_A3551A488EF69206(::RPG::GameCore::GlobalVisibilityControl* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GlobalVisibilityControl*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_A3551A488EF69206_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_53898BC8CD31F230(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_53898BC8CD31F230_OFFSET))(this, a1);
	}

	::System::Void Method_2_08C9B39C07B526E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_08C9B39C07B526E4_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_2_958AC3A3E274189C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_958AC3A3E274189C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC86004702C02B5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_ABC86004702C02B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_100C37D9D1141569_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D66042666006CE8F(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_D66042666006CE8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE2843A6516AE60E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_AE2843A6516AE60E_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F4BD9EF41D729C(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_33F4BD9EF41D729C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::RPG::GameCore::GlobalVisibilityControl* Method_2_96951D035B9FC668()
	{
		return ((::RPG::GameCore::GlobalVisibilityControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_96951D035B9FC668_OFFSET))(this);
	}
};
