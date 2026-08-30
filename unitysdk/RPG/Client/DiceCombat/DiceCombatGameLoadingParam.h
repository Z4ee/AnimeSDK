#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xCD283E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xCD284A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xCD284E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0xCD284C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_PVESTAGEID_OFFSET UNITYSDK_OFFSET(0xCD28500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_RANKLEVELDATA_OFFSET UNITYSDK_OFFSET(0xCD28520)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xCD284B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xCD284F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0xCD284D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_PVESTAGEID_OFFSET UNITYSDK_OFFSET(0xCD28510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_RANKLEVELDATA_OFFSET UNITYSDK_OFFSET(0xCD28530)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD283D0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameLoadingParam_TypeDefinitionIndex = 75646;

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

		static ::RPG::Client::DiceCombat::DiceCombatGameLoadingParam* Create(::System::Action* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* a5)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameLoadingParam*(*)(::System::Action*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_CALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPVP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISPVP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFriendPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_ISFRIENDPVP_OFFSET))(this);
		}

		::System::Void set_IsFriendPVP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_ISFRIENDPVP_OFFSET))(this, a1);
		}

		::System::UInt32 get_PVEStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_PVESTAGEID_OFFSET))(this);
		}

		::System::Void set_PVEStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_PVESTAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatRankLevelData* get_RankLevelData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_GET_RANKLEVELDATA_OFFSET))(this);
		}

		::System::Void set_RankLevelData(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMELOADINGPARAM_SET_RANKLEVELDATA_OFFSET))(this, a1);
		}
	};
}
