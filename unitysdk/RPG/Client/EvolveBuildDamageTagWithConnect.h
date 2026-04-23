#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTag; }

#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA2B5E40)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATETAG_OFFSET UNITYSDK_OFFSET(0xA2B4D90)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA2B6620)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_SHOWCONNECT_OFFSET UNITYSDK_OFFSET(0xA2B6640)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA2B6600)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SETSHOWCONNECTWITHGEARTYPE_OFFSET UNITYSDK_OFFSET(0xA2B5ED0)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA2B6630)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_SHOWCONNECT_OFFSET UNITYSDK_OFFSET(0xA2B6650)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0xA2B6610)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B65F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildDamageTagWithConnect_TypeDefinitionIndex = 58805;

	class EvolveBuildDamageTagWithConnect : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildTag* _Tag_k__BackingField; // 0x10
		::System::Boolean _ShowConnect_k__BackingField; // 0x18
		::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildDamageTagWithConnect* CreateTag(::System::UInt32 id, ::RPG::GameCore::EvolveBuildSeason season, ::System::Boolean showConnect)
		{
			return ((::RPG::Client::EvolveBuildDamageTagWithConnect*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATETAG_OFFSET))(id, season, showConnect);
		}

		static ::RPG::Client::EvolveBuildDamageTagWithConnect* CreateDamageType(::RPG::GameCore::AttackDamageType damageType, ::System::Boolean showConnect)
		{
			return ((::RPG::Client::EvolveBuildDamageTagWithConnect*(*)(::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATEDAMAGETYPE_OFFSET))(damageType, showConnect);
		}

		::System::Void SetShowConnectWithGearType(::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SETSHOWCONNECTWITHGEARTYPE_OFFSET))(this, gearType);
		}

		::RPG::Client::EvolveBuildTag* get_Tag()
		{
			return ((::RPG::Client::EvolveBuildTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::RPG::Client::EvolveBuildTag* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_TAG_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_DAMAGETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_ShowConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_SHOWCONNECT_OFFSET))(this);
		}

		::System::Void set_ShowConnect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_SHOWCONNECT_OFFSET))(this, value);
		}
	};
}
