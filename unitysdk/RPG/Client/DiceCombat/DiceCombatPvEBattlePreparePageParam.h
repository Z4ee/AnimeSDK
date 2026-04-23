#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA132C10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA132BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA132BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA132C00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA132BE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA132BC0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPvEBattlePreparePageParam_TypeDefinitionIndex = 69889;

	class DiceCombatPvEBattlePreparePageParam : public ::System::Object
	{
	public:
		::System::UInt32 _StageID_k__BackingField; // 0x10
		::System::Boolean _ShowImmediately_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET))(this, value);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* Create(::System::UInt32 stageID, ::System::Boolean showImmediately)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(stageID, showImmediately);
		}
	};
}
