#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1A43E560)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1A442F50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1A442F60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A442F40)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PVPBattlePreparePageParam_TypeDefinitionIndex = 72284;

	class DiceCombatV2PVPBattlePreparePageParam : public ::System::Object
	{
	public:
		::System::Boolean _ShowImmediately_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* Create(::System::Boolean a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, a1);
		}
	};
}
