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

#define CLASS_2_FA069ED5DBC1DE00_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15D4CD30)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_0127349B4590106C_OFFSET UNITYSDK_OFFSET(0x15D4AD90)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0x15D4B030)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x15D4AAC0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x15D4CCC0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_33F4BD9EF41D729C_OFFSET UNITYSDK_OFFSET(0x15D4CBB0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_4795F6BF5D7D71FF_OFFSET UNITYSDK_OFFSET(0x15D4AB20)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0x15D4AA20)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0x15D4BEA0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_96951D035B9FC668_OFFSET UNITYSDK_OFFSET(0x15D4CD40)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_A3551A488EF69206_OFFSET UNITYSDK_OFFSET(0x15D4A800)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_AE2843A6516AE60E_OFFSET UNITYSDK_OFFSET(0x15D4CA40)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x15D4B320)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_D66042666006CE8F_OFFSET UNITYSDK_OFFSET(0x15D4C2F0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x15D4AED0)
#define CLASS_2_FA069ED5DBC1DE00_METHOD_2_F059F72E8C4C7357_OFFSET UNITYSDK_OFFSET(0x15D4A590)
#define CLASS_2_FA069ED5DBC1DE00_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x15D4A520)
#define CLASS_2_FA069ED5DBC1DE00__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4CD50)

inline static constexpr unsigned int Class_2_FA069ED5DBC1DE00_TypeDefinitionIndex = 55085;

class Class_2_FA069ED5DBC1DE00 : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* AKEAHBIFDHO; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* AIEFNELIJON; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* AHIMHCMJPBB; // 0x30
	::RPG::GameCore::GlobalVisibilityControl* HMPDKCFLOFJ; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KJCNIKOOJFJ; // 0x48
	::Class_1_5F51D4049EA87B7B* MELOOHNGEFL; // 0x50
	::System::Boolean IGNCAIJCMIF; // 0x58
	::System::Boolean PBKFCPEEMON; // 0x59

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

	::System::Void Method_2_F059F72E8C4C7357()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_F059F72E8C4C7357_OFFSET))(this);
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

	::System::Void Method_2_4795F6BF5D7D71FF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_4795F6BF5D7D71FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0127349B4590106C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA069ED5DBC1DE00_METHOD_2_0127349B4590106C_OFFSET))(this, a1);
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
