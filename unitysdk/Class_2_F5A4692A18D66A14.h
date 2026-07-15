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

#define CLASS_2_F5A4692A18D66A14_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1615CF00)
#define CLASS_2_F5A4692A18D66A14_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1615D110)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x1615C2B0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0x1615CC40)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_1563958F3BDEE31F_OFFSET UNITYSDK_OFFSET(0x1615BE40)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_265E3B6BEA7EFC67_OFFSET UNITYSDK_OFFSET(0x1615B950)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_2F0EBD7993DD71FB_OFFSET UNITYSDK_OFFSET(0x1615C5A0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_42C3EA3461C8132A_OFFSET UNITYSDK_OFFSET(0x1615BCE0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_6B66E020E6F3A793_OFFSET UNITYSDK_OFFSET(0x1615BAD0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x1615B870)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1615B640)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_9BCC17D24D0A8A13_OFFSET UNITYSDK_OFFSET(0x1615BB20)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_B4A742FFAB70D330_OFFSET UNITYSDK_OFFSET(0x1615C230)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1615CE10)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x1615BBD0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_D3BF87FEB00DF624_OFFSET UNITYSDK_OFFSET(0x1615C120)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DBF1456D898098BF_OFFSET UNITYSDK_OFFSET(0x1615BDD0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DCC1CBB07F2C3152_OFFSET UNITYSDK_OFFSET(0x1615C420)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1615B690)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1615CB80)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1615CD50)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1615CAC0)
#define CLASS_2_F5A4692A18D66A14__CTOR_OFFSET UNITYSDK_OFFSET(0x1615D2F0)
#define CLASS_2_F5A4692A18D66A14__ONBIND_OFFSET UNITYSDK_OFFSET(0x1615B580)

inline static constexpr unsigned int Class_2_F5A4692A18D66A14_TypeDefinitionIndex = 69063;

class Class_2_F5A4692A18D66A14 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x1; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::System::String* Field_2_4; // 0x68
	::System::String* Field_2_5; // 0x70
	::RPG::GameCore::GameEntity* Field_2_6; // 0x78
	::UnityEngine::Animation* Field_2_7; // 0x80
	::System::String* Field_2_8; // 0x88
	::Class_2_0F19373B970769FA* Field_2_9; // 0x90
	::System::String* Field_2_10; // 0x98
	::System::Boolean Field_2_11; // 0xA0
	::System::Single Field_2_12; // 0xA4
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

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_6B66E020E6F3A793(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_6B66E020E6F3A793_OFFSET))(this, a1);
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

	::System::Int32 Method_2_2F0EBD7993DD71FB(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_2F0EBD7993DD71FB_OFFSET))(this, a1);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
