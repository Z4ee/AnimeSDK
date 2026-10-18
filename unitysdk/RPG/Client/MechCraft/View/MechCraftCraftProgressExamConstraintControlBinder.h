#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftConditionDescControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xD632E80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD633070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD633160)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressExamConstraintControlBinder_TypeDefinitionIndex = 79933;

	class MechCraftCraftProgressExamConstraintControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftConditionDescControl* get_ConditionDesc()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftConditionDescControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER_GET_CONDITIONDESC_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}
	};
}
