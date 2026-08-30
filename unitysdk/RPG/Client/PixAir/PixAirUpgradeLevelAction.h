#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_D17272E82AE804C2_807;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_CREATEUPGRADEEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD19630)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_FINISHUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1BD195E0)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0x1BD19690)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GET_MAXUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1BD196E0)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0x1BD19700)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_SET_MAXUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1BD196F0)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_UPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1BD19400)
#define RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD193D0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirUpgradeLevelAction_TypeDefinitionIndex = 78816;

	class PixAirUpgradeLevelAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::UInt32 _MaxUpgradeLevel_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_807* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_807*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void UpgradeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_UPGRADELEVEL_OFFSET))(this, a1);
		}

		::System::Void FinishUpgradeLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_FINISHUPGRADELEVEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* CreateUpgradeEquipInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_CREATEUPGRADEEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::System::UInt32 get_MaxUpgradeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GET_MAXUPGRADELEVEL_OFFSET))(this);
		}

		::System::Void set_MaxUpgradeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_SET_MAXUPGRADELEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRUPGRADELEVELACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
