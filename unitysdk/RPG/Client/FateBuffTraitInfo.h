#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_31;
class Class_1_2E57B88467AF63C8_6;
class Class_1_455008579EB95638_31;
class Class_1_455008579EB95638_32;
class Class_1_45BB92167AED63A0_29;
class Class_1_7FF19F6206AF6DD7_20;
class Class_1_C062240120B347B5_1;
class Class_1_F9FBCC956DFCF137_10;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0xA335E20)
#define RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xA335D20)
#define RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET UNITYSDK_OFFSET(0xA3359C0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA335480)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET UNITYSDK_OFFSET(0xA3357C0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA335620)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET UNITYSDK_OFFSET(0xA335B90)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET UNITYSDK_OFFSET(0xA332340)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xA3353D0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET UNITYSDK_OFFSET(0xA336740)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xA3342F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET UNITYSDK_OFFSET(0xA335AF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3369D0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xA336800)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xA336820)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET UNITYSDK_OFFSET(0xA336930)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET UNITYSDK_OFFSET(0xA335720)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0xA335F30)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3369E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xA336810)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xA334390)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xA333E70)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xA333EC0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET UNITYSDK_OFFSET(0xA334980)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xA334FC0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0xA334B70)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA333260)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xA336660)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET UNITYSDK_OFFSET(0xA336540)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xA334ED0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA333250)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xA3360B0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET UNITYSDK_OFFSET(0xA3363C0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xA333790)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET UNITYSDK_OFFSET(0xA333460)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xA334A50)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET UNITYSDK_OFFSET(0xA333720)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xA333820)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xA333A20)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET UNITYSDK_OFFSET(0xA333690)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xA334BF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xA3343F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo_TypeDefinitionIndex = 58865;

	class FateBuffTraitInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ModifiedMainTraitIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* _BuffDataList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuffAmplificationDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotDataList; // 0x28
		::Class_1_F9FBCC956DFCF137_10* _ParamProxyFactory; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivatedTraitBuffIDList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitDataList; // 0x40
		::System::UInt32 _MaxBuffSlot; // 0x48
		::System::UInt32 _Difficulty_k__BackingField; // 0x4C
		::System::UInt32 _ExtraBuffSlotUnlockCount_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_10* paramProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET))(this, paramProxyFactory);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_6* proto, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_6*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET))(this, proto, difficulty);
		}

		::System::Void SyncBuffSlot(::System::UInt32 unlockExtraSlotCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET))(this, unlockExtraSlotCount);
		}

		::System::Void SyncBuffUpdate(::Class_1_455008579EB95638_31* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncBuffAmplificationUpdate(::Class_1_C062240120B347B5_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET))(this, update);
		}

		::System::Void SyncModifiedTraitList(::Class_1_075C34D03AFA1215_31* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET))(this, update);
		}

		::System::Void SyncTraitUpdate(::Class_1_455008579EB95638_32* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncTraitBuffUpdate(::Class_1_45BB92167AED63A0_29* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET))(this, proto);
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

		::System::Void _RefreshAllBuff(::Class_1_2E57B88467AF63C8_6* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET))(this, proto);
		}

		::System::Void _RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _ClearBuffSlotEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET))(this);
		}

		::System::Void _RefreshAllTrait(::Class_1_2E57B88467AF63C8_6* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET))(this, proto);
		}

		::System::Void _RefreshTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_20*>* protoTraitList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_20*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET))(this, protoTraitList);
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
