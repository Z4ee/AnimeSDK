#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xCC189C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0xCC189E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xCC189D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0xCC189F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC189B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBuyTacticsEventParam_TypeDefinitionIndex = 76161;

	class DiceCombatBuyTacticsEventParam : public ::System::Object
	{
	public:
		::System::Int32 _TacticsIndex_k__BackingField; // 0x10
		::System::Boolean _IsLocalPlayer_k__BackingField; // 0x14

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::Void set_IsLocalPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_ISLOCALPLAYER_OFFSET))(this, a1);
		}

		::System::Int32 get_TacticsIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_TACTICSINDEX_OFFSET))(this);
		}

		::System::Void set_TacticsIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_TACTICSINDEX_OFFSET))(this, a1);
		}
	};
}
