#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_63;
class Class_1_D40936EF3BF54118_95;
class Class_1_EEEF09F79EF958D3_4;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET UNITYSDK_OFFSET(0xCAA5F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAA5950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET UNITYSDK_OFFSET(0xCAA6350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAA6480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xCAA6540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xCAA6560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xCAA6520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCAA5910)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET UNITYSDK_OFFSET(0xCAA6200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xCAA59E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET UNITYSDK_OFFSET(0xCAA6090)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xCAA6550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xCAA6570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xCAA6530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET UNITYSDK_OFFSET(0xCAA5B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET UNITYSDK_OFFSET(0xCAA5F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xCAA5A60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET UNITYSDK_OFFSET(0xCAA63D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA6580)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardManager_TypeDefinitionIndex = 69397;

	class TrainPartyCardManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CurActionCardDatas; // 0x10
		::RPG::Client::TrainParty::TrainPartyCardData* _LastUsedCard_k__BackingField; // 0x18
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CacheCardDataList; // 0x20
		::System::Int32 _ExtraRatio_k__BackingField; // 0x28
		::System::Boolean _HasModifyAllPassengerStatEffect_k__BackingField; // 0x2C

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

		::System::Void Sync(::Class_1_EEEF09F79EF958D3_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncExtraRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET))(this, a1);
		}

		::System::Void SyncCards(::Class_1_D40936EF3BF54118_95* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_95*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET))(this, a1);
		}

		::System::Void AddCard(::Class_1_4BC858D7C27E10ED_63* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_63*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET))(this, a1);
		}

		::System::Void RemoveCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET))(this, a1);
		}

		::System::Void OnCardUsed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* GetAvailableCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET))(this);
		}

		::System::Void UseCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* GetCardDataByUniqueID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_LastUsedCard()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET))(this);
		}

		::System::Void set_LastUsedCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET))(this, a1);
		}

		::System::Int32 get_ExtraRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET))(this);
		}

		::System::Void set_ExtraRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasModifyAllPassengerStatEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this);
		}

		::System::Void set_HasModifyAllPassengerStatEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this, a1);
		}
	};
}
