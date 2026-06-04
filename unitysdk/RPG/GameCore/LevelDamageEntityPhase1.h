#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3D760)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3D800)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3D7B0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xCE3D890)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xCE3D870)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xCE3D8B0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xCE3D950)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xCE3D850)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xCE3D8D0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGE_OFFSET UNITYSDK_OFFSET(0xCE3D930)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE3D8F0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xCE3D910)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_INIT_OFFSET UNITYSDK_OFFSET(0xCE3D670)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ABILITYID_OFFSET UNITYSDK_OFFSET(0xCE3D8A0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKDATAREF_OFFSET UNITYSDK_OFFSET(0xCE3D880)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKERENTITYREF_OFFSET UNITYSDK_OFFSET(0xCE3D8C0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0xCE3D960)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DAMAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xCE3D860)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DEFENDERENTITYREF_OFFSET UNITYSDK_OFFSET(0xCE3D8E0)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGE_OFFSET UNITYSDK_OFFSET(0xCE3D940)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE3D900)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEELEMENTRATIO_OFFSET UNITYSDK_OFFSET(0xCE3D920)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3D970)
#define RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3D980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDamageEntityPhase1_TypeDefinitionIndex = 52983;

	class LevelDamageEntityPhase1 : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Class_1_843DD6330B22E422* _DamageDataRef_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _DefenderEntityRef_k__BackingField; // 0x20
		::System::String* _CustomName_k__BackingField; // 0x28
		::System::String* _AbilityID_k__BackingField; // 0x30
		::RPG::GameCore::AttackData* _AttackDataRef_k__BackingField; // 0x38
		::RPG::GameCore::GameEntity* _AttackerEntityRef_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _StanceDamage_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _HPChange_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _StanceElementRatio_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelDamageEntityPhase1* Init(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::AttackData* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8, ::System::String* a9)
		{
			return ((::RPG::GameCore::LevelDamageEntityPhase1*(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::AttackData*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
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

		::Class_1_843DD6330B22E422* get_DamageDataRef()
		{
			return ((::Class_1_843DD6330B22E422*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DAMAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_DamageDataRef(::Class_1_843DD6330B22E422* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DAMAGEDATAREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackData* get_AttackDataRef()
		{
			return ((::RPG::GameCore::AttackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKDATAREF_OFFSET))(this);
		}

		::System::Void set_AttackDataRef(::RPG::GameCore::AttackData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKDATAREF_OFFSET))(this, a1);
		}

		::System::String* get_AbilityID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ABILITYID_OFFSET))(this);
		}

		::System::Void set_AbilityID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ABILITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_AttackerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_ATTACKERENTITYREF_OFFSET))(this);
		}

		::System::Void set_AttackerEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_ATTACKERENTITYREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DefenderEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_DEFENDERENTITYREF_OFFSET))(this);
		}

		::System::Void set_DefenderEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_DEFENDERENTITYREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_StanceDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEDAMAGE_OFFSET))(this);
		}

		::System::Void set_StanceDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_StanceElementRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_STANCEELEMENTRATIO_OFFSET))(this);
		}

		::System::Void set_StanceElementRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_STANCEELEMENTRATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HPChange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_HPCHANGE_OFFSET))(this);
		}

		::System::Void set_HPChange(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_HPCHANGE_OFFSET))(this, a1);
		}

		::System::String* get_CustomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_GET_CUSTOMNAME_OFFSET))(this);
		}

		::System::Void set_CustomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1_SET_CUSTOMNAME_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDAMAGEENTITYPHASE1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
