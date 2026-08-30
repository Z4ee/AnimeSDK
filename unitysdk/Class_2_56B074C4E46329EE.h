#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_56B074C4E46329EE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19A09340)
#define CLASS_2_56B074C4E46329EE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19A094A0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_1510CD2CD7CC812A_OFFSET UNITYSDK_OFFSET(0x19A08AE0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_1919C8FE89E0750F_OFFSET UNITYSDK_OFFSET(0x19A08C30)
#define CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_1_OFFSET UNITYSDK_OFFSET(0x19A08990)
#define CLASS_2_56B074C4E46329EE_METHOD_2_3BB7486AFE924E33_OFFSET UNITYSDK_OFFSET(0x19A08680)
#define CLASS_2_56B074C4E46329EE_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x19A09010)
#define CLASS_2_56B074C4E46329EE_METHOD_2_4D02902AEB0BF468_OFFSET UNITYSDK_OFFSET(0x19A087D0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x19A085D0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x19A082F0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0x19A09090)
#define CLASS_2_56B074C4E46329EE_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x19A08FA0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x19A07C30)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x19A08280)
#define CLASS_2_56B074C4E46329EE_METHOD_2_A73D78B581761ADB_OFFSET UNITYSDK_OFFSET(0x19A08630)
#define CLASS_2_56B074C4E46329EE_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0x19A08E80)
#define CLASS_2_56B074C4E46329EE_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0x19A08E00)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x19A08470)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x19A084E0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x19A091C0)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x19A09280)
#define CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x19A09100)
#define CLASS_2_56B074C4E46329EE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x19A081E0)
#define CLASS_2_56B074C4E46329EE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19A083C0)
#define CLASS_2_56B074C4E46329EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A099B0)
#define CLASS_2_56B074C4E46329EE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A095D0)
#define CLASS_2_56B074C4E46329EE__ONBIND_OFFSET UNITYSDK_OFFSET(0x19A07BE0)

inline static constexpr unsigned int Class_2_56B074C4E46329EE_TypeDefinitionIndex = 71630;

class Class_2_56B074C4E46329EE : public ::Class_1_34917908B7833130
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_DDCODEFIJCJ()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56B074C4E46329EE_TypeDefinitionIndex)->GetStaticField(0x652F0);
	}
	// static const ::System::String* CNFNDGKCLJD; // 0x0
	// static const ::System::String* BKKILKAFKEN; // 0x0
	// static const ::System::String* GGMHCPICENN; // 0x0
	// static const ::System::String* CLGDGMLIHKL; // 0x0
	::UnityEngine::Transform* LJFPHPILBJH; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* OOFMKMAAJAB; // 0x70
	::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*, ::System::String*>* OKCMPHAFDKL; // 0x80
	::UnityEngine::Animation* BGIPIKNGPKC; // 0x88
	::RPG::GameCore::MonsterRank BCELNMFHDPH; // 0x90
	::RPG::GameCore::MonsterRank MJIPOHPBIMI; // 0x94
	::System::Boolean AAGKIPFCNHO; // 0x98

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

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
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

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
