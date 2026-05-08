#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1174DDF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1174DF20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AddDynamicEndPerforms_TypeDefinitionIndex = 71375;

	class LD_AddDynamicEndPerforms : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* performIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS_INVOKE_OFFSET))(this, performIdList);
		}
	};
}
