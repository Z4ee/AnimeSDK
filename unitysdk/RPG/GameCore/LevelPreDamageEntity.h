#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_256D9F63CEA2C6FD;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA990300)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA9903B0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA990360)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xA990460)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xA990420)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9904A0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0xA990480)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xA990440)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xA990400)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9904E0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERID_OFFSET UNITYSDK_OFFSET(0xA9904C0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA990520)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGE_OFFSET UNITYSDK_OFFSET(0xA990500)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA990540)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xA990560)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xA990050)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xA990470)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xA990430)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9904B0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0xA990490)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xA990450)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xA990410)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9904F0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERID_OFFSET UNITYSDK_OFFSET(0xA9904D0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA990530)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGE_OFFSET UNITYSDK_OFFSET(0xA990510)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA990550)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xA990570)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA990580)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA990590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPreDamageEntity_TypeDefinitionIndex = 45634;

	class LevelPreDamageEntity : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* _CustomName_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _AttackerEntityRef_k__BackingField; // 0x20
		::System::String* _AbilityID_k__BackingField; // 0x28
		::Class_1_256D9F63CEA2C6FD* _DamageDataRef_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _DefenderEntityRef_k__BackingField; // 0x38
		::RPG::GameCore::AttackData* _AttackDataRef_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _StanceDamage_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _HPDamage_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _StanceElementRatio_k__BackingField; // 0x58
		::RPG::GameCore::FixPoint _HPDamageMultiplier_k__BackingField; // 0x60
		::System::UInt32 _AttackerID_k__BackingField; // 0x68
		::System::UInt32 _DefenderID_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPreDamageEntity* Init(::Class_1_256D9F63CEA2C6FD* pDamageData, ::RPG::GameCore::AttackData* pAttackData, ::System::String* sAbilityID, ::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pDefender, ::RPG::GameCore::FixPoint fHPDamage, ::RPG::GameCore::FixPoint fHPDamageMultiplier, ::RPG::GameCore::FixPoint fStanceElementRatio, ::RPG::GameCore::FixPoint fStanceDamage, ::System::String* customName)
		{
			return ((::RPG::GameCore::LevelPreDamageEntity*(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::AttackData*, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_INIT_OFFSET))(this, pDamageData, pAttackData, sAbilityID, pAttacker, pDefender, fHPDamage, fHPDamageMultiplier, fStanceElementRatio, fStanceDamage, customName);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETEVENTTYPE_OFFSET))(this);
		}

		::Class_1_256D9F63CEA2C6FD* get_DamageDataRef()
		{
			return ((::Class_1_256D9F63CEA2C6FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DAMAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_DamageDataRef(::Class_1_256D9F63CEA2C6FD* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DAMAGEDATAREF_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackData* get_AttackDataRef()
		{
			return ((::RPG::GameCore::AttackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKDATAREF_OFFSET))(this);
		}

		::System::Void set_AttackDataRef(::RPG::GameCore::AttackData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKDATAREF_OFFSET))(this, value);
		}

		::System::String* get_CustomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_CUSTOMNAME_OFFSET))(this);
		}

		::System::Void set_CustomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_CUSTOMNAME_OFFSET))(this, value);
		}

		::System::String* get_AbilityID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ABILITYID_OFFSET))(this);
		}

		::System::Void set_AbilityID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ABILITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_AttackerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERID_OFFSET))(this);
		}

		::System::Void set_AttackerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERID_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_AttackerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERENTITYREF_OFFSET))(this);
		}

		::System::Void set_AttackerEntityRef(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERENTITYREF_OFFSET))(this, value);
		}

		::System::UInt32 get_DefenderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERID_OFFSET))(this);
		}

		::System::Void set_DefenderID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERID_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DefenderEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERENTITYREF_OFFSET))(this);
		}

		::System::Void set_DefenderEntityRef(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERENTITYREF_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_HPDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGE_OFFSET))(this);
		}

		::System::Void set_HPDamage(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_HPDamageMultiplier()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_HPDamageMultiplier(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGEMULTIPLIER_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_StanceDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEDAMAGE_OFFSET))(this);
		}

		::System::Void set_StanceDamage(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEDAMAGE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_StanceElementRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEELEMENTRATIO_OFFSET))(this);
		}

		::System::Void set_StanceElementRatio(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEELEMENTRATIO_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
