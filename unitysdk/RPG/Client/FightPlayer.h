#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_13;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTPLAYER_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xBA1EFF0)
#define RPG_CLIENT_FIGHTPLAYER_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xBA1F040)
#define RPG_CLIENT_FIGHTPLAYER_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xBA1EF90)
#define RPG_CLIENT_FIGHTPLAYER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xBA1F110)
#define RPG_CLIENT_FIGHTPLAYER_GET_UID_OFFSET UNITYSDK_OFFSET(0xBA1EF40)
#define RPG_CLIENT_FIGHTPLAYER_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xBA1F120)
#define RPG_CLIENT_FIGHTPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1EE70)

namespace RPG::Client
{
	inline static constexpr unsigned int FightPlayer_TypeDefinitionIndex = 64854;

	class FightPlayer : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_13* _BasicInfo; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_21DCD4640D389503_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_UID_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_NICKNAME_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_HEADICONID_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_HEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTPLAYER_SET_PLATFORMINFO_OFFSET))(this, a1);
		}
	};
}
