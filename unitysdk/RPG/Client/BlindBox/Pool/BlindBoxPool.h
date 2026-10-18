#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1360;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::BlindBox::Pool { class BlindBoxSet; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxSet; }
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_FULLUPDATECURRENTSETOPENED_OFFSET UNITYSDK_OFFSET(0xC8805A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GETCLOSEDREASON_OFFSET UNITYSDK_OFFSET(0xC880B20)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_BUBBLETEXTS_OFFSET UNITYSDK_OFFSET(0xC880D40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_COINITEM_OFFSET UNITYSDK_OFFSET(0xC880CD0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_CONTENTS_OFFSET UNITYSDK_OFFSET(0xC880CF0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_CURRENTSET_OFFSET UNITYSDK_OFFSET(0xC880C80)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_FTCPRICEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC880D20)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_FTCPROBABILITYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC880D10)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_HISTORYPAGEURL_OFFSET UNITYSDK_OFFSET(0xC880CE0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_POOLID_OFFSET UNITYSDK_OFFSET(0xC880C70)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_PROBABILITYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC880D00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_RECHARGESHOPFTCPRICEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC880D30)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xC880D80)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_TICKETITEM_OFFSET UNITYSDK_OFFSET(0xC880CC0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_UPDATECURRENTSETOPENED_OFFSET UNITYSDK_OFFSET(0xC880450)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xC880150)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPool_TypeDefinitionIndex = 74907;

	class BlindBoxPool : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::IPoolContents* _Contents_k__BackingField; // 0x10
		::RPG::Client::BlindBox::Pool::BlindBoxSet* _CurrentSet; // 0x18
		::RPG::Client::ScheduleData* _Schedule_k__BackingField; // 0x20
		::RPG::Client::ItemData* _TicketItem_k__BackingField; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::TextID>* _BubbleTextsReadOnly; // 0x30
		::Il2CppArray<::RPG::Client::TextID>* _BubbleTexts; // 0x38
		::RPG::Client::ItemData* _CoinItem_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_1360* _ClosedReasonProvider; // 0x48
		::System::String* _HistoryPageUrl_k__BackingField; // 0x50
		::System::UInt32 _PoolId_k__BackingField; // 0x58
		::RPG::Client::TextID _ProbabilityDescription_k__BackingField; // 0x60
		::RPG::Client::TextID _FtcPriceDescription_k__BackingField; // 0x70
		::RPG::Client::TextID _FtcProbabilityDescription_k__BackingField; // 0x80
		::RPG::Client::TextID _RechargeShopFtcPriceDescription_k__BackingField; // 0x90

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ItemData* a3, ::RPG::Client::ItemData* a4, ::System::String* a5, ::RPG::Client::BlindBox::Pool::IPoolContents* a6, ::RPG::Client::TextID a7, ::RPG::Client::TextID a8, ::RPG::Client::TextID a9, ::RPG::Client::TextID a10, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::TextID>* a11, ::Class_0_16E4307DCC419505_1360* a12, ::RPG::Client::ScheduleData* a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*, ::System::String*, ::RPG::Client::BlindBox::Pool::IPoolContents*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::TextID>*, ::Class_0_16E4307DCC419505_1360*, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void UpdateCurrentSetOpened(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_UPDATECURRENTSETOPENED_OFFSET))(this, a1, a2);
		}

		::System::Void FullUpdateCurrentSetOpened(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_FULLUPDATECURRENTSETOPENED_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::PoolClosedReason GetClosedReason()
		{
			return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GETCLOSEDREASON_OFFSET))(this);
		}

		::System::UInt32 get_PoolId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_POOLID_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxSet* get_CurrentSet()
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_CURRENTSET_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_TicketItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_TICKETITEM_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_CoinItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_COINITEM_OFFSET))(this);
		}

		::System::String* get_HistoryPageUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_HISTORYPAGEURL_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IPoolContents* get_Contents()
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContents*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_CONTENTS_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProbabilityDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_PROBABILITYDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_FtcProbabilityDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_FTCPROBABILITYDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_FtcPriceDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_FTCPRICEDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_RechargeShopFtcPriceDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_RECHARGESHOPFTCPRICEDESCRIPTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::TextID>* get_BubbleTexts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_BUBBLETEXTS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOL_GET_SCHEDULE_OFFSET))(this);
		}
	};
}
