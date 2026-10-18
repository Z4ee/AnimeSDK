#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client::MechCraft::View { class MechCraftCustomerActorControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderRequirementControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER_GET_CUSTOMERACTORCONTROL_OFFSET UNITYSDK_OFFSET(0xD64BD30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER_GET_REQUIREMENTCONTROL_OFFSET UNITYSDK_OFFSET(0xD64BDE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD64BEA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderDetailInfoControlBinder_TypeDefinitionIndex = 79988;

	class MechCraftOrderDetailInfoControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCustomerActorControl* get_CustomerActorControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCustomerActorControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER_GET_CUSTOMERACTORCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderRequirementControl* get_RequirementControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderRequirementControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROLBINDER_GET_REQUIREMENTCONTROL_OFFSET))(this);
		}
	};
}
