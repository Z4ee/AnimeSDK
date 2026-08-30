#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xE2428E0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xE242960)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xE242AE0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE242A70)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xE2429F0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xE242730)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_SETGENDER_OFFSET UNITYSDK_OFFSET(0xE2426E0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE242B30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int MissionPhotoItem_TypeDefinitionIndex = 74186;

	class MissionPhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::RPG::GameCore::GenderType _Gender; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetGender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_SETGENDER_OFFSET))(this, a1);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D17272E82AE804C2_282_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}
	};
}
