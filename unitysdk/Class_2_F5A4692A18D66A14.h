#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_FB5FAC13BADBFA34;
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_F5A4692A18D66A14_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC332760)
#define CLASS_2_F5A4692A18D66A14_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC332940)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xC331B30)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0xC3324D0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_1563958F3BDEE31F_OFFSET UNITYSDK_OFFSET(0xC3316B0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_265E3B6BEA7EFC67_OFFSET UNITYSDK_OFFSET(0xC3311C0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_2F0EBD7993DD71FB_OFFSET UNITYSDK_OFFSET(0xC331E20)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_3C7DB26DBC02A9C6_OFFSET UNITYSDK_OFFSET(0xC331330)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_42C3EA3461C8132A_OFFSET UNITYSDK_OFFSET(0xC331550)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xC3310D0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xC330ED0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_9BCC17D24D0A8A13_OFFSET UNITYSDK_OFFSET(0xC331390)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_B4A742FFAB70D330_OFFSET UNITYSDK_OFFSET(0xC331AA0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xC331440)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xC330F20)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_D3BF87FEB00DF624_OFFSET UNITYSDK_OFFSET(0xC331990)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DBF1456D898098BF_OFFSET UNITYSDK_OFFSET(0xC331640)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_DCC1CBB07F2C3152_OFFSET UNITYSDK_OFFSET(0xC331CA0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xC332410)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xC3325E0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xC3326A0)
#define CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC332350)
#define CLASS_2_F5A4692A18D66A14__CTOR_OFFSET UNITYSDK_OFFSET(0xC332AF0)
#define CLASS_2_F5A4692A18D66A14__ONBIND_OFFSET UNITYSDK_OFFSET(0xC330E30)

inline static constexpr unsigned int Class_2_F5A4692A18D66A14_TypeDefinitionIndex = 72336;

class Class_2_F5A4692A18D66A14 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* HEDDENOIDGH; // 0x0
	// static const ::System::String* IGCJGGMCGLD; // 0x0
	// static const ::System::Int32 JCFCJNCFGPC = 0x1; // 0x0
	::Class_2_FB5FAC13BADBFA34* EIPPIIAKNJO; // 0x60
	::System::String* NPBLKCMCKPJ; // 0x68
	::UnityEngine::Animation* MBLLJGMFJJF; // 0x70
	::System::String* AGLLGNAMFGD; // 0x78
	::UnityEngine::Animation* BOBPNIENKBN; // 0x80
	::RPG::GameCore::GameEntity* EAFBMKJFCDG; // 0x88
	::System::String* BMBNBEBEHFM; // 0x90
	::System::String* MEOBKHEEIPG; // 0x98
	::System::Single DCOICMHAAPC; // 0xA0
	::System::Single IJJIEEHPFHI; // 0xA4
	::System::Boolean EDILAOJDGBM; // 0xA8

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

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F5A4692A18D66A14_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
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
