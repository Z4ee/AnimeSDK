#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateView.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraBillboardCanvasAdaptingScaler; }
namespace RPG::Client::Prop { class ChimeraDuelShopDraggedChimeraSlotView; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDC21A90)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_GETTEAMMEMBERSLOTS_OFFSET UNITYSDK_OFFSET(0xDC210E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDC222F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC223E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDC22470)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleShopView_TypeDefinitionIndex = 77918;

	class ChimeraDuelMainPuzzleShopView : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView
	{
	public:
		::UnityEngine::Transform* _TeamMemberSlotsRoot; // 0x28
		::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView* DraggedChimeraSlot; // 0x30
		::UnityEngine::Canvas* BillboardCanvas; // 0x38
		::RPG::Client::Prop::ChimeraBillboardCanvasAdaptingScaler* BillboardCanvasScaler; // 0x40
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* _SwapMotion; // 0x48
		::UnityEngine::Transform* KeyMapAnchor; // 0x50
		::System::Action_1<::System::Single>* OnUpdate; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__CTOR_OFFSET))(this);
		}

		::System::Void add_OnUpdate(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_ADD_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_OnUpdate(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_REMOVE_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_UPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*>* GetTeamMemberSlots()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW_GETTEAMMEMBERSLOTS_OFFSET))(this);
		}
	};
}
