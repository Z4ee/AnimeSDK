#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTag; }

#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB93D2D0)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATETAG_OFFSET UNITYSDK_OFFSET(0xB93C0C0)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB93DB50)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_SHOWCONNECT_OFFSET UNITYSDK_OFFSET(0xB93DB70)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0xB93DB30)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SETSHOWCONNECTWITHGEARTYPE_OFFSET UNITYSDK_OFFSET(0xB93D360)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB93DB60)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_SHOWCONNECT_OFFSET UNITYSDK_OFFSET(0xB93DB80)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0xB93DB40)
#define RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB93DB20)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildDamageTagWithConnect_TypeDefinitionIndex = 59735;

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

		static ::RPG::Client::EvolveBuildDamageTagWithConnect* CreateTag(::System::UInt32 a1, ::RPG::GameCore::EvolveBuildSeason a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildDamageTagWithConnect*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATETAG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EvolveBuildDamageTagWithConnect* CreateDamageType(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::EvolveBuildDamageTagWithConnect*(*)(::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_CREATEDAMAGETYPE_OFFSET))(a1, a2);
		}

		::System::Void SetShowConnectWithGearType(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SETSHOWCONNECTWITHGEARTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildTag* get_Tag()
		{
			return ((::RPG::Client::EvolveBuildTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::RPG::Client::EvolveBuildTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_TAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_GET_SHOWCONNECT_OFFSET))(this);
		}

		::System::Void set_ShowConnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDAMAGETAGWITHCONNECT_SET_SHOWCONNECT_OFFSET))(this, a1);
		}
	};
}
