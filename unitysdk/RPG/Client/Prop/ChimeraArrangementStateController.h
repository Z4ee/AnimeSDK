#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_Config; }
namespace RPG::Client::Prop { class ChimeraArrangementModelsPool; }
namespace RPG::Client::Prop { class ChimeraArrangementSceneOperator; }
namespace RPG::Client::Prop { class ChimeraArrangementSlot; }
namespace RPG::Client::Prop { class ChimeraArrangementStageSlotView; }
namespace RPG::Client::Prop { class ChimeraArrangementStateController_TeamMemberSlotsProfile; }
namespace RPG::Client::Prop { class ChimeraArrangementTouchInputListener; }
namespace RPG::Client::Prop { class ChimeraBillboardCanvasAdaptingScaler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_EXITPREPARATION_OFFSET UNITYSDK_OFFSET(0xADB3F50)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xADB1FC0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GET_TEAMMEMBERSLOTS_OFFSET UNITYSDK_OFFSET(0xADB1F30)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GOTOWORK_OFFSET UNITYSDK_OFFSET(0xADB3EB0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xADB2AE0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADB3120)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONTICK_OFFSET UNITYSDK_OFFSET(0xADB3010)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_PLAYTIMELINEENTER_OFFSET UNITYSDK_OFFSET(0xADB3930)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_REACTSHOWPANELS_OFFSET UNITYSDK_OFFSET(0xADB3BA0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_SETSTAGEVIEWVISIBILITY_OFFSET UNITYSDK_OFFSET(0xADB3480)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_STARTSTAGEVIEWDITHERHIDE_OFFSET UNITYSDK_OFFSET(0xADB3680)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__ALIGNSLOTSORIENTATION_OFFSET UNITYSDK_OFFSET(0xADB3FB0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADB4BC0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADB33E0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xADB2010)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__ONTIMELINEENTEREND_OFFSET UNITYSDK_OFFSET(0xADB3CD0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xADB4C80)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADB4D00)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONTICK_OFFSET UNITYSDK_OFFSET(0xADB4C90)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADB4D10)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET UNITYSDK_OFFSET(0xADB4BF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementStateController_TypeDefinitionIndex = 71986;

	class ChimeraArrangementStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::RPG::Client::Prop::ChimeraArrangementModelInstance_Config* _ChimeraModelConfig; // 0x38
		::UnityEngine::GameObject* _ChimeraPrefab; // 0x40
		::UnityEngine::Canvas* BillboardCanvas; // 0x48
		::RPG::Client::Prop::ChimeraBillboardCanvasAdaptingScaler* _BillboardCanvasScaler; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementSlot*>* NewMemberSlots; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementModelInstance*>* NewMemberInstances; // 0x60
		::UnityEngine::Transform* NoNewMembersHintAnchor; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementStateController_TeamMemberSlotsProfile*>* _TeamMemberSlotsProfiles; // 0x70
		::UnityEngine::Vector2 PickOffset; // 0x78
		::System::Single _DragPlaneZ; // 0x80
		::System::Single _DraggingScale; // 0x84
		::System::Single _DragRaycastZ; // 0x88
		::System::Single TalkPopupDuration; // 0x8C
		::System::Single FallDelayOnApplyPreset; // 0x90
		::System::Single FallDurationOnApplyPreset; // 0x94
		::UnityEngine::Playables::PlayableDirector* _TimelineEnter; // 0x98
		::RPG::Client::Prop::ChimeraArrangementSlot* _ReferenceSlot; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementStageSlotView*>*>* _StageSlotViews; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementSlot*>*>* _TeamMemberSlotsOfCount; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* _TeamMemberPropsRootOfCount; // 0xB8
		::System::Int32 _TeamMemberSlotCount; // 0xC0
		::RPG::Client::Prop::ChimeraArrangementModelsPool* ChimeraModelPool; // 0xC8
		::RPG::Client::Prop::ChimeraArrangementSceneOperator* SceneOperator; // 0xD0
		::RPG::Client::Prop::ChimeraArrangementTouchInputListener* TouchInputListener; // 0xD8
		::RPG::Client::LuaUIController* _LuaUIController; // 0xE0
		::System::Nullable_1<::System::UInt32> _BlockID; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementSlot*>* get_TeamMemberSlots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraArrangementSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GET_TEAMMEMBERSLOTS_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void OnTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONTICK_OFFSET))(this, deltaTime);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void _HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void SetStageViewVisibility(::System::Int32 index, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_SETSTAGEVIEWVISIBILITY_OFFSET))(this, index, visible);
		}

		::System::Void StartStageViewDitherHide(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_STARTSTAGEVIEWDITHERHIDE_OFFSET))(this, index);
		}

		::System::Void PlayTimelineEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_PLAYTIMELINEENTER_OFFSET))(this);
		}

		::System::Void ReactShowPanels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_REACTSHOWPANELS_OFFSET))(this);
		}

		::System::Void _OnTimelineEnterEnd(::UnityEngine::Playables::PlayableDirector* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__ONTIMELINEENTEREND_OFFSET))(this, _);
		}

		::System::Void GotoWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_GOTOWORK_OFFSET))(this);
		}

		::System::Void ExitPreparation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_EXITPREPARATION_OFFSET))(this);
		}

		::System::Void _AlignSlotsOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER__ALIGNSLOTSORIENTATION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
