#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_293;
namespace RPG::GameCore { class RestaurantAbilityConfigRow; }
namespace RPG::GameCore { class RestaurantFacilityRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1AC640B0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1AC63AF0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANUPGRADE_OFFSET UNITYSDK_OFFSET(0x1AC64290)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CURABILITYDESC_OFFSET UNITYSDK_OFFSET(0x1AC63EB0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC631E0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1AC64650)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AC638B0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0x1AC63860)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AC63720)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AC63200)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AC63920)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC63320)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_NEXTABILITYDESC_OFFSET UNITYSDK_OFFSET(0x1AC64410)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AC63280)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x1AC633E0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKMETHODDESC_OFFSET UNITYSDK_OFFSET(0x1AC63D00)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1AC63480)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UPGRADEPRICE_OFFSET UNITYSDK_OFFSET(0x1AC63C80)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AC63220)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AC631F0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1AC64660)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AC63210)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1AC63150)
#define RPG_CLIENT_ELFFACILITYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC63140)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFacilityDataItem_TypeDefinitionIndex = 63736;

	class ElfFacilityDataItem : public ::System::Object
	{
	public:
		::System::Boolean _IsDirty_k__BackingField; // 0x10
		::System::UInt32 _MaxLevel; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_293* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_293*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_SYNC_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantFacilityRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantFacilityRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantFacilityType get_Type()
		{
			return ((::RPG::GameCore::RestaurantFacilityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_UnlockProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKPROGRESSID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsPurchased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISPURCHASED_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_UpgradePrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_UPGRADEPRICE_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockMethodDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKMETHODDESC_OFFSET))(this);
		}

		::System::String* get_CurAbilityDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_CURABILITYDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantAbilityConfigRow*>* get_AbilityList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantAbilityConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ABILITYLIST_OFFSET))(this);
		}

		::System::Boolean get_CanUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANUPGRADE_OFFSET))(this);
		}

		::System::String* get_NextAbilityDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_NEXTABILITYDESC_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_SET_ISDIRTY_OFFSET))(this, a1);
		}
	};
}
