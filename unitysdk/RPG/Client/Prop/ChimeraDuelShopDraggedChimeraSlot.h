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

#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_BINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xC51CA20)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_GET__DRAGHANDLERELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0xC51C650)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETCROSSSTALLDRAGAREALISTENER_OFFSET UNITYSDK_OFFSET(0xC51CC10)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETDRAGAREAS_OFFSET UNITYSDK_OFFSET(0xC51C9D0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC51C960)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SIMULATEDRAGOVERSLOT_OFFSET UNITYSDK_OFFSET(0xC51CC60)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_UNBINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xC51CB20)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xC51C770)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEINDRAGPLANE_OFFSET UNITYSDK_OFFSET(0xC51CE40)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEVIEW_OFFSET UNITYSDK_OFFSET(0xC51D030)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__ONDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xC51CF10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopDraggedChimeraSlot_TypeDefinitionIndex = 72875;

	class ChimeraDuelShopDraggedChimeraSlot : public ::System::Object
	{
	public:
		::RPG::Client::EventTriggerListener* _BoundEventTrigger; // 0x10
		::System::Action_1<::System::Boolean>* _InStallDragAreaListener; // 0x18
		::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas* _DragAreas; // 0x20
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstance* Instance; // 0x28
		::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView* _View; // 0x30
		::System::Nullable_1<::System::Boolean> _WasInStallDragArea; // 0x38

		::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlotView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get__DragHandleRelativePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_GET__DRAGHANDLERELATIVEPOSITION_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetDragAreas(::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopTeamDragAreas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETDRAGAREAS_OFFSET))(this, a1);
		}

		::System::Void BindDragEventTrigger(::RPG::Client::EventTriggerListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EventTriggerListener*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_BINDDRAGEVENTTRIGGER_OFFSET))(this, a1);
		}

		::System::Void UnbindDragEventTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_UNBINDDRAGEVENTTRIGGER_OFFSET))(this);
		}

		::System::Void SetCrossStallDragAreaListener(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SETCROSSSTALLDRAGAREALISTENER_OFFSET))(this, a1);
		}

		::System::Void SimulateDragOverSlot(::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT_SIMULATEDRAGOVERSLOT_OFFSET))(this, a1);
		}

		::System::Void _OnDragEvent(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__ONDRAGEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void _MoveInDragPlane(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEINDRAGPLANE_OFFSET))(this, a1);
		}

		::System::Void _MoveView(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOT__MOVEVIEW_OFFSET))(this, a1);
		}
	};
}
