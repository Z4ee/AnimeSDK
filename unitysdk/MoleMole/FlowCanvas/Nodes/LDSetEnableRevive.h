#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13693DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x13693E00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetEnableRevive_TypeDefinitionIndex = 79830;

	class LDSetEnableRevive : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE_INVOKE_OFFSET))(this, value);
		}
	};
}
