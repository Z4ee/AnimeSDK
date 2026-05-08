#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTBYLISTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E4BBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTBYLISTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4BE90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectByListNode_TypeDefinitionIndex = 60069;

	class LDRandomSelectByListNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* result; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* tempList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTBYLISTNODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke(::System::Collections::Generic::List_1<::System::Object*>* inputList, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTBYLISTNODE_INVOKE_OFFSET))(this, inputList, count);
		}
	};
}
