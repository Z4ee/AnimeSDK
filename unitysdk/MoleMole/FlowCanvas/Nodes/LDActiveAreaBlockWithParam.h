#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BADFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BADE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAE590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveAreaBlockWithParam_TypeDefinitionIndex = 45453;

	class LDActiveAreaBlockWithParam : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke(::FlowCanvas::Flow f, ::System::Int32 templateId, ::System::Collections::Generic::List_1<::System::String*>* inheritVariableName, ::System::Int32 areaId)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM_INVOKE_OFFSET))(this, f, templateId, inheritVariableName, areaId);
		}
	};
}
