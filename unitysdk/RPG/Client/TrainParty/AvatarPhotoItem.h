#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xE23FF70)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETDETAILIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE23FEF0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xE23FFF0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xE2401E0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xE240230)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE240170)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xE2400F0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xE23FC20)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xE240240)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE240250)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int AvatarPhotoItem_TypeDefinitionIndex = 74183;

	class AvatarPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::UInt32 _Rarity_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::String* GetDetailImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETDETAILIMAGEPATH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_RARITY_OFFSET))(this, a1);
		}
	};
}
