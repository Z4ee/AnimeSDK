#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_GRIDLAYOUT_OFFSET UNITYSDK_OFFSET(0xD5F9E90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_LISTTILES_OFFSET UNITYSDK_OFFSET(0xD5FA1B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_NODEAREA_OFFSET UNITYSDK_OFFSET(0xD600EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_NODEDROPPABLE_OFFSET UNITYSDK_OFFSET(0xD5F9CD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_PREFABTILE_OFFSET UNITYSDK_OFFSET(0xD5FF250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6011C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControlBinder_TypeDefinitionIndex = 79850;

	class MechCraftCraftBoardGroundControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_NODEAREA_OFFSET))(this);
		}

		::UnityEngine::UI::GridLayoutGroup* get_GridLayout()
		{
			return ((::UnityEngine::UI::GridLayoutGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_GRIDLAYOUT_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabTile()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_PREFABTILE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_ListTiles()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_LISTTILES_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeDroppable()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROLBINDER_GET_NODEDROPPABLE_OFFSET))(this);
		}
	};
}
