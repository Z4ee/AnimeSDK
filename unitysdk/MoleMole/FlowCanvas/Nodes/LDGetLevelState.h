#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x170C2C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x170C29A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x170C2DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x170C2E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x170C2F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0x170C2FC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLevelState_TypeDefinitionIndex = 48365;

	class LDGetLevelState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Struct_2_A47ACAABA9AAFE92 stateValue; // 0xA8
		::FlowCanvas::FlowInput* beginFlowInput; // 0xC0
		::FlowCanvas::FlowOutput* _output; // 0xC8
		::MoleMole::LevelStateDefine_ELevelStateName LevelStateName; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_BEGIN_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_3_OFFSET))(this);
		}
	};
}
