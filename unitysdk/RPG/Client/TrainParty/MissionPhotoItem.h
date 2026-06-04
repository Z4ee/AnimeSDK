#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0xCA8DAC0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xCA8DB40)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0xCA8DC90)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xCA8DC50)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0xCA8DBD0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xCA8D910)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_SETGENDER_OFFSET UNITYSDK_OFFSET(0xCA8D8C0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8DCA0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCA8DCC0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0xCA8DCD0)
#define RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET UNITYSDK_OFFSET(0xCA8DCB0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int MissionPhotoItem_TypeDefinitionIndex = 69365;

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

		::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 get_PhotoType()
		{
			return ((::Class_1_D1E0AD3915BCCF29_24_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_INITDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 __iFixBaseProxy_GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MISSIONPHOTOITEM___IFIXBASEPROXY_GETFILTERTYPEID_OFFSET))(this, a1);
		}
	};
}
