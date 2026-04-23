#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB3309E0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xB330A60)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_DETAILICONPATH_OFFSET UNITYSDK_OFFSET(0xB330C20)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xB330C40)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB330C50)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xB330BE0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xB330B60)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xB3307E0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_DETAILICONPATH_OFFSET UNITYSDK_OFFSET(0xB330C30)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB330C60)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB330C70)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB330C90)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xB330CA0)
#define RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET UNITYSDK_OFFSET(0xB330C80)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int AvatarPhotoItem_TypeDefinitionIndex = 68550;

	class AvatarPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::String* _DetailIconPath_k__BackingField; // 0x78
		::System::UInt32 _Rarity_k__BackingField; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType filterType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, filterType);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::String* get_DetailIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_DETAILICONPATH_OFFSET))(this);
		}

		::System::Void set_DetailIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_DETAILICONPATH_OFFSET))(this, value);
		}

		::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM_SET_RARITY_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::UInt32 __iFixBaseProxy_GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET))(this, P0);
		}
	};
}
