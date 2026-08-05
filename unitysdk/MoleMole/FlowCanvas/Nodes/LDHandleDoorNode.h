#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEDOORNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A043A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEDOORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A043DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHandleDoorNode_TypeDefinitionIndex = 56151;

	class LDHandleDoorNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::FlowCanvas::Nodes::EDoorOperation>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEDOORNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::String*>* doorNames, ::MoleMole::FlowCanvas::Nodes::EDoorOperation operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::FlowCanvas::Nodes::EDoorOperation))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEDOORNODE_INVOKE_OFFSET))(this, doorNames, operation);
		}
	};
}
