#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_22_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"

namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xB33AB30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xB33ACA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0xB33AF00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_REDDOTID_OFFSET UNITYSDK_OFFSET(0xB33AEF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_SHOWICONPATH_OFFSET UNITYSDK_OFFSET(0xB33AF10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB33AF30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xB33AA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SET_SHOWICONPATH_OFFSET UNITYSDK_OFFSET(0xB33AF20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB33AF40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB33AC00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB33AF50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM__INITTAGFLAGS_OFFSET UNITYSDK_OFFSET(0xB33ACF0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDIYPhotoItem_TypeDefinitionIndex = 68556;

	class TrainPartyBuildDIYPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYItem
	{
	public:
		::System::String* _ShowIconPath_k__BackingField; // 0x68
		::System::UInt32 _UniqueID_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_EQUALS_OFFSET))(this, other);
		}

		::System::Void Sync(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SYNC_OFFSET))(this, uniqueID);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType filterType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, filterType);
		}

		::System::Void _InitTagFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM__INITTAGFLAGS_OFFSET))(this);
		}

		::System::UInt32 get_ReddotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_REDDOTID_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_ISACTIVITY_OFFSET))(this);
		}

		::System::String* get_ShowIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_SHOWICONPATH_OFFSET))(this);
		}

		::System::Void set_ShowIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SET_SHOWICONPATH_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYPHOTOITEM_SET_UNIQUEID_OFFSET))(this, value);
		}
	};
}
