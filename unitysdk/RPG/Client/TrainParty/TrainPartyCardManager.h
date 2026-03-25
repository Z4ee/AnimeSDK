#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_727381C54DC8F89E_4;
class Class_1_99BD961747420BEB_57;
class Class_1_E7C4009BCC22497A_82;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET UNITYSDK_OFFSET(0xA5F6DB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5F6890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET UNITYSDK_OFFSET(0xA5F7120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA5F7250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xA5F7320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xA5F7340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xA5F7300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA5F6850)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET UNITYSDK_OFFSET(0xA5F6FD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA5F6900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET UNITYSDK_OFFSET(0xA5F6E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xA5F7330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xA5F7350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xA5F7310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET UNITYSDK_OFFSET(0xA5F6A20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET UNITYSDK_OFFSET(0xA5F6D60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xA5F6980)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET UNITYSDK_OFFSET(0xA5F71A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F7360)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardManager_TypeDefinitionIndex = 61098;

	class TrainPartyCardManager : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CacheCardDataList; // 0x10
		::RPG::Client::TrainParty::TrainPartyCardData* _LastUsedCard_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CurActionCardDatas; // 0x20
		::System::Boolean _HasModifyAllPassengerStatEffect_k__BackingField; // 0x28
		::System::Int32 _ExtraRatio_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONEXITGAME_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_727381C54DC8F89E_4* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_727381C54DC8F89E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void SyncExtraRatio(::System::UInt32 ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET))(this, ratio);
		}

		::System::Void SyncCards(::Class_1_E7C4009BCC22497A_82* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_82*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET))(this, serverInfo);
		}

		::System::Void AddCard(::Class_1_99BD961747420BEB_57* serverCard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_57*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET))(this, serverCard);
		}

		::System::Void RemoveCard(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET))(this, uniqueID);
		}

		::System::Void OnCardUsed(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* GetAvailableCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET))(this);
		}

		::System::Void UseCard(::RPG::Client::TrainParty::TrainPartyCardData* cardData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET))(this, cardData);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* GetCardDataByUniqueID(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET))(this, uniqueID);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_LastUsedCard()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET))(this);
		}

		::System::Void set_LastUsedCard(::RPG::Client::TrainParty::TrainPartyCardData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET))(this, value);
		}

		::System::Int32 get_ExtraRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET))(this);
		}

		::System::Void set_ExtraRatio(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET))(this, value);
		}

		::System::Boolean get_HasModifyAllPassengerStatEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this);
		}

		::System::Void set_HasModifyAllPassengerStatEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this, value);
		}
	};
}
