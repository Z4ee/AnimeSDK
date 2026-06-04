#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_METHOD_3_0BC6F92E2702B196_OFFSET UNITYSDK_OFFSET(0x1968D5E0)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_METHOD_3_A274B2D3440BBB56_OFFSET UNITYSDK_OFFSET(0x1968D720)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1968E260)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1968D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageByAttackProperty_TypeDefinitionIndex = 21360;

	class DamageByAttackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackData* AttackProperty; // 0x20
		::System::Boolean TriggerHitSound; // 0x28
		::System::String* SpecialHitSoundEvent; // 0x30
		::System::Boolean CanTriggerLastKill; // 0x38
		::System::Boolean IsConvert; // 0x39
		::System::String* EffectMessage; // 0x40
		::RPG::GameCore::AttackType AttackType; // 0x48
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::System::Boolean CanOverkill; // 0x58
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x60
		::System::Boolean IsHitAnimPerformanceDelay; // 0x68
		::RPG::GameCore::TargetEvaluator* OverrideAttacker; // 0x70
		::RPG::GameCore::TargetEvaluator* OverrideDamagePropertySource; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterHit; // 0x80
		::System::Boolean DealAfterRootHitEnd; // 0x88
		::System::Boolean EqualSplitInTargets; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BC6F92E2702B196(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageByAttackProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageByAttackProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_METHOD_3_0BC6F92E2702B196_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A274B2D3440BBB56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_METHOD_3_A274B2D3440BBB56_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_SHAREBYCOPY_OFFSET))(this);
		}
	};
}
