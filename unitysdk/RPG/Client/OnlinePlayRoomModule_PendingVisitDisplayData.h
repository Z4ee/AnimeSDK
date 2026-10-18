#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD9EB880)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xD9EB8A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD9EB890)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xD9EB8B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E7A80)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_PendingVisitDisplayData_TypeDefinitionIndex = 66399;

	class OnlinePlayRoomModule_PendingVisitDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData_k__BackingField; // 0x10
		::Enum_3_0A3761FE34514D6C_11 _RoomType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::PlayerBriefDisplayData* a1, ::Enum_3_0A3761FE34514D6C_11 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::Enum_3_0A3761FE34514D6C_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PlayerBriefDisplayData* get_PlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_PlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_11 get_RoomType()
		{
			return ((::Enum_3_0A3761FE34514D6C_11(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::Enum_3_0A3761FE34514D6C_11 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}
	};
}
