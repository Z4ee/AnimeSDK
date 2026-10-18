#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD66DCE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD66DDB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointPhaseControlBinder_TypeDefinitionIndex = 80061;

	class MechCraftTalentPointPhaseControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTPHASECONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}
	};
}
