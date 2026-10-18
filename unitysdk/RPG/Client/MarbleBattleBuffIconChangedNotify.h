#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }

#define RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xD5604C0)
#define RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_BATTLESEAL_OFFSET UNITYSDK_OFFSET(0xD5604D0)
#define RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xD5604B0)
#define RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xD5604A0)
#define RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xD560370)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleBuffIconChangedNotify_TypeDefinitionIndex = 65833;

	class MarbleBattleBuffIconChangedNotify : public ::System::Object
	{
	public:
		::RPG::Client::MarbleBattleSealData* _BattleSeal_k__BackingField; // 0x10
		::System::UInt32 _BuffId_k__BackingField; // 0x18
		::System::Boolean _Active_k__BackingField; // 0x1C
		::System::UInt32 _EntityId_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_BuffId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_BUFFID_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_ACTIVE_OFFSET))(this);
		}

		::RPG::Client::MarbleBattleSealData* get_BattleSeal()
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEBUFFICONCHANGEDNOTIFY_GET_BATTLESEAL_OFFSET))(this);
		}
	};
}
