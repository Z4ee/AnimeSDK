#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_0F19373B970769FA;
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_FB29C7B190B1A9A1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99BB490)
#define CLASS_2_FB29C7B190B1A9A1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99BB610)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x99BAB00)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_265E3B6BEA7EFC67_OFFSET UNITYSDK_OFFSET(0x99BA220)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_3C7DB26DBC02A9C6_OFFSET UNITYSDK_OFFSET(0x99BA3A0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_42C3EA3461C8132A_OFFSET UNITYSDK_OFFSET(0x99BA5B0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99BB890)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_5FB1B9EC645AD55B_OFFSET UNITYSDK_OFFSET(0x99BA130)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_5FF514E44337B43F_OFFSET UNITYSDK_OFFSET(0x99BA960)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_771ADD86EA4F4522_OFFSET UNITYSDK_OFFSET(0x99BA710)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x99B9F30)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0x99BB240)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_9BCC17D24D0A8A13_OFFSET UNITYSDK_OFFSET(0x99BA3F0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x99BB1A0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x99BB310)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x99BB3D0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x99BB100)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_B4A742FFAB70D330_OFFSET UNITYSDK_OFFSET(0x99BAA70)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x99BA4A0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x99BB820)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x99B9F80)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_CF2CFFBCFC8CA900_OFFSET UNITYSDK_OFFSET(0x99BAE00)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_DBF1456D898098BF_OFFSET UNITYSDK_OFFSET(0x99BA6A0)
#define CLASS_2_FB29C7B190B1A9A1_METHOD_2_DCC1CBB07F2C3152_OFFSET UNITYSDK_OFFSET(0x99BAC80)
#define CLASS_2_FB29C7B190B1A9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x99BB760)
#define CLASS_2_FB29C7B190B1A9A1__ONBIND_OFFSET UNITYSDK_OFFSET(0x99B9E90)
#define CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x99BB8F0)
#define CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x99BB950)
#define CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x99BB7C0)

inline static constexpr unsigned int Class_2_FB29C7B190B1A9A1_TypeDefinitionIndex = 66641;

class Class_2_FB29C7B190B1A9A1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::Int32 Field_2_9 = 0x1; // 0x0
	::Class_2_0F19373B970769FA* Field_2_0; // 0x60
	::System::String* Field_2_4; // 0x68
	::System::String* Field_2_3; // 0x70
	::RPG::GameCore::GameEntity* Field_2_10; // 0x78
	::System::String* Field_2_6; // 0x80
	::System::String* Field_2_5; // 0x88
	::UnityEngine::Animation* Field_2_1; // 0x90
	::UnityEngine::Animation* Field_2_2; // 0x98
	::System::Single Field_2_13; // 0xA0
	::System::Single Field_2_11; // 0xA4
	::System::Boolean Field_2_12; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_3C7DB26DBC02A9C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_3C7DB26DBC02A9C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BCC17D24D0A8A13(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_9BCC17D24D0A8A13_OFFSET))(this, a1);
	}

	::System::Void Method_2_42C3EA3461C8132A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_42C3EA3461C8132A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBF1456D898098BF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_DBF1456D898098BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_771ADD86EA4F4522(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_771ADD86EA4F4522_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCC1CBB07F2C3152(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_DCC1CBB07F2C3152_OFFSET))(this, a1);
	}

	::System::Void Method_2_265E3B6BEA7EFC67(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_265E3B6BEA7EFC67_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CF2CFFBCFC8CA900(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_CF2CFFBCFC8CA900_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_2_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FF514E44337B43F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_5FF514E44337B43F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FB1B9EC645AD55B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_5FB1B9EC645AD55B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4A742FFAB70D330(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_B4A742FFAB70D330_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB29C7B190B1A9A1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
