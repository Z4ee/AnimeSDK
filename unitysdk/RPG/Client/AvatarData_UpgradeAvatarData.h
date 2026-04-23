#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_661;
class Class_1_96A52A8F71E6742B;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D76D30)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_ORIGINAVATAR_OFFSET UNITYSDK_OFFSET(0x9D76C80)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_UPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x9D76C90)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9D78DF0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SETWORLDLEVELSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9D77510)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D77070)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET UNITYSDK_OFFSET(0x9D78840)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D76CA0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x9D77860)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARPROMOTION_OFFSET UNITYSDK_OFFSET(0x9D77900)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x9D77C20)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x9D779B0)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDRANK_OFFSET UNITYSDK_OFFSET(0x9D78D00)
#define RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x9D770C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData_UpgradeAvatarData_TypeDefinitionIndex = 57628;

	class AvatarData_UpgradeAvatarData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _UpgradeAvatar; // 0x10
		::RPG::Client::AvatarData* _OriginAvatar; // 0x18
		::Class_0_16E4307DCC419505_661* _WorldLevelStrategy; // 0x20
		::Class_1_96A52A8F71E6742B* _UpgradeAvatarChecker; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_OriginAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_ORIGINAVATAR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_UpgradeAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_UPGRADEAVATAR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarData_UpgradeAvatarData* Create(::RPG::Client::IAvatarInfoProvider* origin)
		{
			return ((::RPG::Client::AvatarData_UpgradeAvatarData*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_CREATE_OFFSET))(origin);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_UPDATE_OFFSET))(this);
		}

		::System::Void SetWorldLevelStrategy(::Class_0_16E4307DCC419505_661* worldLevelStrategy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_661*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_SETWORLDLEVELSTRATEGY_OFFSET))(this, worldLevelStrategy);
		}

		::System::Void _InternalUpdate(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__INTERNALUPDATE_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARLEVEL_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedAvatarPromotion(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARPROMOTION_OFFSET))(this, originAvatarData);
		}

		::RPG::Client::EquipmentItemData* _GetUpgradedEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDEQUIPMENT_OFFSET))(this, originAvatarData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetUpgradedAvatarRelic(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDAVATARRELIC_OFFSET))(this, originAvatarData);
		}

		::System::Void _BuildSkillTreesAndSkills(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 _GetUpgradedRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA__GETUPGRADEDRANK_OFFSET))(this, originAvatarData);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_UPGRADEAVATARDATA_GET_WORLDLEVEL_OFFSET))(this);
		}
	};
}
