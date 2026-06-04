#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xCA8BAD0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETDETAILIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCA8BA70)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xCA8BB50)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCA8BD20)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xCA8BD10)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCA8BD40)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xCA8BCD0)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xCA8BC50)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xCA8B850)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCA8BD30)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xCA8BD50)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8BD60)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCA8BD80)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xCA8BD90)
#define RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET UNITYSDK_OFFSET(0xCA8BD70)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int AvatarSkinPhotoItem_TypeDefinitionIndex = 69363;

	class AvatarSkinPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::UInt32 _AvatarID_k__BackingField; // 0x78
		::System::UInt32 _Rarity_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::String* GetDetailImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETDETAILIMAGEPATH_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM_SET_RARITY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 __iFixBaseProxy_GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_AVATARSKINPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET))(this, a1);
		}
	};
}
