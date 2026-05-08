#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D02A7ACA469A7C7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLONE_OFFSET UNITYSDK_OFFSET(0x17449DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17447CC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x174422A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_GET_ANIMEVENTATTACK_OFFSET UNITYSDK_OFFSET(0x1741B420)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17447D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17442320)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_SET_ANIMEVENTATTACK_OFFSET UNITYSDK_OFFSET(0x174498B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17449EA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x17449900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackProperty_TypeDefinitionIndex = 72141;

	class ConfigEntityAttackProperty : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigEntityAttackProperty** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigEntityAttackProperty**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_TypeDefinitionIndex)->GetStaticField(0x34830);
		}
		// static const ::System::String* CONFIG_PATH; // 0x0
		::MoleMole::Config::DynamicInt* DestructionDurability; // 0x10
		::MoleMole::Config::DynamicFloat* ExhaustedChaseValue; // 0x18
		::Il2CppArray<::System::String*>* TagTemplateList; // 0x20
		::Il2CppArray<::System::String*>* ZoneTags; // 0x28
		::MoleMole::Config::DynamicInt* DamageBreakLevel; // 0x30
		::MoleMole::Config::DynamicInt* BackupAttackerFrameHalt; // 0x38
		::System::String* AttackerTimeSlowKey; // 0x40
		::MoleMole::Config::DynamicInt* TriggerBuffLevel; // 0x48
		::MoleMole::Config::DynamicFloat* ElementAccumulationValue; // 0x50
		::MoleMole::Config::DynamicInt* BackupFrameHalt; // 0x58
		::MoleMole::Config::DynamicInt* FrameHalt; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* timeSlowList; // 0x68
		::MoleMole::Config::DynamicInt* DestructionClass; // 0x70
		::MoleMole::Config::DynamicFloat* EtherPurifyPercentage; // 0x78
		::System::String* AbilityTargetKey; // 0x80
		::Il2CppArray<::System::String*>* ZoneTagsTemplateList; // 0x88
		::MoleMole::Config::DynamicFloat* DamageBreakLevelProbability; // 0x90
		::System::String* OverrideBackupShake; // 0x98
		::MoleMole::Config::DynamicFloat* EtherInfectionPercentage; // 0xA0
		::System::String* AttackeeTimeSlowKey; // 0xA8
		::MoleMole::Config::DynamicFloat* BreakStunRatio; // 0xB0
		::MoleMole::Config::ConfigHitEffect* GroundHitEffect; // 0xB8
		::System::String* StandardConfigKey; // 0xC0
		::MoleMole::Config::DynamicInt* AttackerFrameHalt; // 0xC8
		::MoleMole::Config::DynamicFloat* DamagePercentage; // 0xD0
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyFrameHalt; // 0xD8
		::MoleMole::Config::DynamicInt* OverrideDamageStaggerLevel; // 0xE0
		::Il2CppArray<::System::String*>* ZoneTagsBlacklist; // 0xE8
		::Il2CppArray<::System::String*>* ZoneTagsTemplateBlacklist; // 0xF0
		::MoleMole::Config::DynamicFloat* AddedDamageValue; // 0xF8
		::System::String* OverrideBackupHitGround; // 0x100
		::Il2CppArray<::System::String*>* TagList; // 0x108
		::MoleMole::Config::ConfigHitEffect* DownHitEffect; // 0x110
		::MoleMole::Config::DynamicFloat* ExhaustedAccumulationValue; // 0x118
		::MoleMole::Config::ConfigHitEffect* SkyHitEffect; // 0x120
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyAttackerFrameHalt; // 0x128
		::System::String* DistanceAttenuationCurve; // 0x130
		::MoleMole::Config::HitStrengthType HitStrenType; // 0x138
		::System::Boolean BanDamage; // 0x13C
		::System::Boolean UseDistanceAttenuation; // 0x13D
		::System::Boolean IsSkipDefAttack; // 0x13E
		::System::Boolean IsIgnoreWallCheck; // 0x13F
		::MoleMole::Config::HitDirectionType OverrideHitAttackeeDirType; // 0x140
		::MoleMole::Config::AttackPropConfigType AttackPropConfigEnum; // 0x144
		::System::Boolean IsHeal; // 0x148
		::System::Boolean IgnoreEvadeDummy; // 0x149
		::System::Boolean Allied; // 0x14A
		::System::Boolean IsIndirect; // 0x14B
		::System::Single DamageTextWaitTime; // 0x14C
		::System::Int32 AtkSourceInt; // 0x150
		::Enum_3_6D02A7ACA469A7C7 AtkSourceType; // 0x154
		::MoleMole::Config::DamageElementType DamageElement; // 0x158
		::System::Boolean ForceDamageInvincibleTarget; // 0x15C
		::System::Boolean ForceDamageInWitchSlow; // 0x15D
		::System::Boolean isNoAnimAttackEvent; // 0x15E
		::System::Boolean IsCauseStun; // 0x15F
		::System::Int32 DamageTextID; // 0x160
		::MoleMole::Config::SpecialDamageTextType SpecialDamageTextType; // 0x164
		::MoleMole::Config::HitAnimDirectionType AnimDirectionType; // 0x168
		::MoleMole::Config::DamageHitType DamageHitType; // 0x16C
		::MoleMole::Config::HitDataType HitType; // 0x170
		::System::Boolean IsUseAbilityTargetKey; // 0x174
		::System::Boolean IsUseBackupFrameHalt; // 0x175
		::System::Boolean IsIndirectTriggerCounter; // 0x176
		::System::Boolean IsCauseExhausted; // 0x177
		::System::Boolean Neutral; // 0x178
		::System::Boolean ForceDamageBlockTarget; // 0x179
		::System::Boolean IsUseBackupGroundHitHeavyFrameHalt; // 0x17A
		::System::Boolean OverrideDamageElementByAttackerElement; // 0x17B
		::MoleMole::Config::HitForwardType AttackHitForwardType; // 0x17C
		::System::Boolean IsHeavyAttack; // 0x180
		::System::Boolean Enemy; // 0x181

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean get_AnimEventAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_GET_ANIMEVENTATTACK_OFFSET))(this);
		}

		::System::Void set_AnimEventAttack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_SET_ANIMEVENTATTACK_OFFSET))(this, value);
		}

		::MoleMole::Config::ConfigEntityAttackProperty* Clone()
		{
			return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLONE_OFFSET))(this);
		}
	};
}
