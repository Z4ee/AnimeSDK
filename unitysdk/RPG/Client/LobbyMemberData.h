#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_10.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_FF03248024BAA97A;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA6EDB40)
#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA6ED890)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0xA6EDEF0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xA6EDF50)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xA6EDE40)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA6EDE60)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0xA6EE020)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0xA6EE030)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0xA6EDF70)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA6EDE00)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xA6EDE20)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xA6EDF30)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0xA6EDF10)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xA6EDDE0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET UNITYSDK_OFFSET(0xA6EDD90)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET UNITYSDK_OFFSET(0xA6EDD40)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0xA6EDF00)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xA6EDF60)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xA6EDE50)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA6EDE10)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xA6EDE30)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xA6EDF40)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0xA6EDF20)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xA6EDDF0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET UNITYSDK_OFFSET(0xA6EDA80)
#define RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ED9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyMemberData_TypeDefinitionIndex = 60560;

	class LobbyMemberData : public ::System::Object
	{
	public:
		::Class_1_0C36FD2A7876DF8E* _ExtraInfo_k__BackingField; // 0x10
		::System::String* _NickName_k__BackingField; // 0x18
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x20
		::Enum_3_DB663931210BBC27_10 _CharacterType_k__BackingField; // 0x28
		::System::UInt32 _UID_k__BackingField; // 0x2C
		::System::UInt32 _Level_k__BackingField; // 0x30
		::Enum_3_F80BFD5B986D5503_3 _StatusType_k__BackingField; // 0x34
		::System::UInt32 _HeadIconID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LobbyMemberData* Create(::Class_1_FF03248024BAA97A* memberInfo)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::Class_1_FF03248024BAA97A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET))(memberInfo);
		}

		static ::RPG::Client::LobbyMemberData* Create_1(::System::String* nickname, ::System::UInt32 headIconID, ::System::UInt32 playerUid, ::System::UInt32 level, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET))(nickname, headIconID, playerUid, level, birdID);
		}

		::System::Void SyncInfo(::Class_1_FF03248024BAA97A* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET))(this, memberInfo);
		}

		::System::Void SetNickName(::System::String* nickname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET))(this, nickname);
		}

		::System::Void SetHeadIconID(::System::UInt32 headIconID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET))(this, headIconID);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_10 get_CharacterType()
		{
			return ((::Enum_3_DB663931210BBC27_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET))(this);
		}

		::System::Void set_CharacterType(::Enum_3_DB663931210BBC27_10 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_3 get_StatusType()
		{
			return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET))(this);
		}

		::System::Void set_StatusType(::Enum_3_F80BFD5B986D5503_3 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET))(this, value);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET))(this, value);
		}

		::Class_1_0C36FD2A7876DF8E* get_ExtraInfo()
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Void set_ExtraInfo(::Class_1_0C36FD2A7876DF8E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET))(this);
		}
	};
}
