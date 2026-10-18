#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class RPGFadeAnimation; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftAssistantControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldBankControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipPieceCollectionControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftPartnersControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftSubmitControl; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace Sofa { class ShortCutHintControl; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0xD608010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_BOARD_OFFSET UNITYSDK_OFFSET(0xD6076A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_BTNEXIT_OFFSET UNITYSDK_OFFSET(0xD606D60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_CHIPMOLDBANK_OFFSET UNITYSDK_OFFSET(0xD607540)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0xD607750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_EDIT_OFFSET UNITYSDK_OFFSET(0xD6075F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_FADEANIMATION_OFFSET UNITYSDK_OFFSET(0xD606BD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_FADEANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD607490)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xD607F00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD607CE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD606EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0xD607BB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_TIMELINEFADEIN_OFFSET UNITYSDK_OFFSET(0xD6073D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ZONELOADING_OFFSET UNITYSDK_OFFSET(0xD607210)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xD607080)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD608630)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftControlBinder_TypeDefinitionIndex = 79905;

	class MechCraftCraftControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::RPGFadeAnimation* get_FadeAnimation()
		{
			return ((::RPG::Client::RPGFadeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_FADEANIMATION_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableDirector* get_TimelineFadeIn()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_TIMELINEFADEIN_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_FadeAnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_FADEANIMTRIGGER_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldBankControl* get_ChipMoldBank()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipMoldBankControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_CHIPMOLDBANK_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftBoardControl* get_Board()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftBoardControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_BOARD_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipPieceCollectionControl* get_ChipPieces()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipPieceCollectionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_CHIPPIECES_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditControl* get_Edit()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_EDIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftSubmitControl* get_Submit()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftSubmitControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_SUBMIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressControl* get_Progress()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_PROGRESS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftPartnersControl* get_Partners()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftPartnersControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_PARTNERS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftAssistantControl* get_Assistant()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftAssistantControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ASSISTANT_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExit()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_BTNEXIT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_ZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ZONEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_ZoneLoading()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_ZONELOADING_OFFSET))(this);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROLBINDER_GET_SHORTCUTHINT_OFFSET))(this);
		}
	};
}
