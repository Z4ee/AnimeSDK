#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyGridData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerChangeInfo; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace RPG::GameCore { class TrainPartyCardSpecialShowConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDCOINNUMBYSTEP_OFFSET UNITYSDK_OFFSET(0xCABB700)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDCOINNUM_OFFSET UNITYSDK_OFFSET(0xCABB4F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDSTATUSBYSTEP_OFFSET UNITYSDK_OFFSET(0xCABB480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0xCABAF30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCABADA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GETPASSENGERCHANGEINFOBYID_OFFSET UNITYSDK_OFFSET(0xCABC010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GETPASSENGERCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xCABBEF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xCABC360)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_CARDSHOWCONFIGROW_OFFSET UNITYSDK_OFFSET(0xCABC230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xCABC340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_HASPASSENGERCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xCABBFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_ISSPECIALCARD_OFFSET UNITYSDK_OFFSET(0xCABC220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0xCABC320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_NEEDCONFIRM_OFFSET UNITYSDK_OFFSET(0xCABC390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCABC250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_STOPGRIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCABC1D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_USECARDCONFIRMTEXTID_OFFSET UNITYSDK_OFFSET(0xCABC370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_WILLGETMEMORYID_OFFSET UNITYSDK_OFFSET(0xCABC300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_REFRESHINFOBYCARD_OFFSET UNITYSDK_OFFSET(0xCABB760)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_RESET_OFFSET UNITYSDK_OFFSET(0xCABADF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_CARDSHOWCONFIGROW_OFFSET UNITYSDK_OFFSET(0xCABC240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xCABC350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_ISSTOPED_OFFSET UNITYSDK_OFFSET(0xCABC330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_USECARDCONFIRMTEXTID_OFFSET UNITYSDK_OFFSET(0xCABC380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_WILLGETMEMORYID_OFFSET UNITYSDK_OFFSET(0xCABC310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SUBSTATUS_OFFSET UNITYSDK_OFFSET(0xCABB340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCABAD30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__GETVALUEWITHRATIO_OFFSET UNITYSDK_OFFSET(0xCABC0B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__POSTPROCESS_OFFSET UNITYSDK_OFFSET(0xCABC170)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__PREPROCESS_OFFSET UNITYSDK_OFFSET(0xCABC120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__REFRESHPREVIEWINFOLIST_OFFSET UNITYSDK_OFFSET(0xCABBB50)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPreviewInfo_TypeDefinitionIndex = 69444;

	class TrainPartyPreviewInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _CALCULATE_MULTIPLY_RATIO = 0x64; // 0x0
		::RPG::Client::TrainParty::TrainPartyCardData* _CurCardData; // 0x10
		::RPG::Client::TrainParty::TrainPartyGridData* _PreviewGridData; // 0x18
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _PreviewInfoCache; // 0x20
		::RPG::Client::TrainParty::TrainPartyGameInstance* _OwnerGame; // 0x28
		::RPG::GameCore::TrainPartyCardSpecialShowConfigRow* _CardShowConfigRow_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _PreviewInfoList; // 0x38
		::System::UInt32 _WillGetMemoryID_k__BackingField; // 0x40
		::System::UInt32 _CoinNum_k__BackingField; // 0x44
		::System::Boolean _IsStoped_k__BackingField; // 0x48
		::RPG::Client::TextID _UseCardConfirmTextID_k__BackingField; // 0x50
		::System::Int32 _CurTurnCoinAddedRatio; // 0x60
		::System::Int32 _IncentiveAddedRatio; // 0x64
		::System::UInt32 _MoveStep; // 0x68
		::System::Int32 _CurTurnStatusAddedRatio; // 0x6C

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_RESET_OFFSET))(this);
		}

		::System::Void AddStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDSTATUS_OFFSET))(this, a1);
		}

		::System::Void SubStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SUBSTATUS_OFFSET))(this, a1);
		}

		::System::Void AddStatusByStep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDSTATUSBYSTEP_OFFSET))(this, a1);
		}

		::System::Void AddCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDCOINNUM_OFFSET))(this, a1);
		}

		::System::Void AddCoinNumByStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_ADDCOINNUMBYSTEP_OFFSET))(this, a1);
		}

		::System::Void RefreshInfoByCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_REFRESHINFOBYCARD_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* GetPassengerChangeInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GETPASSENGERCHANGEINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* GetPassengerChangeInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GETPASSENGERCHANGEINFOBYID_OFFSET))(this, a1);
		}

		::System::UInt32 _GetValueWithRatio(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__GETVALUEWITHRATIO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _PreProcess(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__PREPROCESS_OFFSET))(this, a1);
		}

		::System::UInt32 _PostProcess(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__POSTPROCESS_OFFSET))(this, a1);
		}

		::System::Void _RefreshPreviewInfoList(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO__REFRESHPREVIEWINFOLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_StopGridUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_STOPGRIDUNIQUEID_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_ISSPECIALCARD_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyCardSpecialShowConfigRow* get_CardShowConfigRow()
		{
			return ((::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_CARDSHOWCONFIGROW_OFFSET))(this);
		}

		::System::Void set_CardShowConfigRow(::RPG::GameCore::TrainPartyCardSpecialShowConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_CARDSHOWCONFIGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_WillGetMemoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_WILLGETMEMORYID_OFFSET))(this);
		}

		::System::Void set_WillGetMemoryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_WILLGETMEMORYID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStoped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_ISSTOPED_OFFSET))(this);
		}

		::System::Void set_IsStoped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_ISSTOPED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_COINNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPassengerChangeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_HASPASSENGERCHANGEINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_CardData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_CARDDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_UseCardConfirmTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_USECARDCONFIRMTEXTID_OFFSET))(this);
		}

		::System::Void set_UseCardConfirmTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_SET_USECARDCONFIRMTEXTID_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedConfirm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPREVIEWINFO_GET_NEEDCONFIRM_OFFSET))(this);
		}
	};
}
