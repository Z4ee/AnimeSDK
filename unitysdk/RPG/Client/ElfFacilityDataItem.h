#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_283;
namespace RPG::GameCore { class RestaurantAbilityConfigRow; }
namespace RPG::GameCore { class RestaurantFacilityRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0x18E1DE00)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x18E1D840)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CANUPGRADE_OFFSET UNITYSDK_OFFSET(0x18E1DFE0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_CURABILITYDESC_OFFSET UNITYSDK_OFFSET(0x18E1DC00)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x18E1CF30)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x18E1E3A0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18E1D600)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0x18E1D5B0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18E1D470)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18E1CF50)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18E1D670)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18E1D070)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_NEXTABILITYDESC_OFFSET UNITYSDK_OFFSET(0x18E1E160)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18E1CFD0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x18E1D130)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKMETHODDESC_OFFSET UNITYSDK_OFFSET(0x18E1DA50)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UNLOCKPROGRESSID_OFFSET UNITYSDK_OFFSET(0x18E1D1D0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET_UPGRADEPRICE_OFFSET UNITYSDK_OFFSET(0x18E1D9D0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x18E1CF70)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x18E1CF40)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x18E1E3B0)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18E1CF60)
#define RPG_CLIENT_ELFFACILITYDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x18E1CEA0)
#define RPG_CLIENT_ELFFACILITYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1CE90)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFacilityDataItem_TypeDefinitionIndex = 60883;

	class ElfFacilityDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Boolean _IsDirty_k__BackingField; // 0x14
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _MaxLevel; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_283* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_283*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYDATAITEM_SYNC_OFFSET))(this, a1, a2);
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
