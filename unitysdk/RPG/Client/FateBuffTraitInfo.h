#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1FEA2535C5BDAFE3_1;
class Class_1_2E57B88467AF63C8_3;
class Class_1_3C58D309C7A040F5_17;
class Class_1_5FEFAED860528596_31;
class Class_1_5FEFAED860528596_32;
class Class_1_6E708EAB438EC183_27;
class Class_1_735612C94F558EAE_26;
class Class_1_F9FBCC956DFCF137_9;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0x9676A00)
#define RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x9676900)
#define RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x9676640)
#define RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9676100)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET UNITYSDK_OFFSET(0x9676440)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x96762A0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET UNITYSDK_OFFSET(0x9676770)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET UNITYSDK_OFFSET(0x96731E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x9676050)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET UNITYSDK_OFFSET(0x9670CC0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET UNITYSDK_OFFSET(0x9671E40)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET UNITYSDK_OFFSET(0x9671C70)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x96774F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x9677320)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x9677340)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET UNITYSDK_OFFSET(0x9677450)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET UNITYSDK_OFFSET(0x96763A0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0x9676B10)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9677500)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x9677330)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x9675010)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x9674B80)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x9674BD0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET UNITYSDK_OFFSET(0x9675600)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x9675C40)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x96757F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9673F70)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9677240)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET UNITYSDK_OFFSET(0x9677120)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9675B50)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9673F60)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x9676C90)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET UNITYSDK_OFFSET(0x9676FA0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET UNITYSDK_OFFSET(0x96744A0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET UNITYSDK_OFFSET(0x9674170)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x96756D0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET UNITYSDK_OFFSET(0x9674430)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x9674530)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x9674730)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET UNITYSDK_OFFSET(0x96743A0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x9675870)
#define RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x9675070)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo_TypeDefinitionIndex = 51916;

	class FateBuffTraitInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivatedTraitBuffIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* _BuffDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotDataList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitDataList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuffAmplificationDict; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ModifiedMainTraitIDList; // 0x38
		::Class_1_F9FBCC956DFCF137_9* _ParamProxyFactory; // 0x40
		::System::UInt32 _MaxBuffSlot; // 0x48
		::System::UInt32 _Difficulty_k__BackingField; // 0x4C
		::System::UInt32 _ExtraBuffSlotUnlockCount_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_9* paramProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET))(this, paramProxyFactory);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_3* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncBuffSlot(::System::UInt32 unlockExtraSlotCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET))(this, unlockExtraSlotCount);
		}

		::System::Void SyncBuffUpdate(::Class_1_5FEFAED860528596_31* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncBuffAmplificationUpdate(::Class_1_1FEA2535C5BDAFE3_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1FEA2535C5BDAFE3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET))(this, update);
		}

		::System::Void SyncModifiedTraitList(::Class_1_6E708EAB438EC183_27* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET))(this, update);
		}

		::System::Void SyncTraitUpdate(::Class_1_5FEFAED860528596_32* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncTraitBuffUpdate(::Class_1_735612C94F558EAE_26* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateBuffData* GetBuffData(::System::UInt32 buffId)
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET))(this, buffId);
		}

		::RPG::Client::FateTraitData* GetTraitData(::System::UInt32 traitId)
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET))(this, traitId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* GetActiveTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET))(this);
		}

		::System::UInt32 CountUnlockedSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* GetEquippedBuffSlots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET))(this);
		}

		::System::Void ClearPrefsSeenUnlockBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET))(this);
		}

		::System::Boolean CheckIsBuffSlotUnlockSeen(::System::UInt32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET))(this, slotID);
		}

		::System::Void SetBuffSlotUnlockSeen(::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET))(this, slotID);
		}

		::System::Void _GenerateBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET))(this);
		}

		::System::Void _GenerateTraitDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET))(this);
		}

		::System::Void _RefreshAllBuff(::Class_1_2E57B88467AF63C8_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET))(this, proto);
		}

		::System::Void _RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _ClearBuffSlotEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET))(this);
		}

		::System::Void _RefreshAllTrait(::Class_1_2E57B88467AF63C8_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET))(this, proto);
		}

		::System::Void _RefreshTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_17*>* protoTraitList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_17*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET))(this, protoTraitList);
		}

		::System::Void _ClearAllTraitSourceInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET))(this);
		}

		::System::Void _ClearTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* removeTraitIdList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET))(this, removeTraitIdList);
		}

		::System::Void _RefreshAllTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET))(this);
		}

		::System::Void _RefreshActivedTraitBuff(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* protoActivatedTraitBuffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET))(this, protoActivatedTraitBuffList);
		}

		::System::Void _RefreshBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ampificationMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET))(this, ampificationMap);
		}

		::System::Void _RefreshModifiedMainTrait(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* modifiedMainTraitList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET))(this, modifiedMainTraitList);
		}

		::System::Void _UpdateBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* updateAmpificationMap, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* removeAmpificationList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET))(this, updateAmpificationMap, removeAmpificationList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* get_BuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* get_BuffSlotDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraBuffSlotUnlockCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET))(this);
		}

		::System::Void set_ExtraBuffSlotUnlockCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxBuffSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* get_TraitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActivatedTraitBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_BuffAmplificationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ModifiedMainTraitIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET))(this, value);
		}
	};
}
