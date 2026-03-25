#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_56B074C4E46329EE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A74860)
#define CLASS_2_56B074C4E46329EE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A74970)
#define CLASS_2_56B074C4E46329EE_METHOD_2_1510CD2CD7CC812A_OFFSET UNITYSDK_OFFSET(0x8A74010)
#define CLASS_2_56B074C4E46329EE_METHOD_2_1919C8FE89E0750F_OFFSET UNITYSDK_OFFSET(0x8A74160)
#define CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_1_OFFSET UNITYSDK_OFFSET(0x8A73EC0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_OFFSET UNITYSDK_OFFSET(0x8A73BB0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8A74530)
#define CLASS_2_56B074C4E46329EE_METHOD_2_4D02902AEB0BF468_OFFSET UNITYSDK_OFFSET(0x8A73D00)
#define CLASS_2_56B074C4E46329EE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8A74F60)
#define CLASS_2_56B074C4E46329EE_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x8A73B00)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x8A73860)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0x8A745B0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x8A744C0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x8A73110)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8A746E0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8A747A0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8A74620)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x8A737F0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A73D78B581761ADB_OFFSET UNITYSDK_OFFSET(0x8A73B60)
#define CLASS_2_56B074C4E46329EE_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0x8A743B0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8A74EF0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0x8A74330)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x8A739D0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x8A73A40)
#define CLASS_2_56B074C4E46329EE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x8A73750)
#define CLASS_2_56B074C4E46329EE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8A73930)
#define CLASS_2_56B074C4E46329EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A74E20)
#define CLASS_2_56B074C4E46329EE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A74A60)
#define CLASS_2_56B074C4E46329EE__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A730C0)
#define CLASS_2_56B074C4E46329EE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A74FC0)
#define CLASS_2_56B074C4E46329EE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A75020)
#define CLASS_2_56B074C4E46329EE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A74E90)

inline static constexpr unsigned int Class_2_56B074C4E46329EE_TypeDefinitionIndex = 58736;

class Class_2_56B074C4E46329EE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_2_13()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56B074C4E46329EE_TypeDefinitionIndex)->GetStaticField(0x364E0);
	}
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*, ::System::String*>* Field_2_5; // 0x68
	::UnityEngine::Animation* Field_2_0; // 0x70
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_9; // 0x78
	::RPG::GameCore::GameEntity* Field_2_8; // 0x80
	::UnityEngine::Transform* Field_2_1; // 0x88
	::System::Boolean Field_2_10; // 0x90
	::RPG::GameCore::MonsterRank Field_2_7; // 0x94
	::RPG::GameCore::MonsterRank Field_2_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_A73D78B581761ADB(::RPG::GameCore::MonsterRank a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_A73D78B581761ADB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BB7486AFE924E33(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BB7486AFE924E33_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1510CD2CD7CC812A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_1510CD2CD7CC812A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D02902AEB0BF468(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_4D02902AEB0BF468_OFFSET))(this, a1);
	}

	::System::Void Method_2_1919C8FE89E0750F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_1919C8FE89E0750F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_AE20E5BD3B1974BD_OFFSET))(this);
	}

	::System::Boolean Method_2_EBDCA6CEF092A306(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_EBDCA6CEF092A306_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
