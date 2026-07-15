#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleBuffViewData.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x15138BE0)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_GET_ELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x15138E70)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_SET_ELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x15138E80)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15138D40)
#define RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__GETELATIONECHOPOINT_OFFSET UNITYSDK_OFFSET(0x15138DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBattleBuffViewData_TypeDefinitionIndex = 68293;

	class ElationBattleBuffViewData : public ::RPG::Client::BattleBuffViewData
	{
	public:
		::System::Single _ElationEchoPoint_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ElationBattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::Client::ElationBattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::Single _GetElationEchoPoint(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA__GETELATIONECHOPOINT_OFFSET))(this, a1);
		}

		::System::Single get_ElationEchoPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_GET_ELATIONECHOPOINT_OFFSET))(this);
		}

		::System::Void set_ElationEchoPoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFVIEWDATA_SET_ELATIONECHOPOINT_OFFSET))(this, a1);
		}
	};
}
