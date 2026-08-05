#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_SWITCHBOOL_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1EF8A590)
#define FLOWCANVAS_NODES_SWITCHBOOL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF8A490)
#define FLOWCANVAS_NODES_SWITCHBOOL_STARTCOROUTINEWRAP_OFFSET UNITYSDK_OFFSET(0x1EF8A5A0)
#define FLOWCANVAS_NODES_SWITCHBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8A5E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchBool_TypeDefinitionIndex = 31356;

	class SwitchBool : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Func_5<::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*, ::System::Int32, ::System::Boolean>** StaticGet_OnCall()
		{
			return (::System::Func_5<::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwitchBool_TypeDefinitionIndex)->GetStaticField(0x25F30);
		}
		::UnityEngine::Coroutine* coroutine; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL_ISCHOICENODE_OFFSET))(this);
		}

		::System::Void StartCoroutineWrap(::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL_STARTCOROUTINEWRAP_OFFSET))(this, enumerator);
		}
	};
}
