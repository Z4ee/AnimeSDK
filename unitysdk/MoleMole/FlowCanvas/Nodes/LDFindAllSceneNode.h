#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1298CE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1298C9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_START_OFFSET UNITYSDK_OFFSET(0x1298CB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1298D180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1298D1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x1298D1D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFindAllSceneNode_TypeDefinitionIndex = 64797;

	class LDFindAllSceneNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Boolean>* _resultStateNode; // 0xA8
		::FlowCanvas::FlowInput* _flowInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _withSelfNode; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* _result; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _includeNested; // 0xC8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::String*>*>* _resultNode; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* _nameNode; // 0xD8
		::FlowCanvas::FlowOutput* _flowOutput; // 0xE0
		::System::Boolean _resultState; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_START_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::System::String* Name, ::System::Boolean WithSelf, ::System::Boolean IncludeNested)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE_INVOKE_OFFSET))(this, Name, WithSelf, IncludeNested);
		}

		::System::Collections::Generic::List_1<::System::String*>* _RegisterPorts_b__9_0()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__9_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINDALLSCENENODE__REGISTERPORTS_B__9_1_OFFSET))(this);
		}
	};
}
