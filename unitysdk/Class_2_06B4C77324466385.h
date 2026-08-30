#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_B18A907A8E4C5C9C;
class Class_1_CE544E072BDF852F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_06B4C77324466385_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11EF27F0)
#define CLASS_2_06B4C77324466385_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11EF28C0)
#define CLASS_2_06B4C77324466385_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x11EF22C0)
#define CLASS_2_06B4C77324466385_METHOD_2_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0x11EF2240)
#define CLASS_2_06B4C77324466385_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x11EF1FB0)
#define CLASS_2_06B4C77324466385_METHOD_2_A9AD653B831D7970_OFFSET UNITYSDK_OFFSET(0x11EF2620)
#define CLASS_2_06B4C77324466385_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x11EF2700)
#define CLASS_2_06B4C77324466385_METHOD_2_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x11EF2400)
#define CLASS_2_06B4C77324466385_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x11EF2010)
#define CLASS_2_06B4C77324466385_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x11EF2090)
#define CLASS_2_06B4C77324466385_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x11EF21A0)
#define CLASS_2_06B4C77324466385_ONRETURN_OFFSET UNITYSDK_OFFSET(0x11EF21F0)
#define CLASS_2_06B4C77324466385__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF2960)
#define CLASS_2_06B4C77324466385__ONBIND_OFFSET UNITYSDK_OFFSET(0x11EF1F60)
#define CLASS_2_06B4C77324466385__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11EF2140)

inline static constexpr unsigned int Class_2_06B4C77324466385_TypeDefinitionIndex = 71434;

class Class_2_06B4C77324466385 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* AHFNCALBDIO; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::String*>* DDPEAAMMCIA; // 0x68
	::UnityEngine::Transform* IHCGLBPNDFC; // 0x70
	::UnityEngine::Transform* JAJJKILBDDA; // 0x78
	::Class_1_B18A907A8E4C5C9C* HGIHOOECGEE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385__ONDISPOSE_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_47A94975B0610A2C(::Class_1_CE544E072BDF852F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE544E072BDF852F*))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_47A94975B0610A2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_DEA6ACF0B96986BD(::Class_1_CE544E072BDF852F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE544E072BDF852F*))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::String* Method_2_A9AD653B831D7970(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_A9AD653B831D7970_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
