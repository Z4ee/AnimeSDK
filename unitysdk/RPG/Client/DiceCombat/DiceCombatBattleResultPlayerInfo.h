#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB79FEB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB79A760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0xB7A08E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7A08C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7A08A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xB7A0920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PVPSCORE_OFFSET UNITYSDK_OFFSET(0xB7A0900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0xB7A08F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7A08D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB7A08B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xB7A0930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PVPSCORE_OFFSET UNITYSDK_OFFSET(0xB7A0910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A0500)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleResultPlayerInfo_TypeDefinitionIndex = 70623;

	class DiceCombatBattleResultPlayerInfo : public ::System::Object
	{
	public:
		::RPG::Client::PlayerPlatformInfo* _PlayerPlatformInfo_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _CardInfo_k__BackingField; // 0x28
		::System::UInt32 _PvpScore_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* Create(::System::Boolean a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* Create_1(::System::String* a1, ::System::String* a2, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a3)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::System::String*, ::System::String*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_CREATE_1_OFFSET))(a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_CardInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_CARDINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_PvpScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PVPSCORE_OFFSET))(this);
		}

		::System::Void set_PvpScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PVPSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlayerPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_GET_PLAYERPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlayerPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTPLAYERINFO_SET_PLAYERPLATFORMINFO_OFFSET))(this, a1);
		}
	};
}
