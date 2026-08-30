#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ParkourGameFunctionInfo; }
namespace RPG::Client { class ParkourGameLockTargetInfo; }
namespace RPG::Client { class ParkourGameSkillInfo; }

#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0xDA37BD0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xDA37B50)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDA37B30)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xDA37B10)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xDA37BC0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0xDA37B90)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0xDA37BB0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xDA37B70)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xDA37B60)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xDA37B40)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0xDA37B20)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0xDA37BA0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xDA37B80)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATEMINIMAP_OFFSET UNITYSDK_OFFSET(0xDA37C40)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0xDA37C90)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA37BE0)
#define RPG_CLIENT_PARKOURGAMEPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDA34E50)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGamePlayerInfo_TypeDefinitionIndex = 61938;

	class ParkourGamePlayerInfo : public ::System::Object
	{
	public:
		::RPG::Client::ParkourGameLockTargetInfo* _LockTarget_k__BackingField; // 0x10
		::RPG::Client::ParkourGameSkillInfo* _Skill_k__BackingField; // 0x18
		::RPG::Client::ParkourGameFunctionInfo* _SpeedUp_k__BackingField; // 0x20
		::UnityEngine::Vector2 _MiniMapPosition_k__BackingField; // 0x28
		::System::Single _Speed_k__BackingField; // 0x30
		::System::Single _SpeedPercent_k__BackingField; // 0x34
		::System::Int32 _Rank_k__BackingField; // 0x38
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x3C

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
