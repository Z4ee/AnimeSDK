#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

namespace RPG::Client::PixAir { class PixAirBattleSettlementData; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xDAECAE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDAECB70)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_GET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xDAECB50)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_SET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xDAECB60)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_START_OFFSET UNITYSDK_OFFSET(0xDAEC830)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC820)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION__ONDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0xDAEC9E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleSettlementAction_TypeDefinitionIndex = 78802;

	class PixAirBattleSettlementAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirBattleSettlementData* _SettlementData_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirBattleSettlementData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirBattleSettlementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_START_OFFSET))(this);
		}

		::System::Void _OnDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION__ONDIALOGEXIT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_FINISH_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBattleSettlementData* get_SettlementData()
		{
			return ((::RPG::Client::PixAir::PixAirBattleSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_GET_SETTLEMENTDATA_OFFSET))(this);
		}

		::System::Void set_SettlementData(::RPG::Client::PixAir::PixAirBattleSettlementData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBattleSettlementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_SET_SETTLEMENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLESETTLEMENTACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
