#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleResultInfo.h"

class Class_1_0026438A483A8753;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPScoreData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x19FE47B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_LOCALPLAYERTITLEDATA_OFFSET UNITYSDK_OFFSET(0x19FE4D60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_SCOREDATAS_OFFSET UNITYSDK_OFFSET(0x19FE4DA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATEPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x19FE4DE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATETITLEDATA_OFFSET UNITYSDK_OFFSET(0x19FE4D80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x19FE4DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_LOCALPLAYERTITLEDATA_OFFSET UNITYSDK_OFFSET(0x19FE4D70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_SCOREDATAS_OFFSET UNITYSDK_OFFSET(0x19FE4DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATEPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x19FE4DF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATETITLEDATA_OFFSET UNITYSDK_OFFSET(0x19FE4D90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x19FE4DD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE4E00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPBattleResultInfo_TypeDefinitionIndex = 72232;

	class DiceCombatV2PvPBattleResultInfo : public ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* _TeamMateTitleData_k__BackingField; // 0x48
		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* _LocalPlayerTitleData_k__BackingField; // 0x50
		::RPG::Client::PlayerPlatformInfo* _TeamMatePlatformInfo_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* _ScoreDatas_k__BackingField; // 0x60
		::System::UInt32 _TotalScore_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* get_LocalPlayerTitleData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_LOCALPLAYERTITLEDATA_OFFSET))(this);
		}

		::System::Void set_LocalPlayerTitleData(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_LOCALPLAYERTITLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* get_TeamMateTitleData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATETITLEDATA_OFFSET))(this);
		}

		::System::Void set_TeamMateTitleData(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATETITLEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* get_ScoreDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_SCOREDATAS_OFFSET))(this);
		}

		::System::Void set_ScoreDatas(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_SCOREDATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_TeamMatePlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATEPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_TeamMatePlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATEPLATFORMINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPBattleResultInfo* Create(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a1, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a2, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a3, ::Class_1_0026438A483A8753* a4)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::Class_1_0026438A483A8753*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
