#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0xCEF7590)
#define RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT_SET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0xCEF75A0)
#define RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF75B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleCommonStageStartedEvent_TypeDefinitionIndex = 63932;

	class ExpeditionBattleCommonStageStartedEvent : public ::System::Object
	{
	public:
		::System::UInt32 _LevelIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT_GET_LEVELINDEX_OFFSET))(this);
		}

		::System::Void set_LevelIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLECOMMONSTAGESTARTEDEVENT_SET_LEVELINDEX_OFFSET))(this, a1);
		}
	};
}
