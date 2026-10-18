#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MechCraft::View { class MechCraftChipImageControl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_CHIPIMAGE_OFFSET UNITYSDK_OFFSET(0xD603B70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_LISTCLICKTILES_OFFSET UNITYSDK_OFFSET(0xD604820)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_NODEDRAGGABLE_OFFSET UNITYSDK_OFFSET(0xD604760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_PREFABCLICKTILE_OFFSET UNITYSDK_OFFSET(0xD6049C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD604D00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipPieceShapeControlBinder_TypeDefinitionIndex = 79870;

	class MechCraftCraftChipPieceShapeControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftChipImageControl* get_ChipImage()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftChipImageControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_CHIPIMAGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeDraggable()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_NODEDRAGGABLE_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabClickTile()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_PREFABCLICKTILE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_ListClickTiles()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROLBINDER_GET_LISTCLICKTILES_OFFSET))(this);
		}
	};
}
