#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DAMAGESTANCE_METHOD_3_061C97442D2AC9D3_OFFSET UNITYSDK_OFFSET(0x1D015CB0)
#define RPG_GAMECORE_DAMAGESTANCE_METHOD_3_CF89335E41FBCFCC_OFFSET UNITYSDK_OFFSET(0x1D015D80)
#define RPG_GAMECORE_DAMAGESTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D015D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageStance_TypeDefinitionIndex = 22813;

	class DamageStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* StanceDamageType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::RPG::GameCore::TargetEvaluator* AttackerTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* DefenderTargetType; // 0x30
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x38
		::System::Boolean ForceStanceDamage; // 0x40
		::System::Boolean IgnoreAttackerAddRatio; // 0x41
		::System::Boolean IgnoreMuteBreak; // 0x42
		::System::Boolean TriggerCountDown; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_061C97442D2AC9D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE_METHOD_3_061C97442D2AC9D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF89335E41FBCFCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE_METHOD_3_CF89335E41FBCFCC_OFFSET))(a1, a2);
		}
	};
}
