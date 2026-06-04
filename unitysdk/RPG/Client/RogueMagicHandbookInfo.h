#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_355A2207C3B7A99D_102;
class Class_1_D17272E82AE804C2_853;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RogueMagicHandbookMagicUnitDataItem; }
namespace RPG::Client { class RogueMagicHandbookScepterDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7A2850)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETMAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0xC7A37A0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETMAGICUNITQUESTS_OFFSET UNITYSDK_OFFSET(0xC799AC0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETSCEPTERDATA_OFFSET UNITYSDK_OFFSET(0xC7A3290)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETSCEPTERQUESTS_OFFSET UNITYSDK_OFFSET(0xC799A70)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3F00)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3E60)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLSCEPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3DF0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_MAGICUNITDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC7A3DB0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_SCEPTERDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC7A3D90)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3EB0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDITEMPERCENTFLOORED_OFFSET UNITYSDK_OFFSET(0xC7A3FD0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3E40)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDSCEPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3DD0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC7A2940)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_ISMAGICUNITLOCKED_OFFSET UNITYSDK_OFFSET(0xC7A3A30)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_ISSCEPTERLOCKED_OFFSET UNITYSDK_OFFSET(0xC7A39C0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_MAGICUNITDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC7A3DC0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_SCEPTERDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC7A3DA0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_UNLOCKEDMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3E50)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_UNLOCKEDSCEPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3DE0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SYNCSCEPTERS_OFFSET UNITYSDK_OFFSET(0xC7A2F80)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SYNCUNITS_OFFSET UNITYSDK_OFFSET(0xC7A34B0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A2770)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__GETQUESTSFROMCONSTARRAY_OFFSET UNITYSDK_OFFSET(0xC7A3AA0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__REFRESHSCEPTERUNLOCKEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3380)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__REFRESHUNITUNLOCKEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A3890)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicHandbookInfo_TypeDefinitionIndex = 63037;

	class RogueMagicHandbookInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookScepterDataItem*>* _ScepterDataItems_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookMagicUnitDataItem*>* _MagicUnitDataItems_k__BackingField; // 0x18
		::System::UInt32 _UnlockedMagicUnitCount_k__BackingField; // 0x20
		::System::UInt32 _UnlockedScepterCount_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_INIT_OFFSET))(this);
		}

		::System::Void SyncScepters(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_355A2207C3B7A99D_102*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_355A2207C3B7A99D_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SYNCSCEPTERS_OFFSET))(this, a1);
		}

		::System::Void SyncUnits(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_853*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_853*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SYNCUNITS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicHandbookScepterDataItem* GetScepterData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicHandbookScepterDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETSCEPTERDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicHandbookMagicUnitDataItem* GetMagicUnitData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicHandbookMagicUnitDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETMAGICUNITDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsScepterLocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_ISSCEPTERLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMagicUnitLocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_ISMAGICUNITLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetScepterQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETSCEPTERQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetMagicUnitQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GETMAGICUNITQUESTS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _GetQuestsFromConstArray(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__GETQUESTSFROMCONSTARRAY_OFFSET))(a1);
		}

		::System::Void _RefreshScepterUnlockedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__REFRESHSCEPTERUNLOCKEDCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshUnitUnlockedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO__REFRESHUNITUNLOCKEDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookScepterDataItem*>* get_ScepterDataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_SCEPTERDATAITEMS_OFFSET))(this);
		}

		::System::Void set_ScepterDataItems(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookScepterDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookScepterDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_SCEPTERDATAITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookMagicUnitDataItem*>* get_MagicUnitDataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_MAGICUNITDATAITEMS_OFFSET))(this);
		}

		::System::Void set_MagicUnitDataItems(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookMagicUnitDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::RogueMagicHandbookMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_MAGICUNITDATAITEMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockedScepterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDSCEPTERCOUNT_OFFSET))(this);
		}

		::System::Void set_UnlockedScepterCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_UNLOCKEDSCEPTERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllScepterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLSCEPTERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedMagicUnitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDMAGICUNITCOUNT_OFFSET))(this);
		}

		::System::Void set_UnlockedMagicUnitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_SET_UNLOCKEDMAGICUNITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllMagicUnitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLMAGICUNITCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDITEMCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_ALLITEMCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedItemPercentFloored()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKINFO_GET_UNLOCKEDITEMPERCENTFLOORED_OFFSET))(this);
		}
	};
}
