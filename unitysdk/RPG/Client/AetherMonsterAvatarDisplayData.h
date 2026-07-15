#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AetherMonsterAvatarDisplayDataStatus.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::GameCore { class AetherDivideSpiritRow; }

#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x182E6BE0)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_GYMLOCATION_OFFSET UNITYSDK_OFFSET(0x182E7000)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x182E6C90)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x182D7530)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x182E6E30)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_RELATEDSPIRITDATA_OFFSET UNITYSDK_OFFSET(0x182E6D10)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x182E6EE0)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_SPIRITTYPE_OFFSET UNITYSDK_OFFSET(0x182E6F50)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x182E6CB0)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x182E6CA0)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x182E6C50)
#define RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182E6C40)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarDisplayData_TypeDefinitionIndex = 59469;

	class AetherMonsterAvatarDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::AetherMonsterAvatarData* _RelatedSpiritData; // 0x10
		::RPG::GameCore::AetherDivideSpiritRow* _Row; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AetherMonsterAvatarDisplayData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_UPDATESTATUS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarDisplayDataStatus get_Status()
		{
			return ((::RPG::Client::AetherMonsterAvatarDisplayDataStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::AetherSpiritType get_SpiritType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_SPIRITTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GymLocation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_GYMLOCATION_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideSpiritRow* get_Row()
		{
			return ((::RPG::GameCore::AetherDivideSpiritRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::AetherMonsterAvatarData* get_RelatedSpiritData()
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDISPLAYDATA_GET_RELATEDSPIRITDATA_OFFSET))(this);
		}
	};
}
