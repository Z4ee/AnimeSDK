#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D1D9320)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1D1D9A80)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D1D9240)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D1D9710)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D1D98C0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D1D99A0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D9B10)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D1D9B60)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x1D1D9B70)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_2_OFFSET UNITYSDK_OFFSET(0x1D1D9BA0)
#define FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_3_OFFSET UNITYSDK_OFFSET(0x1D1D9BD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CharacterControllerEvents_TypeDefinitionIndex = 30715;

	class CharacterControllerEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::CharacterController*>
	{
	public:
		::Il2CppArray<::System::Boolean>* wasGroundedMulti; // 0xC0
		::FlowCanvas::FlowOutput* onUnGrounded; // 0xC8
		::UnityEngine::ControllerColliderHit* hitInfo; // 0xD0
		::FlowCanvas::FlowOutput* onHit; // 0xD8
		::FlowCanvas::FlowOutput* onGrounded; // 0xE0
		::UnityEngine::CharacterController* receiver; // 0xE8
		::System::Boolean wasGrounded; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnControllerColliderHit(::ParadoxNotion::EventData_1<::UnityEngine::ControllerColliderHit*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::ControllerColliderHit*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, msg);
		}

		::UnityEngine::CharacterController* _RegisterPorts_b__9_0()
		{
			return ((::UnityEngine::CharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__9_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__9_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_2_OFFSET))(this);
		}

		::UnityEngine::ControllerColliderHit* _RegisterPorts_b__9_3()
		{
			return ((::UnityEngine::ControllerColliderHit*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHARACTERCONTROLLEREVENTS__REGISTERPORTS_B__9_3_OFFSET))(this);
		}
	};
}
