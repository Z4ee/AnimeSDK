#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_10.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_C50F5982E5600913;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBE4E680)
#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBE4E3D0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0xBE4EA10)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBE4EA70)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xBE4E960)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xBE4E980)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0xBE4EB40)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0xBE4EB50)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0xBE4EA90)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBE4E920)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xBE4E940)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xBE4EA50)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0xBE4EA30)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xBE4E900)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET UNITYSDK_OFFSET(0xBE4E8B0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET UNITYSDK_OFFSET(0xBE4E860)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0xBE4EA20)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBE4EA80)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xBE4E970)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBE4E930)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xBE4E950)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xBE4EA60)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0xBE4EA40)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xBE4E910)
#define RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET UNITYSDK_OFFSET(0xBE4E5C0)
#define RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4E510)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyMemberData_TypeDefinitionIndex = 61494;

	class LobbyMemberData : public ::System::Object
	{
	public:
		::System::String* _NickName_k__BackingField; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::Class_1_0C36FD2A7876DF8E* _ExtraInfo_k__BackingField; // 0x20
		::Enum_3_F80BFD5B986D5503_3 _StatusType_k__BackingField; // 0x28
		::System::UInt32 _HeadIconID_k__BackingField; // 0x2C
		::Enum_3_DB663931210BBC27_10 _CharacterType_k__BackingField; // 0x30
		::System::UInt32 _Level_k__BackingField; // 0x34
		::System::UInt32 _UID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LobbyMemberData* Create(::Class_1_C50F5982E5600913* a1)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LobbyMemberData* Create_1(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void SyncInfo(::Class_1_C50F5982E5600913* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET))(this, a1);
		}

		::System::Void SetNickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET))(this, a1);
		}

		::System::Void SetHeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_10 get_CharacterType()
		{
			return ((::Enum_3_DB663931210BBC27_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET))(this);
		}

		::System::Void set_CharacterType(::Enum_3_DB663931210BBC27_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET))(this, a1);
		}

		::Enum_3_F80BFD5B986D5503_3 get_StatusType()
		{
			return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET))(this);
		}

		::System::Void set_StatusType(::Enum_3_F80BFD5B986D5503_3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::Class_1_0C36FD2A7876DF8E* get_ExtraInfo()
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Void set_ExtraInfo(::Class_1_0C36FD2A7876DF8E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET))(this, a1);
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
