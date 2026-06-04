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

#define CLASS_2_F5A4692A18D66A14_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFD0EC0)
#define CLASS_2_F5A4692A18D66A14_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAFD10A0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xAFD0440)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0xAFD0CB0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_1563958F3BDEE31F_OFFSET UNITYSDK_OFFSET(0xAFCFFD0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_265E3B6BEA7EFC67_OFFSET UNITYSDK_OFFSET(0xAFCFAE0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_2FE938A9533B9672_OFFSET UNITYSDK_OFFSET(0xAFD0730)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_3C7DB26DBC02A9C6_OFFSET UNITYSDK_OFFSET(0xAFCFC60)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_42C3EA3461C8132A_OFFSET UNITYSDK_OFFSET(0xAFCFE70)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAFD1380)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAFD1320)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xAFCFA00)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xAFCF800)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_9BCC17D24D0A8A13_OFFSET UNITYSDK_OFFSET(0xAFCFCB0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAFD0C10)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xAFD0D80)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xAFD0E20)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAFD0B70)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_B4A742FFAB70D330_OFFSET UNITYSDK_OFFSET(0xAFD03C0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xAFCFD60)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xAFCF850)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_D3BF87FEB00DF624_OFFSET UNITYSDK_OFFSET(0xAFD02B0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DBF1456D898098BF_OFFSET UNITYSDK_OFFSET(0xAFCFF60)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DCC1CBB07F2C3152_OFFSET UNITYSDK_OFFSET(0xAFD05B0)
#define CLASS_2_F5A4692A18D66A14__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD1250)
#define CLASS_2_F5A4692A18D66A14__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFCF760)
#define CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFD13E0)
#define CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAFD1440)
#define CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFD12C0)

inline static constexpr unsigned int Class_2_F5A4692A18D66A14_TypeDefinitionIndex = 67581;

class Class_2_F5A4692A18D66A14 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x1; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::RPG::GameCore::GameEntity* Field_2_4; // 0x68
	::Class_2_0F19373B970769FA* Field_2_5; // 0x70
	::System::String* Field_2_6; // 0x78
	::System::String* Field_2_7; // 0x80
	::UnityEngine::Animation* Field_2_8; // 0x88
	::System::String* Field_2_9; // 0x90
	::System::String* Field_2_10; // 0x98
	::System::Single Field_2_11; // 0xA0
	::System::Boolean Field_2_12; // 0xA4
	::System::Single Field_2_13; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_3C7DB26DBC02A9C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_3C7DB26DBC02A9C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BCC17D24D0A8A13(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_9BCC17D24D0A8A13_OFFSET))(this, a1);
	}

	::System::Void Method_2_42C3EA3461C8132A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_42C3EA3461C8132A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBF1456D898098BF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_DBF1456D898098BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_1563958F3BDEE31F(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_1563958F3BDEE31F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCC1CBB07F2C3152(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_DCC1CBB07F2C3152_OFFSET))(this, a1);
	}

	::System::Void Method_2_265E3B6BEA7EFC67(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_265E3B6BEA7EFC67_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2FE938A9533B9672(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_2FE938A9533B9672_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Boolean Method_2_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3BF87FEB00DF624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_D3BF87FEB00DF624_OFFSET))(this, a1);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4A742FFAB70D330(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_B4A742FFAB70D330_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
