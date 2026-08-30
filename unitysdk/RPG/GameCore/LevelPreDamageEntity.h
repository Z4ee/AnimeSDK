#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD2A430)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2A4D0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2A480)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x1DD2A580)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0x1DD2A540)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0x1DD2A5C0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1DD2A5A0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x1DD2A560)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1DD2A520)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0x1DD2A600)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERID_OFFSET UNITYSDK_OFFSET(0x1DD2A5E0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DD2A620)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DD2A640)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0x1DD2A660)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x1DD2A200)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0x1DD2A590)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0x1DD2A550)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0x1DD2A5D0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1DD2A5B0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x1DD2A570)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1DD2A530)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0x1DD2A610)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERID_OFFSET UNITYSDK_OFFSET(0x1DD2A5F0)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DD2A630)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DD2A650)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0x1DD2A670)
#define RPG_GAMECORE_LEVELPREDAMAGEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2A680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPreDamageEntity_TypeDefinitionIndex = 56916;

	class LevelPreDamageEntity : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* _AbilityID_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _AttackerEntityRef_k__BackingField; // 0x20
		::RPG::GameCore::AttackData* _AttackDataRef_k__BackingField; // 0x28
		::System::String* _CustomName_k__BackingField; // 0x30
		::Class_1_843DD6330B22E422* _DamageDataRef_k__BackingField; // 0x38
		::RPG::GameCore::GameEntity* _DefenderEntityRef_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _HPDamage_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _StanceDamage_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _StanceElementRatio_k__BackingField; // 0x58
		::System::UInt32 _AttackerID_k__BackingField; // 0x60
		::System::UInt32 _DefenderID_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPreDamageEntity* Init(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::AttackData* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8, ::System::String* a9)
		{
			return ((::RPG::GameCore::LevelPreDamageEntity*(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::AttackData*, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
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

		::Class_1_843DD6330B22E422* get_DamageDataRef()
		{
			return ((::Class_1_843DD6330B22E422*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DAMAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_DamageDataRef(::Class_1_843DD6330B22E422* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DAMAGEDATAREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackData* get_AttackDataRef()
		{
			return ((::RPG::GameCore::AttackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKDATAREF_OFFSET))(this);
		}

		::System::Void set_AttackDataRef(::RPG::GameCore::AttackData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKDATAREF_OFFSET))(this, a1);
		}

		::System::String* get_CustomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_CUSTOMNAME_OFFSET))(this);
		}

		::System::Void set_CustomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_CUSTOMNAME_OFFSET))(this, a1);
		}

		::System::String* get_AbilityID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ABILITYID_OFFSET))(this);
		}

		::System::Void set_AbilityID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ABILITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttackerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERID_OFFSET))(this);
		}

		::System::Void set_AttackerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_AttackerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_ATTACKERENTITYREF_OFFSET))(this);
		}

		::System::Void set_AttackerEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_ATTACKERENTITYREF_OFFSET))(this, a1);
		}

		::System::UInt32 get_DefenderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERID_OFFSET))(this);
		}

		::System::Void set_DefenderID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DefenderEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_DEFENDERENTITYREF_OFFSET))(this);
		}

		::System::Void set_DefenderEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_DEFENDERENTITYREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HPDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_HPDAMAGE_OFFSET))(this);
		}

		::System::Void set_HPDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_HPDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_StanceDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEDAMAGE_OFFSET))(this);
		}

		::System::Void set_StanceDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_StanceElementRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_GET_STANCEELEMENTRATIO_OFFSET))(this);
		}

		::System::Void set_StanceElementRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPREDAMAGEENTITY_SET_STANCEELEMENTRATIO_OFFSET))(this, a1);
		}
	};
}
