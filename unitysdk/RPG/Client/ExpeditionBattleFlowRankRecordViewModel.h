#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleRankViewModel; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCEF7E90)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_RANKVALUE_OFFSET UNITYSDK_OFFSET(0xCEF77D0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_RANK_OFFSET UNITYSDK_OFFSET(0xCEF7790)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_STARCNT_OFFSET UNITYSDK_OFFSET(0xCEF77B0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCEF7EA0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_RANK_OFFSET UNITYSDK_OFFSET(0xCEF77A0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_STARCNT_OFFSET UNITYSDK_OFFSET(0xCEF77C0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF7EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowRankRecordViewModel_TypeDefinitionIndex = 63976;

	class ExpeditionBattleFlowRankRecordViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleRankViewModel* _Rank_k__BackingField; // 0x10
		::System::Boolean _IsNewRecord_k__BackingField; // 0x18
		::System::UInt32 _StarCnt_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* get_Rank()
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::Client::ExpeditionBattleRankViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleRankViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_STARCNT_OFFSET))(this);
		}

		::System::Void set_StarCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_STARCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RankValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_RANKVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWRANKRECORDVIEWMODEL_SET_ISNEWRECORD_OFFSET))(this, a1);
		}
	};
}
