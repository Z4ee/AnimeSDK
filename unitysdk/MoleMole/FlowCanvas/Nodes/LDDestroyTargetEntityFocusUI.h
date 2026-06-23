#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x18B1F6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B1EE00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_START_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B1EF10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1F740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18B1F780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI___SENDENTITYDESTROYTARGETUI_OFFSET UNITYSDK_OFFSET(0x18B1F210)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetEntityFocusUI_TypeDefinitionIndex = 80856;

	class LDDestroyTargetEntityFocusUI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* removeHpBarInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_START_INVOKE_OFFSET))(this, f);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void __SendEntityDestroyTargetUI(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI___SENDENTITYDESTROYTARGETUI_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYFOCUSUI__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
