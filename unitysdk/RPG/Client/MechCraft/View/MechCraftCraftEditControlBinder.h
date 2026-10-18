#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIDraggableManager; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditErrorHintControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditGamepadControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditTutorialDragTargetControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditingChipDetailControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftEditingChipPieceControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftPreviewChipPieceControl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNBACK1_OFFSET UNITYSDK_OFFSET(0xD60C800)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNBACK2_OFFSET UNITYSDK_OFFSET(0xD60C8B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNCANCELDRAG_OFFSET UNITYSDK_OFFSET(0xD60CC80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNCLEAR_OFFSET UNITYSDK_OFFSET(0xD60CAC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNREMOVE_OFFSET UNITYSDK_OFFSET(0xD60C960)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNROTATE_OFFSET UNITYSDK_OFFSET(0xD60CA10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_DRAGGABLEMANAGER_OFFSET UNITYSDK_OFFSET(0xD60C250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_EDITINGCHIPDETAIL_OFFSET UNITYSDK_OFFSET(0xD60CEA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_EDITINGCHIP_OFFSET UNITYSDK_OFFSET(0xD60CB70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_ERRORHINT_OFFSET UNITYSDK_OFFSET(0xD60D1F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_GAMEPAD_OFFSET UNITYSDK_OFFSET(0xD60B950)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANCLEAR_OFFSET UNITYSDK_OFFSET(0xD610300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANREMOVE_OFFSET UNITYSDK_OFFSET(0xD6101A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANROTATE_OFFSET UNITYSDK_OFFSET(0xD610250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_NODEBOARD_OFFSET UNITYSDK_OFFSET(0xD60CD30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_NODEBTNSOVERLAY_OFFSET UNITYSDK_OFFSET(0xD60FC80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_PREVIEWCHIP_OFFSET UNITYSDK_OFFSET(0xD60D080)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_SCROLLRECTMOLDS_OFFSET UNITYSDK_OFFSET(0xD611340)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_TUTORIALDRAGTARGET_OFFSET UNITYSDK_OFFSET(0xD60D320)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6113F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditControlBinder_TypeDefinitionIndex = 79876;

	class MechCraftCraftEditControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIDraggableManager* get_DraggableManager()
		{
			return ((::RPG::Client::UIDraggableManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_DRAGGABLEMANAGER_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeBoard()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_NODEBOARD_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditingChipPieceControl* get_EditingChip()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditingChipPieceControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_EDITINGCHIP_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditingChipDetailControl* get_EditingChipDetail()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditingChipDetailControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_EDITINGCHIPDETAIL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftPreviewChipPieceControl* get_PreviewChip()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftPreviewChipPieceControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_PREVIEWCHIP_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnBack1()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNBACK1_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnBack2()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNBACK2_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRemove()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNREMOVE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintCanRemove()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANREMOVE_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRotate()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNROTATE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintCanRotate()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANROTATE_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnClear()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNCLEAR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintCanClear()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_HINTCANCLEAR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnCancelDrag()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_BTNCANCELDRAG_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeBtnsOverlay()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_NODEBTNSOVERLAY_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditErrorHintControl* get_ErrorHint()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditErrorHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_ERRORHINT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditTutorialDragTargetControl* get_TutorialDragTarget()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditTutorialDragTargetControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_TUTORIALDRAGTARGET_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRectMolds()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_SCROLLRECTMOLDS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftEditGamepadControl* get_Gamepad()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftEditGamepadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITCONTROLBINDER_GET_GAMEPAD_OFFSET))(this);
		}
	};
}
