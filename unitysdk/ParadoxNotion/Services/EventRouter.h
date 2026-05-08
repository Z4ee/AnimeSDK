#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ParadoxNotion::Services { class EventRouter_CustomEventDelegate; }
namespace ParadoxNotion::Services { class EventRouter_EventDelegate; }
namespace ParadoxNotion::Services { template <typename T> class EventRouter_EventDelegate_1; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1A2B0110)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1A2B0210)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B0720)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B0820)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B1130)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1A2B0C20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B1230)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1A2B0D20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B1330)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B0E20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1A2B09C0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A2B1E60)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1A2AE8B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AFC80)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFB80)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AE3B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A2AE4B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFA80)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AA260)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AF4A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1A2AF5A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1A2AF6A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1A2AF7A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1A2AA2E0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A2AE9B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1A2956B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A2AE2B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AE0B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A2ADEB0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2ADFB0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A2AE1B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1A2AE5B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A2AE7B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A2AEAB0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2AFE70)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2AFF70)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B1950)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A2AAA50)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B1A50)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2AAAD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B1B50)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B1640)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A2AE6B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1A2ADD20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_INVOKECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A2B1F60)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1A2B0310)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1A2B0390)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B0920)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B0970)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B1430)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1A2B0F20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B14E0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1A2B0FD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B1590)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B1080)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1A2B0AC0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AFE20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFDD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFD80)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AF8A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AF8F0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1A2AF940)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1A2AF990)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1A2AF9E0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1A2AFA30)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1A2B0B70)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2B0070)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2B00C0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B1C50)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A2B1740)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B1D00)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2B17F0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B1DB0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B18A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1A2B0190)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1A2B0290)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B07A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2B08A0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B11B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1A2B0CA0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B12B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1A2B0DA0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B13B0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B0EA0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1A2B0A40)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A2B1EE0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1A2AE930)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AFD00)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFC00)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AE430)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A2AE530)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2AFB00)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AA500)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AF520)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1A2AF620)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1A2AF720)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1A2AF820)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1A2AA580)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A2AEA30)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1A295810)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A2AE330)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AE130)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A2ADF30)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2AE030)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A2AE230)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1A2AE630)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A2AE830)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A2AEB30)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2AFEF0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2AFFF0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1A2B19D0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A2AACF0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1A2B1AD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2AAD70)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A2B1BD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A2B16C0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A2AE730)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1A2AF290)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A2AEF20)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A2AEFD0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A2AF340)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A2AEE70)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AED10)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERENTERHANDLER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A2AEBB0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2AEC60)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A2AEDC0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1A2AF080)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A2AF1E0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISUBMITHANDLER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A2AF3F0)
#define PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A2AF130)
#define PARADOXNOTION_SERVICES_EVENTROUTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B1FF0)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int EventRouter_TypeDefinitionIndex = 27037;

	class EventRouter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _animator; // 0x18
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onPointerEnter; // 0x20
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onPointerExit; // 0x28
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onPointerDown; // 0x30
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onPointerUp; // 0x38
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onPointerClick; // 0x40
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onDrag; // 0x48
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onDrop; // 0x50
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* onScroll; // 0x58
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* onUpdateSelected; // 0x60
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* onSelect; // 0x68
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* onDeselect; // 0x70
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::AxisEventData*>* onMove; // 0x78
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* onSubmit; // 0x80
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseDown; // 0x88
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseDrag; // 0x90
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseEnter; // 0x98
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseExit; // 0xA0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseOver; // 0xA8
		::ParadoxNotion::Services::EventRouter_EventDelegate* onMouseUp; // 0xB0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onEnable; // 0xB8
		::ParadoxNotion::Services::EventRouter_EventDelegate* onDisable; // 0xC0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onDestroy; // 0xC8
		::ParadoxNotion::Services::EventRouter_EventDelegate* onTransformChildrenChanged; // 0xD0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onTransformParentChanged; // 0xD8
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::System::Int32>* onAnimatorIK; // 0xE0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onAnimatorMove; // 0xE8
		::ParadoxNotion::Services::EventRouter_EventDelegate* onBecameInvisible; // 0xF0
		::ParadoxNotion::Services::EventRouter_EventDelegate* onBecameVisible; // 0xF8
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::ControllerColliderHit*>* onControllerColliderHit; // 0x100
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::GameObject*>* onParticleCollision; // 0x108
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* onCollisionEnter; // 0x110
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* onCollisionExit; // 0x118
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* onCollisionStay; // 0x120
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* onCollisionEnter2D; // 0x128
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* onCollisionExit2D; // 0x130
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* onCollisionStay2D; // 0x138
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* onTriggerEnter; // 0x140
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* onTriggerExit; // 0x148
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* onTriggerStay; // 0x150
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* onTriggerEnter2D; // 0x158
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* onTriggerExit2D; // 0x160
		::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* onTriggerStay2D; // 0x168
		::ParadoxNotion::Services::EventRouter_CustomEventDelegate* onCustomEvent; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void add_onPointerEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERENTER_OFFSET))(this, value);
		}

		::System::Void remove_onPointerEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERENTER_OFFSET))(this, value);
		}

		::System::Void add_onPointerExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTEREXIT_OFFSET))(this, value);
		}

		::System::Void remove_onPointerExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTEREXIT_OFFSET))(this, value);
		}

		::System::Void add_onPointerDown(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERDOWN_OFFSET))(this, value);
		}

		::System::Void remove_onPointerDown(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERDOWN_OFFSET))(this, value);
		}

		::System::Void add_onPointerUp(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERUP_OFFSET))(this, value);
		}

		::System::Void remove_onPointerUp(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERUP_OFFSET))(this, value);
		}

		::System::Void add_onPointerClick(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPOINTERCLICK_OFFSET))(this, value);
		}

		::System::Void remove_onPointerClick(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPOINTERCLICK_OFFSET))(this, value);
		}

		::System::Void add_onDrag(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDRAG_OFFSET))(this, value);
		}

		::System::Void remove_onDrag(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDRAG_OFFSET))(this, value);
		}

		::System::Void add_onDrop(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDROP_OFFSET))(this, value);
		}

		::System::Void remove_onDrop(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDROP_OFFSET))(this, value);
		}

		::System::Void add_onScroll(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSCROLL_OFFSET))(this, value);
		}

		::System::Void remove_onScroll(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSCROLL_OFFSET))(this, value);
		}

		::System::Void add_onUpdateSelected(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONUPDATESELECTED_OFFSET))(this, value);
		}

		::System::Void remove_onUpdateSelected(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONUPDATESELECTED_OFFSET))(this, value);
		}

		::System::Void add_onSelect(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSELECT_OFFSET))(this, value);
		}

		::System::Void remove_onSelect(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSELECT_OFFSET))(this, value);
		}

		::System::Void add_onDeselect(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDESELECT_OFFSET))(this, value);
		}

		::System::Void remove_onDeselect(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDESELECT_OFFSET))(this, value);
		}

		::System::Void add_onMove(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::AxisEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::AxisEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOVE_OFFSET))(this, value);
		}

		::System::Void remove_onMove(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::AxisEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::AxisEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOVE_OFFSET))(this, value);
		}

		::System::Void add_onSubmit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONSUBMIT_OFFSET))(this, value);
		}

		::System::Void remove_onSubmit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONSUBMIT_OFFSET))(this, value);
		}

		::System::Void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERENTERHANDLER_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IDropHandler_OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IScrollHandler_OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IUpdateSelectedHandler_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_ISelectHandler_OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IDeselectHandler_OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_IMoveHandler_OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET))(this, eventData);
		}

		::System::Void UnityEngine_EventSystems_ISubmitHandler_OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_UNITYENGINE_EVENTSYSTEMS_ISUBMITHANDLER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void add_onMouseDown(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEDOWN_OFFSET))(this, value);
		}

		::System::Void remove_onMouseDown(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEDOWN_OFFSET))(this, value);
		}

		::System::Void add_onMouseDrag(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEDRAG_OFFSET))(this, value);
		}

		::System::Void remove_onMouseDrag(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEDRAG_OFFSET))(this, value);
		}

		::System::Void add_onMouseEnter(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEENTER_OFFSET))(this, value);
		}

		::System::Void remove_onMouseEnter(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEENTER_OFFSET))(this, value);
		}

		::System::Void add_onMouseExit(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEEXIT_OFFSET))(this, value);
		}

		::System::Void remove_onMouseExit(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEEXIT_OFFSET))(this, value);
		}

		::System::Void add_onMouseOver(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEOVER_OFFSET))(this, value);
		}

		::System::Void remove_onMouseOver(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEOVER_OFFSET))(this, value);
		}

		::System::Void add_onMouseUp(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONMOUSEUP_OFFSET))(this, value);
		}

		::System::Void remove_onMouseUp(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONMOUSEUP_OFFSET))(this, value);
		}

		::System::Void OnMouseDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEDOWN_OFFSET))(this);
		}

		::System::Void OnMouseDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEDRAG_OFFSET))(this);
		}

		::System::Void OnMouseEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEENTER_OFFSET))(this);
		}

		::System::Void OnMouseExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEEXIT_OFFSET))(this);
		}

		::System::Void OnMouseOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEOVER_OFFSET))(this);
		}

		::System::Void OnMouseUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONMOUSEUP_OFFSET))(this);
		}

		::System::Void add_onEnable(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONENABLE_OFFSET))(this, value);
		}

		::System::Void remove_onEnable(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONENABLE_OFFSET))(this, value);
		}

		::System::Void add_onDisable(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDISABLE_OFFSET))(this, value);
		}

		::System::Void remove_onDisable(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDISABLE_OFFSET))(this, value);
		}

		::System::Void add_onDestroy(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONDESTROY_OFFSET))(this, value);
		}

		::System::Void remove_onDestroy(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONDESTROY_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void add_onTransformChildrenChanged(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onTransformChildrenChanged(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this, value);
		}

		::System::Void add_onTransformParentChanged(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRANSFORMPARENTCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onTransformParentChanged(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRANSFORMPARENTCHANGED_OFFSET))(this, value);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void add_onAnimatorIK(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONANIMATORIK_OFFSET))(this, value);
		}

		::System::Void remove_onAnimatorIK(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONANIMATORIK_OFFSET))(this, value);
		}

		::System::Void add_onAnimatorMove(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONANIMATORMOVE_OFFSET))(this, value);
		}

		::System::Void remove_onAnimatorMove(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONANIMATORMOVE_OFFSET))(this, value);
		}

		::System::Void OnAnimatorIK(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONANIMATORIK_OFFSET))(this, layerIndex);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONANIMATORMOVE_OFFSET))(this);
		}

		::System::Void add_onBecameInvisible(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONBECAMEINVISIBLE_OFFSET))(this, value);
		}

		::System::Void remove_onBecameInvisible(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONBECAMEINVISIBLE_OFFSET))(this, value);
		}

		::System::Void add_onBecameVisible(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONBECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Void remove_onBecameVisible(::ParadoxNotion::Services::EventRouter_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONBECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void add_onControllerColliderHit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::ControllerColliderHit*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::ControllerColliderHit*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, value);
		}

		::System::Void remove_onControllerColliderHit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::ControllerColliderHit*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::ControllerColliderHit*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, value);
		}

		::System::Void add_onParticleCollision(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONPARTICLECOLLISION_OFFSET))(this, value);
		}

		::System::Void remove_onParticleCollision(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONPARTICLECOLLISION_OFFSET))(this, value);
		}

		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* hit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, hit);
		}

		::System::Void OnParticleCollision(::UnityEngine::GameObject* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONPARTICLECOLLISION_OFFSET))(this, other);
		}

		::System::Void add_onCollisionEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONENTER_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONENTER_OFFSET))(this, value);
		}

		::System::Void add_onCollisionExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONEXIT_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONEXIT_OFFSET))(this, value);
		}

		::System::Void add_onCollisionStay(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONSTAY_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionStay(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONSTAY_OFFSET))(this, value);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONENTER_OFFSET))(this, collisionInfo);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONEXIT_OFFSET))(this, collisionInfo);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONSTAY_OFFSET))(this, collisionInfo);
		}

		::System::Void add_onCollisionEnter2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONENTER2D_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionEnter2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONENTER2D_OFFSET))(this, value);
		}

		::System::Void add_onCollisionExit2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONEXIT2D_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionExit2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONEXIT2D_OFFSET))(this, value);
		}

		::System::Void add_onCollisionStay2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCOLLISIONSTAY2D_OFFSET))(this, value);
		}

		::System::Void remove_onCollisionStay2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collision2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCOLLISIONSTAY2D_OFFSET))(this, value);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONENTER2D_OFFSET))(this, collisionInfo);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONEXIT2D_OFFSET))(this, collisionInfo);
		}

		::System::Void OnCollisionStay2D(::UnityEngine::Collision2D* collisionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONCOLLISIONSTAY2D_OFFSET))(this, collisionInfo);
		}

		::System::Void add_onTriggerEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERENTER_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerEnter(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERENTER_OFFSET))(this, value);
		}

		::System::Void add_onTriggerExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGEREXIT_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerExit(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGEREXIT_OFFSET))(this, value);
		}

		::System::Void add_onTriggerStay(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERSTAY_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerStay(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERSTAY_OFFSET))(this, value);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERSTAY_OFFSET))(this, other);
		}

		::System::Void add_onTriggerEnter2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERENTER2D_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerEnter2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERENTER2D_OFFSET))(this, value);
		}

		::System::Void add_onTriggerExit2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGEREXIT2D_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerExit2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGEREXIT2D_OFFSET))(this, value);
		}

		::System::Void add_onTriggerStay2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONTRIGGERSTAY2D_OFFSET))(this, value);
		}

		::System::Void remove_onTriggerStay2D(::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_EventDelegate_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONTRIGGERSTAY2D_OFFSET))(this, value);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerStay2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ONTRIGGERSTAY2D_OFFSET))(this, other);
		}

		::System::Void add_onCustomEvent(::ParadoxNotion::Services::EventRouter_CustomEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_CustomEventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_ADD_ONCUSTOMEVENT_OFFSET))(this, value);
		}

		::System::Void remove_onCustomEvent(::ParadoxNotion::Services::EventRouter_CustomEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter_CustomEventDelegate*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_REMOVE_ONCUSTOMEVENT_OFFSET))(this, value);
		}

		::System::Void InvokeCustomEvent(::System::String* name, ::System::Object* value, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_EVENTROUTER_INVOKECUSTOMEVENT_OFFSET))(this, name, value, sender);
		}
	};
}
