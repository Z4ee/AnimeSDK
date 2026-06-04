#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E46BD8E1EAFF0032_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4F7010)
#define CLASS_2_E46BD8E1EAFF0032_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA4F7170)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_1_OFFSET UNITYSDK_OFFSET(0xA4F6680)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_05AAC6E4EFC6BE59_OFFSET UNITYSDK_OFFSET(0xA4F6310)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_0A584F53A2EE54DE_OFFSET UNITYSDK_OFFSET(0xA4F6550)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_2D91FF5C865B0402_OFFSET UNITYSDK_OFFSET(0xA4F6110)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA4F7390)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xA4F61E0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xA4F6250)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0xA4F6D50)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA4F6CE0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA4F6ED0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xA4F6F70)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA4F6E30)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0xA4F6BD0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_DD84BCD1EDA42F6E_OFFSET UNITYSDK_OFFSET(0xA4F68C0)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_DFE1F50F191E84E7_OFFSET UNITYSDK_OFFSET(0xA4F6A10)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0xA4F6B50)
#define CLASS_2_E46BD8E1EAFF0032_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA4F6DC0)
#define CLASS_2_E46BD8E1EAFF0032__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4F72D0)
#define CLASS_2_E46BD8E1EAFF0032__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F72A0)
#define CLASS_2_E46BD8E1EAFF0032__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4F6060)
#define CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4F73F0)
#define CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA4F7450)
#define CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4F7330)

inline static constexpr unsigned int Class_2_E46BD8E1EAFF0032_TypeDefinitionIndex = 67576;

class Class_2_E46BD8E1EAFF0032 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E46BD8E1EAFF0032_TypeDefinitionIndex)->GetStaticField(0x611A0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_5; // 0x70
	::RPG::GameCore::GameEntity* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80

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

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46BD8E1EAFF0032___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
