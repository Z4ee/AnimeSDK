#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipPieceEventTriggerListener; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipPieceShapeControl; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD61E680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_CANVASGROUP_OFFSET UNITYSDK_OFFSET(0xD61FEE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_EVENTTRIGGERLISTENER_OFFSET UNITYSDK_OFFSET(0xD61EBA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_HINTIMPROPER_OFFSET UNITYSDK_OFFSET(0xD61FC40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xD61E540)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_STATECTRLLOCKED_OFFSET UNITYSDK_OFFSET(0xD61FB90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_TUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xD61FCF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_VFXPLACED_OFFSET UNITYSDK_OFFSET(0xD61F590)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD61FFA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPlacedChipPieceControlBinder_TypeDefinitionIndex = 79873;

	class MechCraftCraftPlacedChipPieceControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipPieceEventTriggerListener* get_EventTriggerListener()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipPieceEventTriggerListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_EVENTTRIGGERLISTENER_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipPieceShapeControl* get_Shape()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipPieceShapeControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_SHAPE_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_CanvasGroup()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_CANVASGROUP_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_TutorialNode()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_TUTORIALNODE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintImproper()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_HINTIMPROPER_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrlLocked()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_STATECTRLLOCKED_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_VfxPlaced()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPLACEDCHIPPIECECONTROLBINDER_GET_VFXPLACED_OFFSET))(this);
		}
	};
}
