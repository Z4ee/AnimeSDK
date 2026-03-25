#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x94786D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9478790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0x94787D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x94787B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_PVESTAGEID_OFFSET UNITYSDK_OFFSET(0x94787F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_RANKLEVELDATA_OFFSET UNITYSDK_OFFSET(0x9478810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x94787A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0x94787E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x94787C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_PVESTAGEID_OFFSET UNITYSDK_OFFSET(0x9478800)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_RANKLEVELDATA_OFFSET UNITYSDK_OFFSET(0x9478820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x94786C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameLoadingParam_TypeDefinitionIndex = 61959;

	class DiceCombatGameLoadingParam : public ::System::Object
	{
	public:
		::System::Action* _Callback_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatRankLevelData* _RankLevelData_k__BackingField; // 0x18
		::System::UInt32 _PVEStageID_k__BackingField; // 0x20
		::System::Boolean _IsFriendPVP_k__BackingField; // 0x24
		::System::Boolean _IsPVP_k__BackingField; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* Create(::System::Action* callback, ::System::Boolean isPVP, ::System::Boolean isFriendPVP, ::System::UInt32 pveStageID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* rankLevelData)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*(*)(::System::Action*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_CREATE_OFFSET))(callback, isPVP, isFriendPVP, pveStageID, rankLevelData);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_CALLBACK_OFFSET))(this, value);
		}

		::System::Boolean get_IsPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPVP(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISPVP_OFFSET))(this, value);
		}

		::System::Boolean get_IsFriendPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISFRIENDPVP_OFFSET))(this);
		}

		::System::Void set_IsFriendPVP(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISFRIENDPVP_OFFSET))(this, value);
		}

		::System::UInt32 get_PVEStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_PVESTAGEID_OFFSET))(this);
		}

		::System::Void set_PVEStageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_PVESTAGEID_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatRankLevelData* get_RankLevelData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_RANKLEVELDATA_OFFSET))(this);
		}

		::System::Void set_RankLevelData(::RPG::Client::DiceCombat::DiceCombatRankLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_RANKLEVELDATA_OFFSET))(this, value);
		}
	};
}
