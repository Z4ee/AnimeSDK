#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E46BD8E1EAFF0032_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7AA9B0)
#define CLASS_2_E46BD8E1EAFF0032_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7AAB10)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_1_OFFSET UNITYSDK_OFFSET(0xB7A9FB0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_OFFSET UNITYSDK_OFFSET(0xB7A9C40)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_0A584F53A2EE54DE_OFFSET UNITYSDK_OFFSET(0xB7A9E80)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_2D91FF5C865B0402_OFFSET UNITYSDK_OFFSET(0xB7A9A30)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xB7A9B00)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xB7A9B70)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0xB7AA690)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB7AA620)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0xB7AA500)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_DD84BCD1EDA42F6E_OFFSET UNITYSDK_OFFSET(0xB7AA1F0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_DFE1F50F191E84E7_OFFSET UNITYSDK_OFFSET(0xB7AA340)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0xB7AA480)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB7AA700)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB7AA830)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xB7AA8F0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB7AA770)
#define CLASS_2_E46BD8E1EAFF0032__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7AAC70)
#define CLASS_2_E46BD8E1EAFF0032__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AAC40)
#define CLASS_2_E46BD8E1EAFF0032__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7A9980)

inline static constexpr unsigned int Class_2_E46BD8E1EAFF0032_TypeDefinitionIndex = 72258;

class Class_2_E46BD8E1EAFF0032 : public ::Class_1_34917908B7833130
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_DDCODEFIJCJ()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E46BD8E1EAFF0032_TypeDefinitionIndex)->GetStaticField(0x6CD0);
	}
	// static const ::System::String* GGMHCPICENN; // 0x0
	// static const ::System::String* CLGDGMLIHKL; // 0x0
	::UnityEngine::Transform* LJFPHPILBJH; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x70
	::UnityEngine::Animation* BGIPIKNGPKC; // 0x78
	::System::Boolean AAGKIPFCNHO; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2D91FF5C865B0402(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_2D91FF5C865B0402_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_05AAC6E4EFC6BE59(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_OFFSET))(this, a1);
	}

	::System::Void Method_2_05AAC6E4EFC6BE59_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD84BCD1EDA42F6E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_DD84BCD1EDA42F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A584F53A2EE54DE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_0A584F53A2EE54DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFE1F50F191E84E7(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_DFE1F50F191E84E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_AE20E5BD3B1974BD_OFFSET))(this);
	}

	::System::Boolean Method_2_EBDCA6CEF092A306(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_EBDCA6CEF092A306_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
