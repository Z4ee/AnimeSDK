#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_591;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionBaseData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaAvatarConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC45CB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GETPROMOTIONBYUNLOCKSTAR_OFFSET UNITYSDK_OFFSET(0xC45CD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC45CEE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_AVATARPOSTYPE_OFFSET UNITYSDK_OFFSET(0xC45CF30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC45CFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_GACHACONFIG_OFFSET UNITYSDK_OFFSET(0xC45CFD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_PROMOTIONS_OFFSET UNITYSDK_OFFSET(0xC45D180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xC45D1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_UNLOCKEDPROMOTIONS_OFFSET UNITYSDK_OFFSET(0xC45CFF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC45CFC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_GACHACONFIG_OFFSET UNITYSDK_OFFSET(0xC45CFE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_PROMOTIONS_OFFSET UNITYSDK_OFFSET(0xC45D190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xC45CD00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC45CCF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA__GET_UNLOCKEDPROMOTIONS_B__16_0_OFFSET UNITYSDK_OFFSET(0xC45D1F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarData_TypeDefinitionIndex = 75073;

	class IdleLiveAvatarData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* _Config_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* _GachaConfig_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* _Promotions_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Update(::Class_1_D17272E82AE804C2_591* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_591*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData* GetPromotionByUnlockStar(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GETPROMOTIONBYUNLOCKSTAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_AVATARID_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_AvatarPosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_AVATARPOSTYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* get_GachaConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_GACHACONFIG_OFFSET))(this);
		}

		::System::Void set_GachaConfig(::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_GACHACONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* get_UnlockedPromotions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_UNLOCKEDPROMOTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* get_Promotions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_PROMOTIONS_OFFSET))(this);
		}

		::System::Void set_Promotions(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_SET_PROMOTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA_GET_STAR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedPromotions_b__16_0(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionBaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARDATA__GET_UNLOCKEDPROMOTIONS_B__16_0_OFFSET))(this, a1);
		}
	};
}
