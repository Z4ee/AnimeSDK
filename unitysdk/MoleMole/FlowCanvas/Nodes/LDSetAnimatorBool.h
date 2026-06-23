#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D41260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D41390)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x10D413D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAnimatorBool_TypeDefinitionIndex = 70444;

	class LDSetAnimatorBool : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* SceneEntity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* Key; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* Value; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORBOOL__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
