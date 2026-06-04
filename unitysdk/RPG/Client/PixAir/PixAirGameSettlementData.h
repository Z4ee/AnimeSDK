#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3D3D30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_AREASCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xC3D3FF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_FINALBATTLESCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC3D3F10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_LIFESCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F70)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xC3D3FD0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xC3D4050)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xC3D3FB0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_STOPPEDAREAINDEX_OFFSET UNITYSDK_OFFSET(0xC3D4010)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_TOTALAREACOUNT_OFFSET UNITYSDK_OFFSET(0xC3D4030)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_AREASCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F60)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_COREEQUIPID_OFFSET UNITYSDK_OFFSET(0xC3D4000)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_FINALBATTLESCORE_OFFSET UNITYSDK_OFFSET(0xC3D3FA0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC3D3F20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_LIFESCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xC3D3FE0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xC3D4060)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xC3D3FC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_STOPPEDAREAINDEX_OFFSET UNITYSDK_OFFSET(0xC3D4020)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_TOTALAREACOUNT_OFFSET UNITYSDK_OFFSET(0xC3D4040)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC3D3F40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0xC3D3E30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SYNCREWARDS_OFFSET UNITYSDK_OFFSET(0xC3D3E90)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D3E20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSettlementData_TypeDefinitionIndex = 73682;

	class PixAirGameSettlementData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x10
		::System::UInt32 _LifeScore_k__BackingField; // 0x18
		::System::UInt32 _AreaScore_k__BackingField; // 0x1C
		::System::Int32 _TotalAreaCount_k__BackingField; // 0x20
		::System::UInt32 _CoreEquipID_k__BackingField; // 0x24
		::System::UInt32 _FinalBattleScore_k__BackingField; // 0x28
		::System::UInt32 _StageID_k__BackingField; // 0x2C
		::System::UInt32 _PlaneID_k__BackingField; // 0x30
		::System::Int32 _StoppedAreaIndex_k__BackingField; // 0x34
		::System::UInt32 _TotalScore_k__BackingField; // 0x38
		::System::Boolean _IsWin_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirGameSettlementData* Create(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::RPG::Client::PixAir::PixAirGameSettlementData*(*)(::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SyncAreaInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SYNCAREAINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SyncRewards(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SYNCREWARDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_AREASCORE_OFFSET))(this);
		}

		::System::Void set_AreaScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_AREASCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LifeScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_LIFESCORE_OFFSET))(this);
		}

		::System::Void set_LifeScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_LIFESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_FINALBATTLESCORE_OFFSET))(this);
		}

		::System::Void set_FinalBattleScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_FINALBATTLESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoreEquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_COREEQUIPID_OFFSET))(this);
		}

		::System::Void set_CoreEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_COREEQUIPID_OFFSET))(this, a1);
		}

		::System::Int32 get_StoppedAreaIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_STOPPEDAREAINDEX_OFFSET))(this);
		}

		::System::Void set_StoppedAreaIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_STOPPEDAREAINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_TOTALAREACOUNT_OFFSET))(this);
		}

		::System::Void set_TotalAreaCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_TOTALAREACOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTDATA_SET_REWARDS_OFFSET))(this, a1);
		}
	};
}
