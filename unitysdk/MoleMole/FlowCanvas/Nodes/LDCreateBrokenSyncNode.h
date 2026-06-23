#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_ONENTIYREADY_OFFSET UNITYSDK_OFFSET(0x17E6B430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17E6A9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_TRYCREATEBROKEN_OFFSET UNITYSDK_OFFSET(0x17E6AB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6B6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x17E6B700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x17E6B770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateBrokenSyncNode_TypeDefinitionIndex = 45784;

	class LDCreateBrokenSyncNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* monsterIdInput; // 0xB8
		::MoleMole::Battle::Entity* monster; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* anchorInput; // 0xC8
		::System::Boolean isWattingEntityReady; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCreateBroken(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_TRYCREATEBROKEN_OFFSET))(this, f);
		}

		::System::Void OnEntiyReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE_ONENTIYREADY_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__6_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENSYNCNODE__REGISTERPORTS_B__6_1_OFFSET))(this);
		}
	};
}
