#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

namespace RPG::Client::PixAir { class PixAirGameSettlementData; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xDB0C2F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDB0C420)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xDB0C400)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_SET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xDB0C410)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_START_OFFSET UNITYSDK_OFFSET(0xDB0C200)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDB0C1F0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSettlementAction_TypeDefinitionIndex = 78809;

	class PixAirGameSettlementAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirGameSettlementData* _SettlementData_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirGameSettlementData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirGameSettlementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_FINISH_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGameSettlementData* get_SettlementData()
		{
			return ((::RPG::Client::PixAir::PixAirGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_SETTLEMENTDATA_OFFSET))(this);
		}

		::System::Void set_SettlementData(::RPG::Client::PixAir::PixAirGameSettlementData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSettlementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_SET_SETTLEMENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
