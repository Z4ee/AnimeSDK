#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A045900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A045A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptInputEnableAction_TypeDefinitionIndex = 82005;

	class LDInterruptInputEnableAction : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION_INVOKE_OFFSET))(this, tag);
		}
	};
}
