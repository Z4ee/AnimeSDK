#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftConditionDescControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xD634250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD634300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD634400)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressOrderConstraintControlBinder_TypeDefinitionIndex = 79938;

	class MechCraftCraftProgressOrderConstraintControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftConditionDescControl* get_ConditionDesc()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftConditionDescControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER_GET_CONDITIONDESC_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSORDERCONSTRAINTCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}
	};
}
