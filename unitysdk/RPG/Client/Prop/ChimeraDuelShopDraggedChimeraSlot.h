#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EventTriggerListener; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstance; }
namespace RPG::Client::Prop { class ChimeraDuelShopDraggedChimeraSlotView; }
namespace RPG::Client::Prop { class ChimeraDuelShopTeamDragAreas; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlot; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_BINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xADD8660)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_GET__DRAGHANDLERELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0xADD8480)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETCROSSSTALLDRAGAREALISTENER_OFFSET UNITYSDK_OFFSET(0xADD8830)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETDRAGAREAS_OFFSET UNITYSDK_OFFSET(0xADD8610)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xADD85A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SIMULATEDRAGOVERSLOT_OFFSET UNITYSDK_OFFSET(0xADD8880)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_UNBINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xADD8750)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xADD3BD0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEINDRAGPLANE_OFFSET UNITYSDK_OFFSET(0xADD8A60)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEVIEW_OFFSET UNITYSDK_OFFSET(0xADD8C50)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__ONDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xADD8B30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopDraggedChimeraSlot_TypeDefinitionIndex = 71853;

	class ChimeraDuelShopDraggedChimeraSlot : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstance* Instance; // 0x10
		::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas* _DragAreas; // 0x18
		::System::Action_1<::System::Boolean>* _InStallDragAreaListener; // 0x20
		::RPG::Client::EventTriggerListener* _BoundEventTrigger; // 0x28
		::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView* _View; // 0x30
		::System::Nullable_1<::System::Boolean> _WasInStallDragArea; // 0x38

		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView* view)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__CTOR_OFFSET))(this, view);
		}

		::UnityEngine::Vector3 get__DragHandleRelativePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_GET__DRAGHANDLERELATIVEPOSITION_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetDragAreas(::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas* areas)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETDRAGAREAS_OFFSET))(this, areas);
		}

		::System::Void BindDragEventTrigger(::RPG::Client::EventTriggerListener* eventTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EventTriggerListener*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_BINDDRAGEVENTTRIGGER_OFFSET))(this, eventTrigger);
		}

		::System::Void UnbindDragEventTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_UNBINDDRAGEVENTTRIGGER_OFFSET))(this);
		}

		::System::Void SetCrossStallDragAreaListener(::System::Action_1<::System::Boolean>* isInStallDragArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETCROSSSTALLDRAGAREALISTENER_OFFSET))(this, isInStallDragArea);
		}

		::System::Void SimulateDragOverSlot(::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* slot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SIMULATEDRAGOVERSLOT_OFFSET))(this, slot);
		}

		::System::Void _OnDragEvent(::UnityEngine::GameObject* go, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__ONDRAGEVENT_OFFSET))(this, go, data);
		}

		::System::Void _MoveInDragPlane(::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEINDRAGPLANE_OFFSET))(this, point);
		}

		::System::Void _MoveView(::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEVIEW_OFFSET))(this, point);
		}
	};
}
