#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirGameSession; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x1C843C80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0x1C843D00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_START_OFFSET UNITYSDK_OFFSET(0x1C843A90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C843A70)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION__ONDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x1C843C30)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShowUpgradeViewAction_TypeDefinitionIndex = 78804;

	class PixAirEquipShowUpgradeViewAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipInstance*>* _EquipList; // 0x18
		::RPG::Client::PixAir::PixAirGameSession* _GameSession; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipInstance*>* a1, ::RPG::Client::PixAir::PixAirGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipInstance*>*, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_START_OFFSET))(this);
		}

		::System::Void _OnDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION__ONDIALOGEXIT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_FINISH_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOWUPGRADEVIEWACTION_GET_NODECASE_OFFSET))(this);
		}
	};
}
