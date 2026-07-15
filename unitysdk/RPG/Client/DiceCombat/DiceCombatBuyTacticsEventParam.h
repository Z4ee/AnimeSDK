#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x180C1BE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0x180C1C00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x180C1BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0x180C1C10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x180C1BD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBuyTacticsEventParam_TypeDefinitionIndex = 72248;

	class DiceCombatBuyTacticsEventParam : public ::System::Object
	{
	public:
		::System::Boolean _IsLocalPlayer_k__BackingField; // 0x10
		::System::Int32 _TacticsIndex_k__BackingField; // 0x14

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
