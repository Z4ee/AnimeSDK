#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_256D9F63CEA2C6FD;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_CLEAR_OFFSET UNITYSDK_OFFSET(0xA981560)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA981600)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9815B0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xA981690)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xA981670)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9816B0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xA981770)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xA981650)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9816D0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA981750)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGE_OFFSET UNITYSDK_OFFSET(0xA981730)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA9816F0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xA981710)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_INIT_OFFSET UNITYSDK_OFFSET(0xA981450)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xA9816A0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xA981680)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9816C0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xA981780)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xA981660)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xA9816E0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA981760)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGE_OFFSET UNITYSDK_OFFSET(0xA981740)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA981700)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xA981720)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1__CTOR_OFFSET UNITYSDK_OFFSET(0xA981790)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9817A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDamageEntityPhase1_TypeDefinitionIndex = 45635;

	class LevelDamageEntityPhase1 : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* _AbilityID_k__BackingField; // 0x18
		::RPG::GameCore::AttackData* _AttackDataRef_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _AttackerEntityRef_k__BackingField; // 0x28
		::System::String* _CustomName_k__BackingField; // 0x30
		::Class_1_256D9F63CEA2C6FD* _DamageDataRef_k__BackingField; // 0x38
		::RPG::GameCore::GameEntity* _DefenderEntityRef_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _StanceDamage_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _HPChangeMultiplier_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _HPChange_k__BackingField; // 0x58
		::RPG::GameCore::FixPoint _StanceElementRatio_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDamageEntityPhase1* Init(::Class_1_256D9F63CEA2C6FD* pDamageData, ::RPG::GameCore::AttackData* pAttackData, ::RPG::GameCore::FixPoint fHPChange, ::RPG::GameCore::FixPoint fHPChangeMultiplier, ::System::String* sAbilityID, ::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pDefender, ::RPG::GameCore::FixPoint fStanceElementRatio, ::RPG::GameCore::FixPoint fStanceDamage, ::System::String* customName)
		{
			return ((::RPG::GameCore::LevelDamageEntityPhase1*(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::AttackData*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_INIT_OFFSET))(this, pDamageData, pAttackData, fHPChange, fHPChangeMultiplier, sAbilityID, pAttacker, pDefender, fStanceElementRatio, fStanceDamage, customName);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETEVENTTYPE_OFFSET))(this);
		}

		::Class_1_256D9F63CEA2C6FD* get_DamageDataRef()
		{
			return ((::Class_1_256D9F63CEA2C6FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DAMAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_DamageDataRef(::Class_1_256D9F63CEA2C6FD* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DAMAGEDATAREF_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackData* get_AttackDataRef()
		{
			return ((::RPG::GameCore::AttackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKDATAREF_OFFSET))(this);
		}

		::System::Void set_AttackDataRef(::RPG::GameCore::AttackData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKDATAREF_OFFSET))(this, value);
		}

		::System::String* get_AbilityID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ABILITYID_OFFSET))(this);
		}

		::System::Void set_AbilityID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ABILITYID_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_AttackerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKERENTITYREF_OFFSET))(this);
		}

		::System::Void set_AttackerEntityRef(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKERENTITYREF_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DefenderEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DEFENDERENTITYREF_OFFSET))(this);
		}

		::System::Void set_DefenderEntityRef(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DEFENDERENTITYREF_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_StanceDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEDAMAGE_OFFSET))(this);
		}

		::System::Void set_StanceDamage(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEDAMAGE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_StanceElementRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEELEMENTRATIO_OFFSET))(this);
		}

		::System::Void set_StanceElementRatio(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEELEMENTRATIO_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_HPChange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGE_OFFSET))(this);
		}

		::System::Void set_HPChange(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_HPChangeMultiplier()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_HPChangeMultiplier(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGEMULTIPLIER_OFFSET))(this, value);
		}

		::System::String* get_CustomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_CUSTOMNAME_OFFSET))(this);
		}

		::System::Void set_CustomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_CUSTOMNAME_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
