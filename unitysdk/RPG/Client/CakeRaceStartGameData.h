#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVEDATA_OFFSET UNITYSDK_OFFSET(0xB4AD940)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATAWITHUIDLIST_OFFSET UNITYSDK_OFFSET(0xB4AD7F0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATA_OFFSET UNITYSDK_OFFSET(0xB4AD600)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_COINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0xB4AD5E0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0xB4AD5A0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0xB4AD580)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_UIDLIST_OFFSET UNITYSDK_OFFSET(0xB4AD5C0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_COINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0xB4AD5F0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_FIELDID_OFFSET UNITYSDK_OFFSET(0xB4AD5B0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0xB4AD590)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_UIDLIST_OFFSET UNITYSDK_OFFSET(0xB4AD5D0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AD740)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceStartGameData_TypeDefinitionIndex = 58979;

	class CakeRaceStartGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UidList_k__BackingField; // 0x10
		::System::Boolean _IsPvp_k__BackingField; // 0x18
		::System::UInt32 _FieldID_k__BackingField; // 0x1C
		::System::Int32 _CoinCountInGameStart_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPvp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_ISPVP_OFFSET))(this, a1);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_FIELDID_OFFSET))(this);
		}

		::System::Void set_FieldID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_FIELDID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_UIDLIST_OFFSET))(this);
		}

		::System::Void set_UidList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_UIDLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_CoinCountInGameStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_COINCOUNTINGAMESTART_OFFSET))(this);
		}

		::System::Void set_CoinCountInGameStart(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_COINCOUNTINGAMESTART_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePvpData(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATA_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePvpDataWithUIDList(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATAWITHUIDLIST_OFFSET))(a1, a2);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePveData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVEDATA_OFFSET))(a1, a2);
		}
	};
}
