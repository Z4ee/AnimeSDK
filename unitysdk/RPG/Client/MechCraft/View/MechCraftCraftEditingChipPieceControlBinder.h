#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipPieceShapeControl; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD61B1C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_CANVASGROUP_OFFSET UNITYSDK_OFFSET(0xD61BC80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_HINTIMPROPERROTATION_OFFSET UNITYSDK_OFFSET(0xD61BE40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_NODEBTNSANCHOR_OFFSET UNITYSDK_OFFSET(0xD61A680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xD61A5D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD61CAB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditingChipPieceControlBinder_TypeDefinitionIndex = 79893;

	class MechCraftCraftEditingChipPieceControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipPieceShapeControl* get_Shape()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipPieceShapeControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_SHAPE_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_CanvasGroup()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_CANVASGROUP_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeBtnsAnchor()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_NODEBTNSANCHOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintImproperRotation()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROLBINDER_GET_HINTIMPROPERROTATION_OFFSET))(this);
		}
	};
}
