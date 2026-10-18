#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardGroundControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER_GET_GROUND_OFFSET UNITYSDK_OFFSET(0xD5EF500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER_GET_STATECTRLLEVEL_OFFSET UNITYSDK_OFFSET(0xD5EFF10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5EFFD0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardControlBinder_TypeDefinitionIndex = 79842;

	class MechCraftCraftBoardControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrlLevel()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER_GET_STATECTRLLEVEL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl* get_Ground()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDCONTROLBINDER_GET_GROUND_OFFSET))(this);
		}
	};
}
