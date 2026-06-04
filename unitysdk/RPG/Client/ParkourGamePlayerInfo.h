#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ParkourGameFunctionInfo; }
namespace RPG::Client { class ParkourGameLockTargetInfo; }
namespace RPG::Client { class ParkourGameSkillInfo; }

#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xC343570)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xC3434F0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3434D0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC3434B0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xC343560)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0xC343530)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0xC343550)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xC343510)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xC343500)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3434E0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC3434C0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0xC343540)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xC343520)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATEMINIMAP_OFFSET UNITYSDK_OFFSET(0xC3435E0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0xC343630)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xC343580)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC340440)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGamePlayerInfo_TypeDefinitionIndex = 57837;

	class ParkourGamePlayerInfo : public ::System::Object
	{
	public:
		::RPG::Client::ParkourGameSkillInfo* _Skill_k__BackingField; // 0x10
		::RPG::Client::ParkourGameFunctionInfo* _SpeedUp_k__BackingField; // 0x18
		::RPG::Client::ParkourGameLockTargetInfo* _LockTarget_k__BackingField; // 0x20
		::UnityEngine::Vector2 _MiniMapPosition_k__BackingField; // 0x28
		::System::Single _SpeedPercent_k__BackingField; // 0x30
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x34
		::System::Int32 _Rank_k__BackingField; // 0x3C
		::System::Single _Speed_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_RANK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_MiniMapPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_MINIMAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MiniMapPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_MINIMAPPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_SpeedPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDPERCENT_OFFSET))(this);
		}

		::System::Void set_SpeedPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEEDPERCENT_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGameFunctionInfo* get_SpeedUp()
		{
			return ((::RPG::Client::ParkourGameFunctionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDUP_OFFSET))(this);
		}

		::RPG::Client::ParkourGameSkillInfo* get_Skill()
		{
			return ((::RPG::Client::ParkourGameSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SKILL_OFFSET))(this);
		}

		::RPG::Client::ParkourGameLockTargetInfo* get_LockTarget()
		{
			return ((::RPG::Client::ParkourGameLockTargetInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_LOCKTARGET_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMinimap(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATEMINIMAP_OFFSET))(this, a1);
		}

		::System::Void UpdateSpeed(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATESPEED_OFFSET))(this, a1, a2);
		}
	};
}
