#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15416330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x15416460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x154164A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAnimatorFloat_TypeDefinitionIndex = 81276;

	class LDSetAnimatorFloat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* SceneEntity; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* Key; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* Value; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETANIMATORFLOAT__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
