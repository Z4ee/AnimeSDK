#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x19FDF9F0)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x19FDF970)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x19FDF950)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x19FDF930)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x19FDF990)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x19FDF980)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x19FDF960)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x19FDF940)
#define RPG_CLIENT_BILLBOARD_ONLINEPLAYERNAMEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDB5C0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int OnlinePlayerNameBillboardData_TypeDefinitionIndex = 71388;

	class OnlinePlayerNameBillboardData : public ::System::Object
	{
	public:
		::System::String* _PlayerName_k__BackingField; // 0x10
		::System::UInt32 _PlayerIndex_k__BackingField; // 0x18
		::System::Boolean _IsSelf_k__BackingField; // 0x1C

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
