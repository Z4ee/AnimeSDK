#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15112AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x15112BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x15112C20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAnimatorFloat_TypeDefinitionIndex = 82624;

	class LDGetAnimatorFloat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* SceneEntity; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Single>* Output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* Key; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__3_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORFLOAT__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
