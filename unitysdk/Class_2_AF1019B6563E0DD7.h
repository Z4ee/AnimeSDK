#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_AF1019B6563E0DD7_ActiveType.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B2388953D46D7EF4;
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client { class NotifySetBattleEntityViewActive; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class AbilityCharacterModelChange; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_AF1019B6563E0DD7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1687E750)
#define CLASS_2_AF1019B6563E0DD7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1687EF70)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0x1687C3A0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_065AA6BC6977F7F6_OFFSET UNITYSDK_OFFSET(0x1687CBB0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_074B627B1AE5E8C8_OFFSET UNITYSDK_OFFSET(0x1687BF50)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x1687C4D0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1687B130)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_2100B2CE8C2347B6_OFFSET UNITYSDK_OFFSET(0x1687B7E0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x16879E60)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1687B970)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0x1687D1C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x16879D70)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_2E2D2C7447A90EAA_OFFSET UNITYSDK_OFFSET(0x1687C120)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_310D3529A9E45202_OFFSET UNITYSDK_OFFSET(0x1687BC60)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_39DD8B6B21AE6417_OFFSET UNITYSDK_OFFSET(0x1687BDE0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1687A4C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_43180B6B1CB48CE0_OFFSET UNITYSDK_OFFSET(0x1687C830)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1687A7E0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_4B08A5EF9CAB1270_OFFSET UNITYSDK_OFFSET(0x1687C050)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_583061E3A67345FF_OFFSET UNITYSDK_OFFSET(0x1687C690)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_590662BA0A0EF3EC_OFFSET UNITYSDK_OFFSET(0x1687C200)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_686221D5DF498040_1_OFFSET UNITYSDK_OFFSET(0x1687B3C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x1687B2D0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1687A410)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1687D400)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_78A40B404CCA0829_OFFSET UNITYSDK_OFFSET(0x1687B350)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0x1687CC10)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_7DD44FF5C08F5E28_OFFSET UNITYSDK_OFFSET(0x1687C8A0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1687B490)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_9524A97E83A9829F_OFFSET UNITYSDK_OFFSET(0x1687C540)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_1_OFFSET UNITYSDK_OFFSET(0x1687DDA0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_2_OFFSET UNITYSDK_OFFSET(0x1687E050)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x1687CA00)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x1687A000)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1687A9E0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x1687A3C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x1687A840)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_B9BD5FB09F313D71_OFFSET UNITYSDK_OFFSET(0x1687CFA0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_1_OFFSET UNITYSDK_OFFSET(0x1687B6A0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_2_OFFSET UNITYSDK_OFFSET(0x1687B6F0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_3_OFFSET UNITYSDK_OFFSET(0x1687B740)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_4_OFFSET UNITYSDK_OFFSET(0x1687B790)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_5_OFFSET UNITYSDK_OFFSET(0x1687C340)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1687B440)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x1687C2F0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0x1687A070)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1687E390)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1687A370)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_CC46BF83CCD489F7_OFFSET UNITYSDK_OFFSET(0x1687C7C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_CC9DCB1EBAA03C60_OFFSET UNITYSDK_OFFSET(0x1687CDF0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0x1687BA00)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_DA40E2A231DA0583_OFFSET UNITYSDK_OFFSET(0x1687A700)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_EB055932A3582107_OFFSET UNITYSDK_OFFSET(0x1687CD40)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_10_OFFSET UNITYSDK_OFFSET(0x1687DC20)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_11_OFFSET UNITYSDK_OFFSET(0x1687DCE0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_12_OFFSET UNITYSDK_OFFSET(0x1687DEA0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_13_OFFSET UNITYSDK_OFFSET(0x1687DF60)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_14_OFFSET UNITYSDK_OFFSET(0x1687E150)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_15_OFFSET UNITYSDK_OFFSET(0x1687E210)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_16_OFFSET UNITYSDK_OFFSET(0x1687E2D0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_17_OFFSET UNITYSDK_OFFSET(0x1687E480)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_18_OFFSET UNITYSDK_OFFSET(0x1687E590)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_19_OFFSET UNITYSDK_OFFSET(0x1687E690)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1687D5C0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1687D680)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x1687D710)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x1687D7A0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x1687D860)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x1687D920)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x1687D9E0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x1687DAA0)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x1687DB60)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1687D500)
#define CLASS_2_AF1019B6563E0DD7_METHOD_2_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0x1687B1A0)
#define CLASS_2_AF1019B6563E0DD7_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16879F10)
#define CLASS_2_AF1019B6563E0DD7_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1687A170)
#define CLASS_2_AF1019B6563E0DD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1687F780)
#define CLASS_2_AF1019B6563E0DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1687F750)
#define CLASS_2_AF1019B6563E0DD7__ONBIND_OFFSET UNITYSDK_OFFSET(0x16879C20)
#define CLASS_2_AF1019B6563E0DD7__ONRETURN_B__9_0_OFFSET UNITYSDK_OFFSET(0x1687F7A0)

