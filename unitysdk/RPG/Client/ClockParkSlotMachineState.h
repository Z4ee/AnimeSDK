#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

namespace RPG::Client { class ClockParkEffectDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_CONTINUEGACHA_OFFSET UNITYSDK_OFFSET(0xA0A8950)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_EXITGACHA_OFFSET UNITYSDK_OFFSET(0xA0A8AA0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETBUFFEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA0A83C0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_GETSORTEDLOTTERYLIST_OFFSET UNITYSDK_OFFSET(0xA0A8BE0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA0A8380)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCGACHAINFO_OFFSET UNITYSDK_OFFSET(0xA0A15F0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0xA09FE40)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A25E0)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xA0A7D30)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE___IFIXBASEPROXY_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA0A8C90)
#define RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE___IFIXBASEPROXY__ONENTER_OFFSET UNITYSDK_OFFSET(0xA0A8C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkSlotMachineState_TypeDefinitionIndex = 56719;

	class ClockParkSlotMachineState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Int32>* GachaCost; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* LotteryIDList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* _EffectDataItemList; // 0x28
		::System::UInt32 GachaTotalCount; // 0x30
		::System::UInt32 ResultLotteryID; // 0x34
		::System::UInt32 GachaRandom; // 0x38
		::System::UInt32 GachaRemainTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum lastGameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE__ONENTER_OFFSET))(this, lastGameState);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Void SyncGachaInfo(::System::UInt32 gachaRemainTime, ::System::UInt32 gachaRandom)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCGACHAINFO_OFFSET))(this, gachaRemainTime, gachaRandom);
		}

		::System::Void SyncLotteryID(::System::UInt32 lotteryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE_SYNCLOTTERYID_OFFSET))(this, lotteryID);
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

		::System::Void __iFixBaseProxy__OnEnter(::RPG::Client::ClockParkGameStateEnum P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE___IFIXBASEPROXY__ONENTER_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTMACHINESTATE___IFIXBASEPROXY_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}
	};
}
