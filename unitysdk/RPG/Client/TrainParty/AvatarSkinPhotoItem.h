#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB330F80)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xB331000)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xB3311F0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_DETAILICONPATH_OFFSET UNITYSDK_OFFSET(0xB3311C0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xB3311E0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB331210)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xB331180)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xB331100)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xB330D10)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xB331200)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_DETAILICONPATH_OFFSET UNITYSDK_OFFSET(0xB3311D0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB331220)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB331230)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB331250)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xB331260)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET UNITYSDK_OFFSET(0xB331240)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int AvatarSkinPhotoItem_TypeDefinitionIndex = 68551;

	class AvatarSkinPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::String* _DetailIconPath_k__BackingField; // 0x78
		::System::UInt32 _Rarity_k__BackingField; // 0x80
		::System::UInt32 _AvatarID_k__BackingField; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_EQUALS_OFFSET))(this, other);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType filterType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, filterType);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::String* get_DetailIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_DETAILICONPATH_OFFSET))(this);
		}

		::System::Void set_DetailIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_DETAILICONPATH_OFFSET))(this, value);
		}

		::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_RARITY_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::UInt32 __iFixBaseProxy_GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET))(this, P0);
		}
	};
}
