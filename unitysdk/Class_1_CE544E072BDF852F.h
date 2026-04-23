#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9A122A5F063AF6FF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }

#define CLASS_1_CE544E072BDF852F_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x129ECB50)
#define CLASS_1_CE544E072BDF852F_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x129EC980)
#define CLASS_1_CE544E072BDF852F_METHOD_1_0FF371AF1EE27BCD_OFFSET UNITYSDK_OFFSET(0x129EC860)
#define CLASS_1_CE544E072BDF852F_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x129EC9D0)
#define CLASS_1_CE544E072BDF852F_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x129ECAA0)
#define CLASS_1_CE544E072BDF852F_METHOD_1_CB3164B4A230532E_OFFSET UNITYSDK_OFFSET(0x129EC680)
#define CLASS_1_CE544E072BDF852F_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x129ECB60)
#define CLASS_1_CE544E072BDF852F__CTOR_OFFSET UNITYSDK_OFFSET(0x129EC850)

inline static constexpr unsigned int Class_1_CE544E072BDF852F_TypeDefinitionIndex = 65877;

class Class_1_CE544E072BDF852F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Single Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType _EffectType_k__BackingField; // 0x30
	::UnityEngine::Vector3 Field_1_2; // 0x34
	::UnityEngine::Vector3 Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F__CTOR_OFFSET))(this);
	}

	static ::Class_1_CE544E072BDF852F* Method_1_CB3164B4A230532E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Camera* a5)
	{
		return ((::Class_1_CE544E072BDF852F*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_METHOD_1_CB3164B4A230532E_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0FF371AF1EE27BCD(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_METHOD_1_0FF371AF1EE27BCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::Class_1_9A122A5F063AF6FF* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_9A122A5F063AF6FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType get_EffectType()
	{
		return ((::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_GET_EFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_EffectType(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + CLASS_1_CE544E072BDF852F_SET_EFFECTTYPE_OFFSET))(this, value);
	}
};
