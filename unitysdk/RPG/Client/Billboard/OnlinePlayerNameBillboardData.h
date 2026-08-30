#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD8E350)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1BD8E2D0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1BD8E2B0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1BD8E290)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BD8E2F0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1BD8E2E0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1BD8E2C0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1BD8E2A0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD89ED0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int OnlinePlayerNameBillboardData_TypeDefinitionIndex = 74694;

	class OnlinePlayerNameBillboardData : public ::System::Object
	{
	public:
		::System::String* _PlayerName_k__BackingField; // 0x10
		::System::Boolean _IsSelf_k__BackingField; // 0x18
		::System::UInt32 _PlayerIndex_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_PlayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::Void set_PlayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_PlayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Void set_IsSelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_ISSELF_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
