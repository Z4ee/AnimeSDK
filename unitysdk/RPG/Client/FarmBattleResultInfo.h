#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MultipleDropUsedData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLEMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0xCF249F0)
#define RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xCF248B0)
#define RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLETIME_OFFSET UNITYSDK_OFFSET(0xCF249A0)
#define RPG_CLIENT_FARMBATTLERESULTINFO_GET_DECOMPOSEINFO_OFFSET UNITYSDK_OFFSET(0xCF24C90)
#define RPG_CLIENT_FARMBATTLERESULTINFO_GET_LASTBATTLEMULTIPLEDROPUSEDDATALIST_OFFSET UNITYSDK_OFFSET(0xCF24CC0)
#define RPG_CLIENT_FARMBATTLERESULTINFO_GET_LASTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xCF24CA0)
#define RPG_CLIENT_FARMBATTLERESULTINFO_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCF24C80)
#define RPG_CLIENT_FARMBATTLERESULTINFO_SET_LASTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xCF24CB0)
#define RPG_CLIENT_FARMBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCF24CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmBattleResultInfo_TypeDefinitionIndex = 64043;

	class FarmBattleResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>* _LastBattleMultipleDropUsedDataList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x18
		::RPG::Client::BattleResulAutoDecomposeInfo* _DecomposeInfo_k__BackingField; // 0x20
		::System::UInt32 _LastBattleTime_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		::System::Void AddBattleResult(::RPG::Client::BattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLERESULT_OFFSET))(this, a1);
		}

		::System::Void AddBattleTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLETIME_OFFSET))(this, a1);
		}

		::System::Void AddBattleMultipleDrop(::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_ADDBATTLEMULTIPLEDROP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_GET_REWARDITEMS_OFFSET))(this);
		}

		::RPG::Client::BattleResulAutoDecomposeInfo* get_DecomposeInfo()
		{
			return ((::RPG::Client::BattleResulAutoDecomposeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_GET_DECOMPOSEINFO_OFFSET))(this);
		}

		::System::UInt32 get_LastBattleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_GET_LASTBATTLETIME_OFFSET))(this);
		}

		::System::Void set_LastBattleTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_SET_LASTBATTLETIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>* get_LastBattleMultipleDropUsedDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMBATTLERESULTINFO_GET_LASTBATTLEMULTIPLEDROPUSEDDATALIST_OFFSET))(this);
		}
	};
}
