#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client::MechCraft::View { class MechCraftMechatronView; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROLBINDER_GET_MECHATRONVIEW_OFFSET UNITYSDK_OFFSET(0xD64F580)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD64F630)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftProductUI3DControlBinder_TypeDefinitionIndex = 80050;

	class MechCraftProductUI3DControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftMechatronView* get_MechatronView()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftMechatronView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROLBINDER_GET_MECHATRONVIEW_OFFSET))(this);
		}
	};
}
