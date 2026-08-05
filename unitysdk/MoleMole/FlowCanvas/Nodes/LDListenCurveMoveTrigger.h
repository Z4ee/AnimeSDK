#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_27069D8215DFD35F;
class Class_2_27069D8215DFD35F_1;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1B534C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1B534E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_LOCALAVATARCHECK_OFFSET UNITYSDK_OFFSET(0x1B535790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1B5350C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B535020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B535070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1B5351D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1B5354B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B5348A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_START_OFFSET UNITYSDK_OFFSET(0x1B534A80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1B534E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B535970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B5359B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1B5359E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B535A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B535AA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenCurveMoveTrigger_TypeDefinitionIndex = 46021;

	class LDListenCurveMoveTrigger : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* outTriggerExit; // 0xA8
		::FlowCanvas::FlowOutput* midTriggerExit; // 0xB0
		::FlowCanvas::FlowOutput* inTriggerEnter; // 0xB8
		::FlowCanvas::FlowOutput* outTriggerEnter; // 0xC0
		::FlowCanvas::FlowOutput* inTriggerExit; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::FlowOutput* midTriggerEnter; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xE0
		::System::UInt32 listenEntityId; // 0xE8
		::System::Boolean nodeEnter; // 0xEC
		::System::Boolean bindEvent; // 0xED

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_START_OFFSET))(this, f);
		}

		::System::Void Interrupt(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_INTERRUPT_OFFSET))(this, f);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnTriggerEnter(::Class_2_27069D8215DFD35F_1* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_27069D8215DFD35F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONTRIGGERENTER_OFFSET))(this, evt);
		}

		::System::Void OnTriggerExit(::Class_2_27069D8215DFD35F* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_27069D8215DFD35F*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_ONTRIGGEREXIT_OFFSET))(this, evt);
		}

		::System::Boolean LocalAvatarCheck(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER_LOCALAVATARCHECK_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENCURVEMOVETRIGGER___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
