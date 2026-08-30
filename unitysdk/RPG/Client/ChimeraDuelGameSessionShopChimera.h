#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_25;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET UNITYSDK_OFFSET(0x1C1D14C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1D13A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0x1C1D1370)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1D1380)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C1CFA50)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1D1390)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1D1450)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1440)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShopChimera_TypeDefinitionIndex = 63391;

	class ChimeraDuelGameSessionShopChimera : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* OnIsLockedChanged; // 0x10
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x18
		::System::Boolean _IsLocked_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionShopChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShopChimera* Create(::Class_1_21C7581DFE99F091_25* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::Class_1_21C7581DFE99F091_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET))(a1);
		}

		::System::Void CheckCanUpgradeAndLevelUpAny(::RPG::Client::ChimeraDuelGameSessionTeam* a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET))(this, a1, a2, a3);
		}
	};
}
