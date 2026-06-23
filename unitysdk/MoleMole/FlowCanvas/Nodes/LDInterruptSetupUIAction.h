#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BB4470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB44F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptSetupUIAction_TypeDefinitionIndex = 67910;

	class LDInterruptSetupUIAction : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Boolean, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean IgnoreFadeAnimation, ::System::String* SetupTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION_INVOKE_OFFSET))(this, IgnoreFadeAnimation, SetupTag);
		}
	};
}
