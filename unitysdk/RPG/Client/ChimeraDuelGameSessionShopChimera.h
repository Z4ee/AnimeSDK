#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_17;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET UNITYSDK_OFFSET(0x93A1FF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET UNITYSDK_OFFSET(0x93A1EE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0x93A1EB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93A1EC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x93A06C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93A1ED0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93A1F90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x93A1F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShopChimera_TypeDefinitionIndex = 51399;

	class ChimeraDuelGameSessionShopChimera : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* OnIsLockedChanged; // 0x10
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x18
		::System::Boolean _IsLocked_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* chimera, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_OFFSET))(this, chimera, isLocked);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionShopChimera* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_1_OFFSET))(this, other);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_CHIMERA_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShopChimera* Create(::Class_1_4CF8088A158DCE25_17* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::Class_1_4CF8088A158DCE25_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET))(serverData);
		}

		::System::Void CheckCanUpgradeAndLevelUpAny(::RPG::Client::ChimeraDuelGameSessionTeam* team, ::System::Boolean& canUpgradeAny, ::System::Boolean& canLevelUpAny)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET))(this, team, canUpgradeAny, canLevelUpAny);
		}
	};
}
