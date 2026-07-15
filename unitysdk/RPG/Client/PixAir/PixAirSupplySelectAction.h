#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_91309440AC9D4CF8_10;
namespace RPG::Client::PixAir { class PixAirEquipDisplayData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_FINISHSUPPLYSTAGE_OFFSET UNITYSDK_OFFSET(0x1A0E0E20)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x1A0E0BA0)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0x1A0E1030)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GET_DISPLAYEQUIPITEM_OFFSET UNITYSDK_OFFSET(0x1A0E10A0)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0x1A0E10B0)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0x1A0E0B40)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1A0E0C10)
#define RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E0B00)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirSupplySelectAction_TypeDefinitionIndex = 75268;

	class PixAirSupplySelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirEquipDisplayData* _DisplayEquipItem_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_91309440AC9D4CF8_10* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_91309440AC9D4CF8_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_TAKEREWARD_OFFSET))(this);
		}

		::System::Void FinishSupplyStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_FINISHSUPPLYSTAGE_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipDisplayData* get_DisplayEquipItem()
		{
			return ((::RPG::Client::PixAir::PixAirEquipDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GET_DISPLAYEQUIPITEM_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSUPPLYSELECTACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
