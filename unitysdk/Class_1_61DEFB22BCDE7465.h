#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9A122A5F063AF6FF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }

#define CLASS_1_61DEFB22BCDE7465_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x14282970)
#define CLASS_1_61DEFB22BCDE7465_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x142827D0)
#define CLASS_1_61DEFB22BCDE7465_METHOD_1_0FF371AF1EE27BCD_OFFSET UNITYSDK_OFFSET(0x142826B0)
#define CLASS_1_61DEFB22BCDE7465_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x14282820)
#define CLASS_1_61DEFB22BCDE7465_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x142828F0)
#define CLASS_1_61DEFB22BCDE7465_METHOD_1_AA755CDE7CA414B9_OFFSET UNITYSDK_OFFSET(0x14282500)
#define CLASS_1_61DEFB22BCDE7465_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x14282980)
#define CLASS_1_61DEFB22BCDE7465__CTOR_OFFSET UNITYSDK_OFFSET(0x142826A0)

inline static constexpr unsigned int Class_1_61DEFB22BCDE7465_TypeDefinitionIndex = 68251;

class Class_1_61DEFB22BCDE7465 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType _EffectType_k__BackingField; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465__CTOR_OFFSET))(this);
	}

	static ::Class_1_61DEFB22BCDE7465* Method_1_AA755CDE7CA414B9(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Camera* a5)
	{
		return ((::Class_1_61DEFB22BCDE7465*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_METHOD_1_AA755CDE7CA414B9_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0FF371AF1EE27BCD(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_METHOD_1_0FF371AF1EE27BCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::Class_1_9A122A5F063AF6FF* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_9A122A5F063AF6FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType get_EffectType()
	{
		return ((::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_GET_EFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_EffectType(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + CLASS_1_61DEFB22BCDE7465_SET_EFFECTTYPE_OFFSET))(this, a1);
	}
};
