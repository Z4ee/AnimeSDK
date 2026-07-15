#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_6811E3F95BA9EFBA;
class Class_1_945ACFB1FEBC7A2C_36;
class Class_2_78EC730B7770068F;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B99B007CE74C0CA3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19355A30)
#define CLASS_2_B99B007CE74C0CA3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19355CD0)
#define CLASS_2_B99B007CE74C0CA3_GET__SHIELDOVERRIDEANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x193553E0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_030EEFB82E9F9F6B_OFFSET UNITYSDK_OFFSET(0x19353230)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_04B5D045220F6A3C_OFFSET UNITYSDK_OFFSET(0x19353FA0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x19353E50)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x19354DF0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x19352EC0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_2F0EBD7993DD71FB_OFFSET UNITYSDK_OFFSET(0x193548D0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_2F2E561FFA88AFD6_OFFSET UNITYSDK_OFFSET(0x193536F0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x19353CA0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_2_OFFSET UNITYSDK_OFFSET(0x19355230)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_3_OFFSET UNITYSDK_OFFSET(0x19355290)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x19355380)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19352E70)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_40516D48DFE77960_OFFSET UNITYSDK_OFFSET(0x19353100)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19353020)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x193532C0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x193552F0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_7BB869B5840DB4EB_OFFSET UNITYSDK_OFFSET(0x19353B10)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x19352BF0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_91E12B7EAE1DAFA5_OFFSET UNITYSDK_OFFSET(0x19354500)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_99A2C781DBE24778_OFFSET UNITYSDK_OFFSET(0x19353790)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_A6427B12BF6E181D_OFFSET UNITYSDK_OFFSET(0x19353410)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x19355940)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x19355700)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x19353500)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_C97E728DBD2F1AFC_OFFSET UNITYSDK_OFFSET(0x19353610)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x193541A0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_DD894227CDEE723C_OFFSET UNITYSDK_OFFSET(0x19353D00)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x19352CA0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_E972D30C9F455154_OFFSET UNITYSDK_OFFSET(0x19354260)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x19352F70)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x193554C0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x19355580)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x19355640)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x193557F0)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x19355880)
#define CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x19355400)
#define CLASS_2_B99B007CE74C0CA3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x19352C50)
#define CLASS_2_B99B007CE74C0CA3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19352DD0)
#define CLASS_2_B99B007CE74C0CA3_SET__SHIELDOVERRIDEANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x193553F0)
#define CLASS_2_B99B007CE74C0CA3__CTOR_OFFSET UNITYSDK_OFFSET(0x19355F40)
#define CLASS_2_B99B007CE74C0CA3__ONBIND_OFFSET UNITYSDK_OFFSET(0x19352FC0)
#define CLASS_2_B99B007CE74C0CA3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x19353360)
#define CLASS_2_B99B007CE74C0CA3___ONSETHPBREAKHINT_B__15_0_OFFSET UNITYSDK_OFFSET(0x19355F70)

inline static constexpr unsigned int Class_2_B99B007CE74C0CA3_TypeDefinitionIndex = 68262;

class Class_2_B99B007CE74C0CA3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x0; // 0x0
	::UnityEngine::Transform* Field_2_9; // 0x60
	::RPG::GameCore::GameEntity* Field_2_10; // 0x68
	::Class_2_78EC730B7770068F* Field_2_11; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_12; // 0x78
	::UnityEngine::Animation* Field_2_13; // 0x80
	::UnityEngine::GameObject* Field_2_14; // 0x88
	::UnityEngine::GameObject* Field_2_15; // 0x90
	::UnityEngine::Animation* Field_2_16; // 0x98
	::Class_1_945ACFB1FEBC7A2C_36* __ShieldOverrideAnimationName_k__BackingField; // 0xA0
	::System::Single Field_2_18; // 0xA8
	::System::Single Field_2_19; // 0xAC
	::System::Boolean Field_2_20; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_945ACFB1FEBC7A2C_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_36*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Void Method_2_030EEFB82E9F9F6B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_030EEFB82E9F9F6B_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A6427B12BF6E181D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_A6427B12BF6E181D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C97E728DBD2F1AFC(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_C97E728DBD2F1AFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F2E561FFA88AFD6(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_2F2E561FFA88AFD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_99A2C781DBE24778(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_99A2C781DBE24778_OFFSET))(this, a1);
	}

	::System::Void Method_2_04B5D045220F6A3C(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_04B5D045220F6A3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_E972D30C9F455154(::RPG::GameCore::AbilityMaxHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_E972D30C9F455154_OFFSET))(this, a1);
	}

	::System::Void Method_2_91E12B7EAE1DAFA5(::Class_1_6811E3F95BA9EFBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6811E3F95BA9EFBA*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_91E12B7EAE1DAFA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2F0EBD7993DD71FB(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_2F0EBD7993DD71FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_2_7BB869B5840DB4EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_7BB869B5840DB4EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_40516D48DFE77960(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_40516D48DFE77960_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_2_DD894227CDEE723C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_DD894227CDEE723C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_2_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_35EA095E1AFDD9C8_3_OFFSET))(this);
	}

	::System::String* Method_2_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_6929C20FCC70C1A3_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_36* get__ShieldOverrideAnimationName()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_GET__SHIELDOVERRIDEANIMATIONNAME_OFFSET))(this);
	}

	::System::Void set__ShieldOverrideAnimationName(::Class_1_945ACFB1FEBC7A2C_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_36*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_SET__SHIELDOVERRIDEANIMATIONNAME_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __OnSetHpBreakHint_b__15_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B99B007CE74C0CA3___ONSETHPBREAKHINT_B__15_0_OFFSET))(this, a1);
	}
};
