#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16D35E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16D35F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x16D35F90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAnimatorBool_TypeDefinitionIndex = 71012;

	class LDGetAnimatorBool : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* SceneEntity; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Boolean>* Output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* Key; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORBOOL__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
