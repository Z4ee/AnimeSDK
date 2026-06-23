#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_SWITCHPROBABILITY_ENTER_OFFSET UNITYSDK_OFFSET(0x1D6DDFE0)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6DDD10)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1D6DDFD0)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D6DDD30)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6DDD20)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY_STARTCOROUTINEWRAP_OFFSET UNITYSDK_OFFSET(0x1D6DE2B0)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DE2F0)
#define FLOWCANVAS_NODES_SWITCHPROBABILITY__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D6DE340)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchProbability_TypeDefinitionIndex = 29544;

	class SwitchProbability : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Func_5<::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32, ::System::Boolean>** StaticGet_OnCall()
		{
			return (::System::Func_5<::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwitchProbability_TypeDefinitionIndex)->GetStaticField(0x24BE0);
		}
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* probabilityOuts; // 0xB0
		::Il2CppArray<::System::Single>* cacheValues; // 0xB8
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<::System::Single>*>* probabilityValues; // 0xC0
		::System::Int32 current; // 0xC8
		::System::Int32 _portCount; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_ISCHOICENODE_OFFSET))(this);
		}

		::System::Void Enter(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_ENTER_OFFSET))(this, f);
		}

		::System::Void StartCoroutineWrap(::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY_STARTCOROUTINEWRAP_OFFSET))(this, enumerator);
		}

		::System::Int32 _RegisterPorts_b__10_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHPROBABILITY__REGISTERPORTS_B__10_0_OFFSET))(this);
		}
	};
}
