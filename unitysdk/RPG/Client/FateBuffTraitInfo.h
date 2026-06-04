#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_31;
class Class_1_2E57B88467AF63C8_4;
class Class_1_455008579EB95638_31;
class Class_1_455008579EB95638_32;
class Class_1_45BB92167AED63A0_31;
class Class_1_7FF19F6206AF6DD7_21;
class Class_1_C062240120B347B5_1;
class Class_1_F9FBCC956DFCF137_17;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0xB987810)
#define RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB987710)
#define RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET UNITYSDK_OFFSET(0xB9873B0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB986DE0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET UNITYSDK_OFFSET(0xB987130)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB986F70)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET UNITYSDK_OFFSET(0xB987510)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET UNITYSDK_OFFSET(0xB980300)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xB986D30)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET UNITYSDK_OFFSET(0xB981640)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xB982940)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET UNITYSDK_OFFSET(0xB9826F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB988440)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xB988310)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB988330)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET UNITYSDK_OFFSET(0xB980890)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET UNITYSDK_OFFSET(0xB987090)
#define RPG_CLIENT_FATEBUFFTRAITINFO_REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB987AA0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0xB987920)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB988450)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xB988320)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xB985C40)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB9856E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xB985730)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET UNITYSDK_OFFSET(0xB986250)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0xB986870)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0xB986420)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB984990)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xB988240)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET UNITYSDK_OFFSET(0xB988140)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xB986790)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB984980)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB987AF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET UNITYSDK_OFFSET(0xB987ED0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xB984F50)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET UNITYSDK_OFFSET(0xB984B90)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xB986320)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET UNITYSDK_OFFSET(0xB984EE0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xB984FE0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0xB985210)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET UNITYSDK_OFFSET(0xB984E50)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xB9864A0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xB985CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo_TypeDefinitionIndex = 59795;

	class FateBuffTraitInfo : public ::System::Object
	{
	public:
		::Class_1_F9FBCC956DFCF137_17* _ParamProxyFactory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuffAmplificationDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitDataList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ModifiedMainTraitIDList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* _BuffDataList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivatedTraitBuffIDList; // 0x40
		::System::UInt32 _MaxBuffSlot; // 0x48
		::System::UInt32 _ExtraBuffSlotUnlockCount_k__BackingField; // 0x4C
		::System::UInt32 _Difficulty_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_4* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_4*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncBuffSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET))(this, a1);
		}

		::System::Void SyncBuffUpdate(::Class_1_455008579EB95638_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncBuffAmplificationUpdate(::Class_1_C062240120B347B5_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncModifiedTraitList(::Class_1_075C34D03AFA1215_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET))(this, a1);
		}

		::System::Void SyncTraitUpdate(::Class_1_455008579EB95638_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncTraitBuffUpdate(::Class_1_45BB92167AED63A0_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateBuffData* GetBuffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FateTraitData* GetTraitData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET))(this, a1);
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

		::System::Boolean CheckIsBuffSlotUnlockSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET))(this, a1);
		}

		::System::Void SetBuffSlotUnlockSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _GenerateBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET))(this);
		}

		::System::Void _GenerateTraitDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET))(this);
		}

		::System::Void _RefreshAllBuff(::Class_1_2E57B88467AF63C8_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _ClearBuffSlotEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET))(this);
		}

		::System::Void _RefreshAllTrait(::Class_1_2E57B88467AF63C8_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET))(this, a1);
		}

		::System::Void _RefreshTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_21*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_21*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET))(this, a1);
		}

		::System::Void _ClearAllTraitSourceInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET))(this);
		}

		::System::Void _ClearTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET))(this);
		}

		::System::Void _RefreshActivedTraitBuff(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET))(this, a1);
		}

		::System::Void _RefreshModifiedMainTrait(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET))(this, a1);
		}

		::System::Void _UpdateBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
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

		::System::Void set_ExtraBuffSlotUnlockCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET))(this, a1);
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

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET))(this, a1);
		}
	};
}
