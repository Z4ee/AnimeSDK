#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B229BC73065D28E3_1;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_BREAK_OFFSET UNITYSDK_OFFSET(0x19DB6A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DB6880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_SEQUENCESAMPE_OFFSET UNITYSDK_OFFSET(0x19DB6BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_START_OFFSET UNITYSDK_OFFSET(0x19DB6AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x19DB6CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSequenceSamplePosition_TypeDefinitionIndex = 83433;

	class LDSequenceSamplePosition : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* handle; // 0xA8
		::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* _outputPosition; // 0xB0
		::FlowCanvas::FlowOutput* _flowOutputDo; // 0xB8
		::FlowCanvas::FlowOutput* _flowOutputFinish; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::Class_1_B229BC73065D28E3_1*>*>* _inputAnchors; // 0xC8
		::FlowCanvas::FlowOutput* _flowOutputOut; // 0xD0
		::System::Single leftTime; // 0xD8
		::UnityEngine::Vector3 outPosition; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_BREAK_OFFSET))(this, f);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_START_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* SequenceSampe()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION_SEQUENCESAMPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__8_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__REGISTERPORTS_B__8_0_OFFSET))(this);
		}
	};
}
