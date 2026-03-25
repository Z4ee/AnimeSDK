#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ParkourGameFunctionInfo; }
namespace RPG::Client { class ParkourGameLockTargetInfo; }
namespace RPG::Client { class ParkourGameSkillInfo; }

#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0x9F0E770)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9F0E6F0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F0E6D0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9F0E6B0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x9F0E760)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0x9F0E730)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0x9F0E750)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x9F0E710)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9F0E700)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F0E6E0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9F0E6C0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0x9F0E740)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x9F0E720)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATEMINIMAP_OFFSET UNITYSDK_OFFSET(0x9F0E7E0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0x9F0E830)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F0E780)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0B790)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGamePlayerInfo_TypeDefinitionIndex = 50203;

	class ParkourGamePlayerInfo : public ::System::Object
	{
	public:
		::RPG::Client::ParkourGameFunctionInfo* _SpeedUp_k__BackingField; // 0x10
		::RPG::Client::ParkourGameSkillInfo* _Skill_k__BackingField; // 0x18
		::RPG::Client::ParkourGameLockTargetInfo* _LockTarget_k__BackingField; // 0x20
		::UnityEngine::Vector2 _MiniMapPosition_k__BackingField; // 0x28
		::System::Int32 _Rank_k__BackingField; // 0x30
		::System::Single _SpeedPercent_k__BackingField; // 0x34
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x38
		::System::Single _Speed_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_RANK_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MiniMapPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_MINIMAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MiniMapPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_MINIMAPPOSITION_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_SpeedPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDPERCENT_OFFSET))(this);
		}

		::System::Void set_SpeedPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEEDPERCENT_OFFSET))(this, value);
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

		::System::Void Update(::System::Int32 rank, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATE_OFFSET))(this, rank, position);
		}

		::System::Void UpdateMinimap(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATEMINIMAP_OFFSET))(this, position);
		}

		::System::Void UpdateSpeed(::System::Single speed, ::System::Single speedPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATESPEED_OFFSET))(this, speed, speedPercent);
		}
	};
}
