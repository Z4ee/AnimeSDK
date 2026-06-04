#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_22.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESLEVELDATA_GET_BASICBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xC417FA0)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_COSTCOIN_OFFSET UNITYSDK_OFFSET(0xC417F60)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC418060)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_ENVBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xC417FC0)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_GRANTCOIN_OFFSET UNITYSDK_OFFSET(0xC417F80)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC418040)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVELUNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xC418000)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC417F40)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xC418020)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xC417FE0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_BASICBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xC417FB0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_COSTCOIN_OFFSET UNITYSDK_OFFSET(0xC417F70)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC418070)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_ENVBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xC417FD0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_GRANTCOIN_OFFSET UNITYSDK_OFFSET(0xC417F90)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVELUNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xC418010)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC417F50)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0xC418030)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xC417FF0)
#define RPG_CLIENT_PLANETFESLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4179C0)
#define RPG_CLIENT_PLANETFESLEVELDATA__GETQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xC417E90)
#define RPG_CLIENT_PLANETFESLEVELDATA__ITEMSORT_OFFSET UNITYSDK_OFFSET(0xC417DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLevelData_TypeDefinitionIndex = 62284;

	class PlanetFesLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BasicBuffIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EnvBuffIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemList_k__BackingField; // 0x20
		::System::Numerics::BigInteger _CostCoin_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LevelUnlockIDList_k__BackingField; // 0x38
		::System::Numerics::BigInteger _GrantCoin_k__BackingField; // 0x40
		::System::UInt32 _QuestID_k__BackingField; // 0x50
		::System::UInt32 _Level_k__BackingField; // 0x54
		::RPG::Client::TextID _Description_k__BackingField; // 0x58

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _ItemSort(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__ITEMSORT_OFFSET))(this, a1, a2);
		}

		::Enum_3_4608E37A1B3D374A_22 _GetQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_22(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__GETQUESTSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_CostCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_COSTCOIN_OFFSET))(this);
		}

		::System::Void set_CostCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_COSTCOIN_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_GrantCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_GRANTCOIN_OFFSET))(this);
		}

		::System::Void set_GrantCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_GRANTCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BasicBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_BASICBUFFIDLIST_OFFSET))(this);
		}

		::System::Void set_BasicBuffIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_BASICBUFFIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnvBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_ENVBUFFIDLIST_OFFSET))(this);
		}

		::System::Void set_EnvBuffIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_ENVBUFFIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_REWARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_RewardItemList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_REWARDITEMLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LevelUnlockIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVELUNLOCKIDLIST_OFFSET))(this);
		}

		::System::Void set_LevelUnlockIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVELUNLOCKIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_QUESTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_ISFINISH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_DESCRIPTION_OFFSET))(this, a1);
		}
	};
}
