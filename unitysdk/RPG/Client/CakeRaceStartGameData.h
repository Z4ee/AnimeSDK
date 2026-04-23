#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVEDATA_OFFSET UNITYSDK_OFFSET(0x9F11340)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATAWITHUIDLIST_OFFSET UNITYSDK_OFFSET(0x9F111F0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATA_OFFSET UNITYSDK_OFFSET(0x9F11000)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_COINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0x9F10FE0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0x9F10FA0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9F10F80)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_UIDLIST_OFFSET UNITYSDK_OFFSET(0x9F10FC0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_COINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0x9F10FF0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_FIELDID_OFFSET UNITYSDK_OFFSET(0x9F10FB0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_ISPVP_OFFSET UNITYSDK_OFFSET(0x9F10F90)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_UIDLIST_OFFSET UNITYSDK_OFFSET(0x9F10FD0)
#define RPG_CLIENT_CAKERACESTARTGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F11140)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceStartGameData_TypeDefinitionIndex = 58063;

	class CakeRaceStartGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UidList_k__BackingField; // 0x10
		::System::Boolean _IsPvp_k__BackingField; // 0x18
		::System::Int32 _CoinCountInGameStart_k__BackingField; // 0x1C
		::System::UInt32 _FieldID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_ISPVP_OFFSET))(this);
		}

		::System::Void set_IsPvp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_ISPVP_OFFSET))(this, value);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_FIELDID_OFFSET))(this);
		}

		::System::Void set_FieldID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_FIELDID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_UIDLIST_OFFSET))(this);
		}

		::System::Void set_UidList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_UIDLIST_OFFSET))(this, value);
		}

		::System::Int32 get_CoinCountInGameStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_GET_COINCOUNTINGAMESTART_OFFSET))(this);
		}

		::System::Void set_CoinCountInGameStart(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_SET_COINCOUNTINGAMESTART_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePvpData(::System::UInt32 fieldID)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATA_OFFSET))(fieldID);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePvpDataWithUIDList(::System::UInt32 fieldID, ::System::Collections::Generic::List_1<::System::UInt32>* uidList)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVPDATAWITHUIDLIST_OFFSET))(fieldID, uidList);
		}

		static ::RPG::Client::CakeRaceStartGameData* CreatePveData(::System::UInt32 fieldID, ::System::Collections::Generic::List_1<::System::UInt32>* uidList)
		{
			return ((::RPG::Client::CakeRaceStartGameData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESTARTGAMEDATA_CREATEPVEDATA_OFFSET))(fieldID, uidList);
		}
	};
}
