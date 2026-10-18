#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class StaticListView; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROLBINDER_GET_CONDITIONLIST_OFFSET UNITYSDK_OFFSET(0xD64F570)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD64F620)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderMainTargetControlBinder_TypeDefinitionIndex = 79992;

	class MechCraftOrderMainTargetControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_ConditionList()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROLBINDER_GET_CONDITIONLIST_OFFSET))(this);
		}
	};
}
