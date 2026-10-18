#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD676B60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD676C40)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopStarControlBinder_TypeDefinitionIndex = 80081;

	class MechCraftWorkshopStarControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}
	};
}
