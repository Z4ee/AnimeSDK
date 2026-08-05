#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

class Class_1_B419CE8F81850DEC;

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B83A110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B83A280)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetPosUIWarnNode_TypeDefinitionIndex = 62622;

	class LDSetTargetPosUIWarnNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Int32>
	{
	public:
		::Class_1_B419CE8F81850DEC* param; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean warnState, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE_INVOKE_OFFSET))(this, warnState, index);
		}
	};
}
