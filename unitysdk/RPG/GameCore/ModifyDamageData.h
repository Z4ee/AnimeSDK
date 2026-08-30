#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYDAMAGEDATA_METHOD_3_12B426185D634608_OFFSET UNITYSDK_OFFSET(0x1D1B7D40)
#define RPG_GAMECORE_MODIFYDAMAGEDATA_METHOD_3_9FE61590282F36CD_OFFSET UNITYSDK_OFFSET(0x1D1B61B0)
#define RPG_GAMECORE_MODIFYDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyDamageData_TypeDefinitionIndex = 23302;

	class ModifyDamageData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AttackData_DamageValue; // 0x18
		::RPG::GameCore::DynamicFloat* AttackData_DamagePercentage; // 0x20
		::RPG::GameCore::DynamicFloat* AttackData_FinalDamageMax; // 0x28
		::RPG::GameCore::DynamicFloat* AttackData_BreakBaseDamage; // 0x30
		::RPG::GameCore::DynamicFloat* AttackData_BreakDamagePercentage; // 0x38
		::RPG::GameCore::DynamicFloat* AttackData_ElationDamagePercentage; // 0x40
		::RPG::GameCore::DynamicFloat* AttackData_SPHitRatio; // 0x48
		::RPG::GameCore::DynamicFloat* Attacker_AttackAddedRatio; // 0x50
		::RPG::GameCore::DynamicFloat* Attacker_AttackDelta; // 0x58
		::RPG::GameCore::DynamicFloat* Attacker_AttackConvert; // 0x60
		::RPG::GameCore::DynamicFloat* Attacker_PhysicalAddedRatio; // 0x68
		::RPG::GameCore::DynamicFloat* Attacker_FireAddedRatio; // 0x70
		::RPG::GameCore::DynamicFloat* Attacker_IceAddedRatio; // 0x78
		::RPG::GameCore::DynamicFloat* Attacker_ThunderAddedRatio; // 0x80
		::RPG::GameCore::DynamicFloat* Attacker_WindAddedRatio; // 0x88
		::RPG::GameCore::DynamicFloat* Attacker_QuantumAddedRatio; // 0x90
		::RPG::GameCore::DynamicFloat* Attacker_ImaginaryAddedRatio; // 0x98
		::RPG::GameCore::DynamicFloat* Attacker_AllDamageAddedRatio; // 0xA0
		::RPG::GameCore::DynamicFloat* Attacker_AllDamageTypeAddedRatio; // 0xA8
		::RPG::GameCore::DynamicFloat* Attacker_DotDamageAddedRatio; // 0xB0
		::RPG::GameCore::DynamicFloat* Attacker_BaseDamageMultiRatio; // 0xB8
		::RPG::GameCore::DynamicFloat* Attacker_StanceBreakAddedRatio; // 0xC0
		::RPG::GameCore::DynamicFloat* Attacker_ForceStanceBreakRatio; // 0xC8
		::RPG::GameCore::DynamicFloat* Attacker_BreakDamageAddedRatio; // 0xD0
		::RPG::GameCore::DynamicFloat* Attacker_BreakDamageExtraAddedRatio; // 0xD8
		::RPG::GameCore::DynamicFloat* Attacker_ElationDamageAddedRatio; // 0xE0
		::RPG::GameCore::DynamicFloat* Attacker_ElationDamageExtraAddedRatio; // 0xE8
		::RPG::GameCore::DynamicFloat* Attacker_PhysicalPenetrate; // 0xF0
		::RPG::GameCore::DynamicFloat* Attacker_FirePenetrate; // 0xF8
		::RPG::GameCore::DynamicFloat* Attacker_IcePenetrate; // 0x100
		::RPG::GameCore::DynamicFloat* Attacker_ThunderPenetrate; // 0x108
		::RPG::GameCore::DynamicFloat* Attacker_WindPenetrate; // 0x110
		::RPG::GameCore::DynamicFloat* Attacker_QuantumPenetrate; // 0x118
		::RPG::GameCore::DynamicFloat* Attacker_ImaginaryPenetrate; // 0x120
		::RPG::GameCore::DynamicFloat* Attacker_AllDamageTypePenetrate; // 0x128
		::RPG::GameCore::DynamicFloat* Attacker_FatigueRatio; // 0x130
		::RPG::GameCore::DynamicFloat* Attacker_CriticalChance; // 0x138
		::RPG::GameCore::DynamicFloat* Attacker_CriticalDamage; // 0x140
		::RPG::GameCore::DynamicFloat* Attacker_FixedCriticalChance; // 0x148
		::RPG::GameCore::DynamicFloat* Attacker_FixedCriticalDamage; // 0x150
		::RPG::GameCore::DynamicFloat* Attacker_MaxCriticalChance; // 0x158
		::RPG::GameCore::DynamicFloat* Attacker_MaxCriticalDamage; // 0x160
		::RPG::GameCore::DynamicFloat* Attacker_SPRatio; // 0x168
		::RPG::GameCore::DynamicFloat* AttackerSkill_SPBase; // 0x170
		::RPG::GameCore::DynamicFloat* AttackData_ElationPointNumDelta; // 0x178
		::RPG::GameCore::DynamicFloat* Defender_DefenceAddedRatio; // 0x180
		::RPG::GameCore::DynamicFloat* Defender_DefenceDelta; // 0x188
		::RPG::GameCore::DynamicFloat* Defender_DefenceConvert; // 0x190
		::RPG::GameCore::DynamicFloat* Defender_PhysicalResistance; // 0x198
		::RPG::GameCore::DynamicFloat* Defender_FireResistance; // 0x1A0
		::RPG::GameCore::DynamicFloat* Defender_IceResistance; // 0x1A8
		::RPG::GameCore::DynamicFloat* Defender_ThunderResistance; // 0x1B0
		::RPG::GameCore::DynamicFloat* Defender_WindResistance; // 0x1B8
		::RPG::GameCore::DynamicFloat* Defender_QuantumResistance; // 0x1C0
		::RPG::GameCore::DynamicFloat* Defender_ImaginaryResistance; // 0x1C8
		::RPG::GameCore::DynamicFloat* Defender_AllDamageTypeResistance; // 0x1D0
		::RPG::GameCore::DynamicFloat* Defender_AllDamageReduce; // 0x1D8
		::RPG::GameCore::DynamicFloat* Defender_PhysicalTakenRatio; // 0x1E0
		::RPG::GameCore::DynamicFloat* Defender_FireTakenRatio; // 0x1E8
		::RPG::GameCore::DynamicFloat* Defender_IceTakenRatio; // 0x1F0
		::RPG::GameCore::DynamicFloat* Defender_ThunderTakenRatio; // 0x1F8
		::RPG::GameCore::DynamicFloat* Defender_WindTakenRatio; // 0x200
		::RPG::GameCore::DynamicFloat* Defender_QuantumTakenRatio; // 0x208
		::RPG::GameCore::DynamicFloat* Defender_ImaginaryTakenRatio; // 0x210
		::RPG::GameCore::DynamicFloat* Defender_AllDamageTypeTakenRatio; // 0x218
		::RPG::GameCore::DynamicFloat* Defender_Monster_DamageTakenRatio; // 0x220
		::RPG::GameCore::DynamicFloat* Defender_PhysicalStanceBreakTakenRatio; // 0x228
		::RPG::GameCore::DynamicFloat* Defender_FireStanceBreakTakenRatio; // 0x230
		::RPG::GameCore::DynamicFloat* Defender_IceStanceBreakTakenRatio; // 0x238
		::RPG::GameCore::DynamicFloat* Defender_ThunderStanceBreakTakenRatio; // 0x240
		::RPG::GameCore::DynamicFloat* Defender_WindStanceBreakTakenRatio; // 0x248
		::RPG::GameCore::DynamicFloat* Defender_QuantumStanceBreakTakenRatio; // 0x250
		::RPG::GameCore::DynamicFloat* Defender_ImaginaryStanceBreakTakenRatio; // 0x258
		::RPG::GameCore::DynamicFloat* Defender_StanceWeakAddedRatio; // 0x260
		::RPG::GameCore::DynamicFloat* Defender_StanceBreakTakenRatio; // 0x268
		::RPG::GameCore::DynamicFloat* Defender_StanceBreakResistance; // 0x270
		::RPG::GameCore::DynamicFloat* AttackData_ConstFinalDamage; // 0x278
		::RPG::GameCore::DynamicFloat* AttackData_MortallyWonded; // 0x280
		::RPG::GameCore::DynamicFloat* AttackData_ForceCritical; // 0x288
		::RPG::GameCore::DynamicFloat* AttackData_CanIgnoreAttackTypeCritical; // 0x290
		::RPG::GameCore::DynamicFloat* AttackData_ElationPointNum; // 0x298
		::RPG::GameCore::DynamicFloat* AttackData_EnableElationPointMultiplier; // 0x2A0
		::System::Boolean AttackData_CanModifyTrueDamage; // 0x2A8
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAllDamageAddedRatio1; // 0x2B0
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAllDamageAddedRatio2; // 0x2B8
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAllDamageAddedRatio3; // 0x2C0
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAllDamageAddedRatio4; // 0x2C8
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAttackAddedRatio1; // 0x2D0
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAttackAddedRatio2; // 0x2D8
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAttackAddedRatio3; // 0x2E0
		::RPG::GameCore::DynamicFloat* Attacker_ExtraAttackAddedRatio4; // 0x2E8
		::RPG::GameCore::DynamicFloat* Defender_ExtraDefenceAddedRatio1; // 0x2F0
		::RPG::GameCore::DynamicFloat* Defender_ExtraDefenceAddedRatio2; // 0x2F8
		::RPG::GameCore::DynamicFloat* Defender_ExtraDefenceAddedRatio3; // 0x300
		::RPG::GameCore::DynamicFloat* Defender_ExtraDefenceAddedRatio4; // 0x308
		::RPG::GameCore::DynamicFloat* Attacker_ExtraLuckChance; // 0x310
		::RPG::GameCore::DynamicFloat* Attacker_ExtraLuckDamage; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FE61590282F36CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDamageData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDamageData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDATA_METHOD_3_9FE61590282F36CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12B426185D634608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDamageData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDamageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDATA_METHOD_3_12B426185D634608_OFFSET))(a1, a2);
		}
	};
}