inline static constexpr unsigned int Class_2_AF1019B6563E0DD7_TypeDefinitionIndex = 68550;

class Class_2_AF1019B6563E0DD7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7_TypeDefinitionIndex)->GetStaticField(0x84B0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7_TypeDefinitionIndex)->GetStaticField(0x84B4);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7_TypeDefinitionIndex)->GetStaticField(0x84B8);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7_TypeDefinitionIndex)->GetStaticField(0x84BC);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7_TypeDefinitionIndex)->GetStaticField(0x84C0);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_10; // 0x0
	// static const ::System::Single Field_2_11; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_12; // 0x60
	::RPG::GameCore::CharacterDataComponent* Field_2_13; // 0x68
	::RPG::GameCore::TurnBasedGameMode* Field_2_14; // 0x70
	::UnityEngine::Transform* Field_2_15; // 0x78
	::RPG::GameCore::GameEntity* Field_2_16; // 0x80
	::UnityEngine::Animation* Field_2_17; // 0x88
	::RPG::Client::UIFollow3DTarget* Field_2_18; // 0x90
	::Class_1_B2388953D46D7EF4* Field_2_19; // 0x98
	::UnityEngine::RectTransform* Field_2_20; // 0xA0
	::RPG::GameCore::MonsterHUDVisibleType Field_2_21; // 0xA8
	::System::Int32 Field_2_22; // 0xAC
	::System::Boolean Field_2_23; // 0xB0
	::System::Boolean Field_2_24; // 0xB1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_2_C365440D57901CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_C365440D57901CE0_OFFSET))(this);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_2_686221D5DF498040_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_686221D5DF498040_1_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_1_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_2_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_3_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_4_OFFSET))(this);
	}

	::System::Void Method_2_2100B2CE8C2347B6(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_2100B2CE8C2347B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_310D3529A9E45202(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_310D3529A9E45202_OFFSET))(this, a1);
	}

	::System::Void Method_2_39DD8B6B21AE6417(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_39DD8B6B21AE6417_OFFSET))(this, a1);
	}

	::System::Void Method_2_074B627B1AE5E8C8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_074B627B1AE5E8C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B08A5EF9CAB1270(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_4B08A5EF9CAB1270_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E2D2C7447A90EAA(::RPG::Client::NotifySetBattleEntityViewActive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifySetBattleEntityViewActive*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_2E2D2C7447A90EAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_590662BA0A0EF3EC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_590662BA0A0EF3EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA49FAB086F388D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BBA49FAB086F388D_5_OFFSET))(this);
	}

	::System::Void Method_2_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9524A97E83A9829F(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_9524A97E83A9829F_OFFSET))(this, a1);
	}

	::System::Void Method_2_583061E3A67345FF(::RPG::GameCore::EntityRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_583061E3A67345FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC46BF83CCD489F7(::RPG::Client::MonsterPhaseChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_CC46BF83CCD489F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_43180B6B1CB48CE0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_43180B6B1CB48CE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD44FF5C08F5E28(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_7DD44FF5C08F5E28_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C3BCB023B0D3F9C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_7C3BCB023B0D3F9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F77BBFBC56288301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F77BBFBC56288301_OFFSET))(this);
	}

	::System::Void Method_2_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_2_EB055932A3582107(::RPG::GameCore::AbilityCharacterModelChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCharacterModelChange*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_EB055932A3582107_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA40E2A231DA0583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_DA40E2A231DA0583_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_B9BD5FB09F313D71(::RPG::Client::UIFollow3DTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_B9BD5FB09F313D71_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_288F74D11BE167E0(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_288F74D11BE167E0_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_CC9DCB1EBAA03C60()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_CC9DCB1EBAA03C60_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_0CC4BC19C602BCD0_1_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_065AA6BC6977F7F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_065AA6BC6977F7F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_78A40B404CCA0829(::Class_2_AF1019B6563E0DD7_ActiveType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF1019B6563E0DD7_ActiveType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_78A40B404CCA0829_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_10(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_11(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_11_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_12(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_12_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_13(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_13_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_974A70E8019154E7_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_14(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_14_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_15(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_15_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_16(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_16_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_17(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_17_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_18(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_18_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_19(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_METHOD_2_F37CDBD6D46274D2_19_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _OnReturn_b__9_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7__ONRETURN_B__9_0_OFFSET))(this);
	}
};
