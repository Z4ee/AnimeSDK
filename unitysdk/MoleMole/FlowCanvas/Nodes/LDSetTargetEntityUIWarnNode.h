#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

class Class_1_B419CE8F81850DEC;

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BE2D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE2F00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetEntityUIWarnNode_TypeDefinitionIndex = 41167;

	class LDSetTargetEntityUIWarnNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::UInt32>
	{
	public:
		::Class_1_B419CE8F81850DEC* param; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean warnState, ::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE_INVOKE_OFFSET))(this, warnState, id);
		}
	};
}
