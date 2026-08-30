#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xE2417C0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xE241840)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_ISFARMABLE_OFFSET UNITYSDK_OFFSET(0xE241AB0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xE241A40)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xE241A90)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE2419D0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xE241950)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xE241510)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_ISFARMABLE_OFFSET UNITYSDK_OFFSET(0xE241AC0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xE241AA0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE241AD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int LightConePhotoItem_TypeDefinitionIndex = 74185;

	class LightConePhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::UInt32 _Rarity_k__BackingField; // 0x78
		::System::Boolean _IsFarmable_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_RARITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFarmable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_ISFARMABLE_OFFSET))(this);
		}

		::System::Void set_IsFarmable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_ISFARMABLE_OFFSET))(this, a1);
		}
	};
}
