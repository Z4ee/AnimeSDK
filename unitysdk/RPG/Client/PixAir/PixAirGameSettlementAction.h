#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

namespace RPG::Client::PixAir { class PixAirGameSettlementData; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xC3D3B20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3D3C50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_GET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC3D3C30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_SET_SETTLEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC3D3C40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION_START_OFFSET UNITYSDK_OFFSET(0xC3D3A30)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D3A20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xC3D3CC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xC3D3C60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSettlementAction_TypeDefinitionIndex = 73612;

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

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESETTLEMENTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}
	};
}
