#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

namespace RPG::Client { class ClockParkEffectDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_CONTINUEGACHA_OFFSET UNITYSDK_OFFSET(0x1BC19E60)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_EXITGACHA_OFFSET UNITYSDK_OFFSET(0x1BC1A020)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETBUFFEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1BC199E0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETSORTEDLOTTERYLIST_OFFSET UNITYSDK_OFFSET(0x1BC1A1E0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1BC199A0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCGACHAINFO_OFFSET UNITYSDK_OFFSET(0x1BC12A80)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0x1BC11070)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC13C20)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0x1BC19310)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkSlotMachineState_TypeDefinitionIndex = 61596;

	class ClockParkSlotMachineState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* LotteryIDList; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Int32>* GachaCost; // 0x28
		::System::UInt32 ResultLotteryID; // 0x30
		::System::UInt32 GachaRemainTime; // 0x34
		::System::UInt32 GachaTotalCount; // 0x38
		::System::UInt32 GachaRandom; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__ONENTER_OFFSET))(this, a1);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Void SyncGachaInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCGACHAINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SyncLotteryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCLOTTERYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* GetBuffEffectDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETBUFFEFFECTDATAITEMS_OFFSET))(this);
		}

		::System::Void ContinueGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_CONTINUEGACHA_OFFSET))(this);
		}

		::System::Void ExitGacha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_EXITGACHA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedLotteryList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETSORTEDLOTTERYLIST_OFFSET))(this);
		}
	};
}
