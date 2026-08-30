#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1121B250)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1121B210)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1121B2A0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_COSTVALUE_OFFSET UNITYSDK_OFFSET(0x1121B320)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_DAMAGEVALUEIGNOREPROTECT_OFFSET UNITYSDK_OFFSET(0x1121B2E0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x1121B300)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_FORCEDAMAGEPREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x1121B2C0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_INIT_OFFSET UNITYSDK_OFFSET(0x1121B190)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1121B2B0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_COSTVALUE_OFFSET UNITYSDK_OFFSET(0x1121B330)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_DAMAGEVALUEIGNOREPROTECT_OFFSET UNITYSDK_OFFSET(0x1121B2F0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x1121B310)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_FORCEDAMAGEPREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x1121B2D0)
#define RPG_GAMECORE_ABILITYSTANCEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1121B340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStanceDamage_TypeDefinitionIndex = 56774;

	class AbilityStanceDamage : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _Attacker_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _DamageValue_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CostValue_k__BackingField; // 0x28
		::System::UInt32 _EntityRuntimeID; // 0x30
		::RPG::GameCore::FixPoint _DamageValueIgnoreProtect_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _ForceDamagePreviewValue_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Attacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_ATTACKER_OFFSET))(this);
		}

		::System::Void set_Attacker(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_ATTACKER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ForceDamagePreviewValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_FORCEDAMAGEPREVIEWVALUE_OFFSET))(this);
		}

		::System::Void set_ForceDamagePreviewValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_FORCEDAMAGEPREVIEWVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DamageValueIgnoreProtect()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_DAMAGEVALUEIGNOREPROTECT_OFFSET))(this);
		}

		::System::Void set_DamageValueIgnoreProtect(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_DAMAGEVALUEIGNOREPROTECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DamageValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_DAMAGEVALUE_OFFSET))(this);
		}

		::System::Void set_DamageValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_DAMAGEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CostValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_GET_COSTVALUE_OFFSET))(this);
		}

		::System::Void set_CostValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTANCEDAMAGE_SET_COSTVALUE_OFFSET))(this, a1);
		}
	};
}
