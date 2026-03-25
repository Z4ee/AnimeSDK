#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_18;
class Class_2_DB10D93FA730592E;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceHandbookMessageItem; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }
namespace RPG::GameCore { class CakeRaceHandbookRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9241C00)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ACCUMULATEWINCOIN_OFFSET UNITYSDK_OFFSET(0x9242A10)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_BETCOUNT_OFFSET UNITYSDK_OFFSET(0x92429F0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9242510)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATID_OFFSET UNITYSDK_OFFSET(0x92424F0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ISMET_OFFSET UNITYSDK_OFFSET(0x92429D0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x92425F0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9242930)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_PERFORMANCELIST_OFFSET UNITYSDK_OFFSET(0x9241FF0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9242860)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMBEGINTEXT_OFFSET UNITYSDK_OFFSET(0x9241DC0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x92422C0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_RESETPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9241CE0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ACCUMULATEWINCOIN_OFFSET UNITYSDK_OFFSET(0x9242A20)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_BETCOUNT_OFFSET UNITYSDK_OFFSET(0x9242A00)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_CATID_OFFSET UNITYSDK_OFFSET(0x9242500)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ISMET_OFFSET UNITYSDK_OFFSET(0x92429E0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x9241C80)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9241C70)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookCatItem_TypeDefinitionIndex = 51157;

	class CakeRaceHandbookCatItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>* _MessageList; // 0x10
		::RPG::Client::CakeRaceCatDataItem* _CatDisplayData; // 0x18
		::System::Collections::Generic::List_1<::Class_2_DB10D93FA730592E*>* _PerformanceList; // 0x20
		::System::Boolean _IsMet_k__BackingField; // 0x28
		::System::UInt32 _CatID_k__BackingField; // 0x2C
		::System::UInt32 _AccumulateWinCoin_k__BackingField; // 0x30
		::System::UInt32 _BetCount_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 catID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM__CTOR_OFFSET))(this, catID);
		}

		static ::RPG::Client::CakeRaceHandbookCatItem* Create(::System::UInt32 catID)
		{
			return ((::RPG::Client::CakeRaceHandbookCatItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_CREATE_OFFSET))(catID);
		}

		::System::Void Sync(::Class_1_120319518E6F6581_18* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Void ResetPerformance(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* talkBubble)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_RESETPERFORMANCE_OFFSET))(this, catView, talkBubble);
		}

		::System::Void PlayRandomBeginText(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* talkBubble)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMBEGINTEXT_OFFSET))(this, catView, talkBubble);
		}

		::System::Void PlayRandomPerformance(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* talkBubble)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMPERFORMANCE_OFFSET))(this, catView, talkBubble);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATID_OFFSET))(this);
		}

		::System::Void set_CatID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_CATID_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDisplayData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>* get_MessageList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_MESSAGELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_DB10D93FA730592E*>* get_PerformanceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_DB10D93FA730592E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_PERFORMANCELIST_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_IsMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ISMET_OFFSET))(this);
		}

		::System::Void set_IsMet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ISMET_OFFSET))(this, value);
		}

		::System::UInt32 get_BetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_BETCOUNT_OFFSET))(this);
		}

		::System::Void set_BetCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_BETCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AccumulateWinCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ACCUMULATEWINCOIN_OFFSET))(this);
		}

		::System::Void set_AccumulateWinCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ACCUMULATEWINCOIN_OFFSET))(this, value);
		}

		::RPG::GameCore::CakeRaceHandbookRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceHandbookRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET__ROW_OFFSET))(this);
		}
	};
}
