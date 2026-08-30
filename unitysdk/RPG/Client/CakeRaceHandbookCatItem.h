#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_166;
class Class_2_83A64EF8E94BFCAF;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceHandbookMessageItem; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }
namespace RPG::GameCore { class CakeRaceHandbookRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC9CE1B0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ACCUMULATEWINCOIN_OFFSET UNITYSDK_OFFSET(0xC9CF0B0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_BETCOUNT_OFFSET UNITYSDK_OFFSET(0xC9CF090)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC9CEB60)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATID_OFFSET UNITYSDK_OFFSET(0xC9CEB40)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ISMET_OFFSET UNITYSDK_OFFSET(0xC9CF070)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0xC9CEC40)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xC9CEFD0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_PERFORMANCELIST_OFFSET UNITYSDK_OFFSET(0xC9CE5C0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC9CEF00)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMBEGINTEXT_OFFSET UNITYSDK_OFFSET(0xC9CE370)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9CE8F0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_RESETPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9CE290)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ACCUMULATEWINCOIN_OFFSET UNITYSDK_OFFSET(0xC9CF0C0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_BETCOUNT_OFFSET UNITYSDK_OFFSET(0xC9CF0A0)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_CATID_OFFSET UNITYSDK_OFFSET(0xC9CEB50)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ISMET_OFFSET UNITYSDK_OFFSET(0xC9CF080)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xC9CE230)
#define RPG_CLIENT_CAKERACEHANDBOOKCATITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9CE220)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookCatItem_TypeDefinitionIndex = 63112;

	class CakeRaceHandbookCatItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>* _MessageList; // 0x10
		::RPG::Client::CakeRaceCatDataItem* _CatDisplayData; // 0x18
		::System::Collections::Generic::List_1<::Class_2_83A64EF8E94BFCAF*>* _PerformanceList; // 0x20
		::System::Boolean _IsMet_k__BackingField; // 0x28
		::System::UInt32 _CatID_k__BackingField; // 0x2C
		::System::UInt32 _BetCount_k__BackingField; // 0x30
		::System::UInt32 _AccumulateWinCoin_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceHandbookCatItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceHandbookCatItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_166* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_166*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void ResetPerformance(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_RESETPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRandomBeginText(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMBEGINTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRandomPerformance(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_PLAYRANDOMPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATID_OFFSET))(this);
		}

		::System::Void set_CatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_CATID_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDisplayData()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_CATDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>* get_MessageList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookMessageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_MESSAGELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_83A64EF8E94BFCAF*>* get_PerformanceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_83A64EF8E94BFCAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_PERFORMANCELIST_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_IsMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ISMET_OFFSET))(this);
		}

		::System::Void set_IsMet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ISMET_OFFSET))(this, a1);
		}

		::System::UInt32 get_BetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_BETCOUNT_OFFSET))(this);
		}

		::System::Void set_BetCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_BETCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AccumulateWinCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET_ACCUMULATEWINCOIN_OFFSET))(this);
		}

		::System::Void set_AccumulateWinCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_SET_ACCUMULATEWINCOIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceHandbookRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceHandbookRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKCATITEM_GET__ROW_OFFSET))(this);
		}
	};
}
