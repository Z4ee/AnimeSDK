#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12D72A183F54AF4E_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13BAE570)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0x13BAC7A0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x13BAE500)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_20BE547706A9BCEF_OFFSET UNITYSDK_OFFSET(0x13BAC070)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x13BABD70)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_33F4BD9EF41D729C_OFFSET UNITYSDK_OFFSET(0x13BAE3F0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13BAE790)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0x13BAC220)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x13BAC2C0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0x13BAD7E0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_96951D035B9FC668_OFFSET UNITYSDK_OFFSET(0x13BAE580)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_ABC86004702C02B5_OFFSET UNITYSDK_OFFSET(0x13BAC320)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_AE2843A6516AE60E_OFFSET UNITYSDK_OFFSET(0x13BAE280)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x13BACA90)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_D332A4B73D4D500E_OFFSET UNITYSDK_OFFSET(0x13BADC30)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x13BAC640)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x13BAC5A0)
#define CLASS_2_12D72A183F54AF4E_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x13BABD00)
#define CLASS_2_12D72A183F54AF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x13BAE590)
#define CLASS_2_12D72A183F54AF4E___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x13BAE730)

inline static constexpr unsigned int Class_2_12D72A183F54AF4E_TypeDefinitionIndex = 51450;

class Class_2_12D72A183F54AF4E : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_0; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x30
	::RPG::GameCore::GlobalVisibilityControl* Field_2_3; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x40
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_5; // 0x48
	::RPG::GameCore::TaskContext* Field_2_6; // 0x50
	::System::Boolean Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_20BE547706A9BCEF(::RPG::GameCore::GlobalVisibilityControl* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GlobalVisibilityControl*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_20BE547706A9BCEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_53898BC8CD31F230(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_53898BC8CD31F230_OFFSET))(this, a1);
	}

	::System::Void Method_2_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_958AC3A3E274189C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_958AC3A3E274189C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC86004702C02B5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_ABC86004702C02B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_100C37D9D1141569_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D332A4B73D4D500E(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_D332A4B73D4D500E_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE2843A6516AE60E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_AE2843A6516AE60E_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F4BD9EF41D729C(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_33F4BD9EF41D729C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::RPG::GameCore::GlobalVisibilityControl* Method_2_96951D035B9FC668()
	{
		return ((::RPG::GameCore::GlobalVisibilityControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_96951D035B9FC668_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
